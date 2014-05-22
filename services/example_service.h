#ifndef EXAMPLE_SERVICE_H
#define EXAMPLE_SERVICE_H

#include "service.h"

/* An example Service that can display "Hello world!" notifications. */
class ExampleService : public Service {
  public:
    ExampleService(Notifier *notifier) : Service(notifier) {}
    void Pull();
};

#endif
