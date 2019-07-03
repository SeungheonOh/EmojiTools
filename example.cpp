#include <iostream>
#include <string>
#include "EmojiTools.h"


int main(){
  std::string a = "Hello World!😄";
  std::cout << EmojiTools::deEmojize(a) << std::endl;
  std::cout << EmojiTools::deEmojize<char>(a, '{', '}') << std::endl;
  std::cout << EmojiTools::countEmoji(a) << std::endl;
  return 0;
}
