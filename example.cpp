#include <iostream>
#include <string>
#include "EmojiTools.h"


int main(){
  std::string a = "Hello World!😄";
  std::cout << EmojiTools::deEmojize(a) << std::endl;
  std::cout << EmojiTools::deEmojize<char>(a, '{', '}') << std::endl;
  std::cout << "Numbers of emojis : " << EmojiTools::countEmoji(a) << std::endl;
  std::cout << EmojiTools::getEmoji("thumbsup") << std::endl;
  std::cout << EmojiTools::emojize(":thumbsup: Hello world!") << std::endl;
  return 0;
}
