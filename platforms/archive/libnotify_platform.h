#ifndef LIBNOTIFY_PLATFORM_H
#define LIBNOTIFY_PLATFORM_H

#include <string>
#include <libnotifymm.h>

/*
 * Adapts libnotify to work with the Platform spec. Should work on many
 * different Linux DEs and WMs (as long as a libnotify server is running).
 */
class LibnotifyPlatform : public Platform {
  public:
    LibnotifyPlatform() {
      Notify::init("Centro");
    }
    void Notify(std::string title, std::string description);
};

#endif
