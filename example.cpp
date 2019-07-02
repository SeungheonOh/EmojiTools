#include <iostream>
#include <string>
#include "EmojiTools.h"


int main(){
  std::cout << EmojiTools::deEmojize("Hello World!😄");
  return 0;
}
