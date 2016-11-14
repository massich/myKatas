#include <iostream>
#include <string>
#include "example_api.h"
using namespace std::literals;

int main()
{
  std::cout << "Hello, World!\n"s << example_api::get_zero();
}
