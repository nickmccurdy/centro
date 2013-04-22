#include <string>
#include <libnotifymm.h>

#include "notification_platform.h"
#include "libnotify_platform.h"

/* Initializes a new LibnotifyPlatform by setting the app name to "Centro". */
LibnotifyPlatform::LibnotifyPlatform() {
  Notify::init("Centro");
}

/* Sends a notification via libnotify. */
void LibnotifyPlatform::Notify(std::string title, std::string description, std::string icon) {
  Notify::Notification notification(title, description, icon);
  notification.show();
}
