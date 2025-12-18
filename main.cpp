#include <iostream>
#include "main.h"

int main() {

  printMenu();
  asciiDuck();

  int option = -1; // Player option.

  do {
    std::cout << "Choose an option: ";
    std::cin >> option;

    switch (option)
    {
    case 1:
      std::cout << "Choice 1" << std::endl; break;
    case 2:  std::cout << "Choice 2" << std::endl; break;
    case 0: break;
    default:
    std::cout << "QUACK: Not a valid number!" << std::endl;
      break;
    }
  }
  while (option != 0); // Exit prompt

    return 0;
}

void printMenu(){
  std::cout << "--- Ducky CLI ---" << std::endl;
}

void asciiDuck(){
  std::cout  << 
  "  __"     << std::endl <<
  "<(o )___" << std::endl <<
  " ( ._> /" << std::endl <<
  "  `---'"  << std::endl <<
  std::endl;
}


