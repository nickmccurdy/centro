#ifndef EXAMPLE_SERVICE_H
#define EXAMPLE_SERVICE_H

#include <string>
#include <libnotifymm.h>

#include "service.h"

/* An example Service that can display "Hello world!" notifications. */
class ExampleService : public Service {
  public:
    ExampleService(CentroNotifier *notifier, int interval = 5) : Service(notifier, interval) {}
    //~ExampleService();
  protected:
    void Pull();
};

#endif
