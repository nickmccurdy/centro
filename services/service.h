#ifndef SERVICE_H
#define SERVICE_H

#include "../notifier.h"

/*
 * A superclass for classes that can pull information from various web services
 * and then push notifications of new information to a Notifier instance.
 */
class Service {
  public:
    Service(Notifier &notifier): _notifier(notifier) {
      _interval = 5;
      _paused = false;
    }
    void Start();
    void Pause();
    void Unpause();
    virtual void Pull() = 0;
  protected:
    Notifier &_notifier;
  private:
    int _interval;
    int _paused;
};

#endif
