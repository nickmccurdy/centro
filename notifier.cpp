#include "notifier.h"
#include "platforms/libnotify_platform.h"
#include "services/example_service.h"

/* Displays a notification to the user with the current Platform. */
void Notifier::Notify(std::string title, std::string description, std::string icon) {
  _platform->Notify(title, description, icon);
}

/*
 * Starts up Centro by initializing a Platform and a Service.
 */
int main(int argc, char* argv[]) {
  LibnotifyPlatform libnotifyPlatform;
  Platform * platform;
  platform = dynamic_cast<Platform*>(&libnotifyPlatform);

  Notifier notifier(platform);
  ExampleService service(&notifier);
  service.Start();
}
