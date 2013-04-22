#ifndef CENTRO_H
#define CENTRO_H

#include <string>

#include "notification_platform.h"

/*
 * The main class for Centro. Holds one NotificationPlatform and many Services.
 * Services can send push notifications to Notifier, and CentroNotifier will
 * display the notification using the current NotificationPlatform.
 */
class Notifier {
  public:
    Notifier(NotificationPlatform *platform) {
      _platform = platform;
    }
    //~Notifier();
    void Notify(std::string title, std::string description, std::string icon="dialog-information");
  private:
    NotificationPlatform *_platform;
};

#endif
