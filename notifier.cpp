#include "notifier.h"
#include "libnotify_platform.h"
#include "example_service.h"

/* Displays a notification to the user with the current NotificationPlatform. */
void Notifier::Notify(std::string title, std::string description, std::string icon) {
  _platform->Notify(title, description, icon);
}

/*
 * Starts up Centro by initializing a NotificationPlatform and a Service.
 */
int main(int argc, char* argv[]) {
  LibnotifyPlatform * libnotifyPlatform = new LibnotifyPlatform;
  NotificationPlatform * platform;
  platform = dynamic_cast<NotificationPlatform*>(libnotifyPlatform);

  Notifier centroNotifier(platform);
  ExampleService service(&centroNotifier);
  service.Start();
}
