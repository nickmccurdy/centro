#include "platform.h"
#include "example_platform.h"
#include <iostream>

/* Sends a notification via stdout. */
void ExamplePlatform::Notify(std::string title, std::string description) {
  std::cout << title << ": " << description << "\n";
}
