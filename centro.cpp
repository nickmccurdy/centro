#include "centro.h"
#include "libnotify_platform.h"

/* Displays a notification to the user with the current NotificationPlatform. */
void CentroNotifier::Notify(std::string title, std::string description, std::string icon) {
  _platform->Notify(title, description, icon);
}

/*
 * Starts up Centro by initializing the NotificationPlatform and creating an
 * example notification.
 */
int main(int argc, char* argv[]) {
  LibnotifyPlatform * libnotifyPlatform = new LibnotifyPlatform;
  NotificationPlatform * platform;
  platform = dynamic_cast<NotificationPlatform*>(libnotifyPlatform);

  CentroNotifier centroNotifier(platform);
  centroNotifier.Notify("Hello world!", "This is an example notification.");
}
