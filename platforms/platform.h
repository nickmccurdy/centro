#ifndef NOTIFICATION_PLATFORM_H
#define NOTIFICATION_PLATFORM_H

#include <string>

/*
 * An adapter that provides a common interface for displaying notifications with
 * different platforms.
 *
 * Centro should eventually support:
 * - Toasts (Windows)
 * - Notification Center (Mac)
 * - Growl (Mac/Windows)
 * - libnotify (Linux)
 */
class Platform {
  public:
    Platform() {}
    virtual void Notify(std::string title, std::string description) = 0;
};

#endif
