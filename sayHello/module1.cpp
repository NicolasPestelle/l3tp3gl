#include "module1.hpp"

std::string getHello(int n) {
  //int * ptr = 0;
  //*ptr = 37;
  std::string str = "La réponse est : ";
  str += std::to_string(n);
  str += "!";
  return str;
}

