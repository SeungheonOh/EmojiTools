#include <iostream>
#include <string>
#include "EmojiTools.h"


int main(){
  std::cout << EmojiTools::countEmoji("😄 😆 😊 😃 ☺️");
  return 0;
  /*
  std::ifstream input;
  std::ofstream output;
  input.open("input.txt");
  output.open("output.txt");
  std::string line;
  while(std::getline(input, line)){
    std::string s = emojicpp::emojize(line);
    unsigned int sum = 0;
    if(s.length() > 4) continue;
    for(int i = 0; i < s.length(); i++){
      sum += (unsigned int)(unsigned char)s[i] << 8 * (3 - i);
    }
    output << std::hex << sum << "/" << line << std::endl;
  }
  return 0;
  */
}
