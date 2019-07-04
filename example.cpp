#include <iostream>
#include <string>
#include <chrono>
#include "EmojiTools.h"


int main(){
  auto start = std::chrono::high_resolution_clock::now();
  std::string a = "Hello World!😄";
  EmojiTools::loadEmojiList();
  std::cout << EmojiTools::deEmojize(a) << std::endl;
  std::cout << EmojiTools::deEmojize<char>(a, '{', '}') << std::endl;
  std::cout << "Numbers of emojis : " << EmojiTools::countEmoji(a) << std::endl;
  std::cout << EmojiTools::getEmoji("thumbsup") << std::endl;
  std::cout << EmojiTools::emojize(":thumbsup: Hello world!") << std::endl;
  auto finish = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> elapsed = finish - start;
  std::cout << "Elapsed time: " << elapsed.count() << " s\n";
  return 0;
}
