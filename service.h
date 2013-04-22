#ifndef SERVICE_H
#define SERVICE_H

#include "centro.h"

/*
 * A superclass for classes that can pull information from various web services
 * and then push notifications of new information to a CentroNotifier instance.
 */
class Service {
  public:
    Service(CentroNotifier *notifier, int interval = 5) {
      _notifier = notifier;
      _interval = interval;
      _paused = false;
      Start();
    }
    //~Service();
    void Start();
    void Pause();
    void Unpause();
  private:
    CentroNotifier *_notifier;
    int _interval;
    int _paused;
    //virtual void Pull() = 0;
    void Pull();
};

#endif
