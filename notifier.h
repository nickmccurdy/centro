#ifndef CENTRO_H
#define CENTRO_H

#include <string>

#include "platforms/platform.h"

/*
 * The main class for Centro. Holds one Platform and many Services. Services can
 * send push notifications to Notifier, and Notifier will display the
 * notification using the current Platform.
 */
class Notifier {
  public:
    Notifier(Platform *platform) {
      _platform = platform;
    }
    ~Notifier() {
      delete _platform;
    }
    void Notify(std::string title, std::string description, std::string icon="dialog-information");
  private:
    Platform *_platform;
};

#endif
