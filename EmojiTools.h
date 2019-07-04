#ifndef EmojiTools_H
#define EmojiTools_H

#include <string>
#include <sstream>
#include <fstream>
#include <map>
#include <utility>
#include <cmath>

#define EMOJILIST_FILENAME "emojis.txt"
#define EMOJILIST_SPERATOR ";"

namespace EmojiTools{
  static std::map<unsigned int, std::string> Emojis;
  void loadEmojiList(){
    std::ifstream emojiFile;
    emojiFile.open(EMOJILIST_FILENAME);
    std::string line;
    while(std::getline(emojiFile, line)){
      Emojis.insert(std::pair<unsigned int, std::string>(std::stoul(line.substr(0,8), nullptr, 16), line.substr(9)));
    }
  }
  std::pair<unsigned int, std::string> findByKey(unsigned int k){
    std::pair<unsigned int, std::string> ret;
    std::map<unsigned int, std::string>::iterator it;
    it = Emojis.find(k);
    ret = {it -> first, it -> second};
    return ret;
  }
  std::pair<unsigned int, std::string> findByValue(std::string v){
    std::pair<unsigned int, std::string> ret;
    for(const auto &it : Emojis){
      if(it.second == v){
        ret = {it.first, it.second};
        return ret;
      }
    }
    return ret;
  }
  template<class Divider = std::string> std::string deEmojize(std::string s, Divider dividerFront = ":", Divider dividerRear = ":"){
    std::string ret;
    unsigned int emojiBuffer = 0, index = 0;
    for(int i = 0; i < s.length(); i++){
      if(s[i] > 0){
        ret += s[i];
        continue;
      }
      emojiBuffer += (unsigned int)(unsigned char)s[i] << 8 * (3 - index++);
      std::pair<unsigned int, std::string> emojiName = findByKey(emojiBuffer);
      if(emojiName.second != ""){
        ret += dividerFront + emojiName.second + dividerRear;
        index = emojiBuffer = 0;
      }
    }
    return ret;
  }
  template<class Divider = std::string> void deEmojize(std::string *s, Divider dividerFront = ":", Divider dividerRear = ":"){
    std::string ret;
    unsigned int emojiBuffer = 0, index = 0;
    for(int i = 0; i < s -> length(); i++){
      if((*s)[i] > 0){
        ret += (*s)[i];
        continue;
      }
      emojiBuffer += (unsigned int)(unsigned char)(*s)[i] << 8 * (3 - index++);
      std::pair<unsigned int, std::string> emojiName = findByKey(emojiBuffer);
      if(emojiName.second != ""){
        ret += dividerFront + emojiName.second + dividerRear;
        index = emojiBuffer = 0;
      }
    }
    *s = ret;
  }
  std::string getEmoji(std::string s){
    std::stringstream emojiValue;
    unsigned int emojiHex = findByValue(s).first;
    emojiValue << (char)(emojiHex >> 8 * 3);
    for(int i = 1; i < 4; i++){
      emojiValue << (char)((emojiHex >> 8 * (3 - i)) - ((emojiHex >> 8 * (4 - i)) << 8));
    }
    return emojiValue.str();
    return "";
  }
  std::string emojize(std::string s){
    bool emojiStarts = false;
    std::string ret, emojiName;
    for(int i = 0; i < s.length(); i++){
      if(s[i] == ':'){
        if(emojiStarts){
          std::string emoji = EmojiTools::getEmoji(emojiName);
          ret += emoji;
          emojiName = "";
        }
        emojiStarts ^= true;
        continue;
      }
      if(emojiStarts){
        emojiName += s[i];
        continue;
      }
      ret += s[i];
    }
    return ret;
  }
  void emojize(std::string *s){
    bool emojiStarts = false;
    std::string ret, emojiName;
    for(int i = 0; i < s -> length(); i++){
      if((*s)[i] == ':'){
        if(emojiStarts){
          std::string emoji = EmojiTools::getEmoji(emojiName);
          ret += emoji;
          emojiName = "";
        }
        emojiStarts ^= true;
        continue;
      }
      if(emojiStarts){
        emojiName += (*s)[i];
        continue;
      }
      ret += (*s)[i];
    }
    *s = ret;
  }
  int countEmoji(std::string s){
    int emojiCount = 0;
    unsigned int emojiBuffer = 0, index = 0;
    for(int i = 0; i < s.length(); i++){
      if(s[i] > 0){
        continue;
      }
      emojiBuffer += (unsigned int)(unsigned char)s[i] << 8 * (3 - index++);
      std::pair<unsigned int, std::string> emojiName = findByKey(emojiBuffer);
      if(emojiName.second != ""){
        ++emojiCount;
        index = emojiBuffer = 0;
      }
    }
    return emojiCount;
  }
}

#endif
