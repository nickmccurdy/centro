#include "notifier.h"
#include "platforms/example_platform.h"
#include "services/example_service.h"
#include <iostream>

/* Displays a notification to the user with the current Platform. */
void Notifier::Notify(std::string title, std::string description) {
  _platform.Notify(title, description);
}

bool isInTestMode(int argc, char* argv[]) {
  for (int i = 1; i < argc; ++i) {
    if (std::string(argv[i]) == "--test") {
      return true;
    }
  }
  return false;
}

/*
 * Starts up Centro by initializing a Platform and a Service.
 */
int main(int argc, char* argv[]) {
  ExamplePlatform examplePlatform;
  Notifier notifier(examplePlatform);
  ExampleService service(notifier);
  if (isInTestMode(argc, argv)) {
    service.Pull();
  } else {
    service.Start();
  }
}
