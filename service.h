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
    }
    //~Service();
    void Start();
    void Pause();
    void Unpause();
  protected:
    CentroNotifier *_notifier;
  private:
    int _interval;
    int _paused;
    virtual void Pull() = 0;
};

#endif
