#include <string>
#include <libnotifymm.h>
#include "notification_platform.h"

/*
 * Adapts libnotify to work with the NotificationPlatform spec. Should work on
 * many different Linux DEs and WMs (as long as a libnotify server is running).
 */
class LibnotifyPlatform : public NotificationPlatform {
  public:
    LibnotifyPlatform();
    ~LibnotifyPlatform();
    void Notify(std::string title, std::string description, std::string icon="dialog-information");
};

/* Initializes a new LibnotifyPlatform by setting the app name to "Centro". */
LibnotifyPlatform::LibnotifyPlatform() {
  Notify::init("Centro");
}

/* Sends a notification via libnotify. */
void LibnotifyPlatform::Notify(std::string title, std::string description, std::string icon) {
  Notify::Notification notification(title, description, icon);
  notification.show();
}
