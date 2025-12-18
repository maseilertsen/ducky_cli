#include <iostream>
#include "functions.h"

int main() {

  
  int option = -1; // Player option.
  
  do {
    system("clear"); // clears terminal (Unix) "cls" in windows.
    asciiDuck();
    printMenu();
    std::cout << "Choose an option: ";
    std::cin >> option;
    std::cin.get();

    switch (option)
    {
    case 1:
      menuOne(); break;
    case 2:  std::cout << "Choice 2" << std::endl; break;
    case 0: break;
    default:
    std::cout << "QUACK: Not a valid number!" << std::endl;
      break;
    }
  } while (option != 0); // Exit prompt

    return 0;
}

// Prints main menu
void printMenu(){
  std::cout << std::endl << 
  "--- Ducky CLI ---"               << std::endl <<
  "1 - Quack about your challange"  << std::endl <<
  "2 - See previous challenges"     << std::endl <<
  "0 - Leave ducky alone"           << std::endl 
                                    << std::endl;
}

void asciiDuck(){
  std::cout  << 
  "  __"     << std::endl <<
  "<(o )___" << std::endl <<
  " ( ._> /" << std::endl <<
  "  `---'"  << std::endl;
}

void menuOne() {
  std::cout << "Where are you duck?" << std::endl 
            << "-> ";
  std::string prompt; // Variable to store user input

  // User input
  std::getline(std::cin, prompt);
  if (prompt == "" ){ return; }

  // Store in vector
  prompts.push_back(prompt);

  for (const auto& val : prompts){
    std::cout << "Vector: " << val << std::endl;
  }

}
