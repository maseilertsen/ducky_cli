#ifndef MAIN_H
#define MAIN_H

#include <vector>
#include <chrono>
#include <string>

// Menu functions
void printMenu();
void asciiDuck();
void menuOne();


// Read/Write from file
void savePrompts();


struct PromptData{
   std::chrono::year_month_day timestamp;
   std::string prompt;
};

// Storage
std::vector<PromptData> prompts;
#endif