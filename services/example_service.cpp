#include "example_service.h"
#include <iostream>

/* Sends an example "Hello world!" notification. */
void ExampleService::Pull() {
  _notifier.Notify("Hello world!", "This is an example notification.");
}
