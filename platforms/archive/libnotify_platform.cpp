#include "platform.h"
#include "libnotify_platform.h"

/* Sends a notification via libnotify. */
void LibnotifyPlatform::Notify(std::string title, std::string description) {
  Notify::Notification notification(title, description, "dialog-information");
  notification.show();
}
