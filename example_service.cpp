#include "example_service.h"

/* Sends an example "Hello world!" notification. */
void ExampleService::Pull() {
  _notifier->Notify("Hello world!", "This is an example notification.");
}
