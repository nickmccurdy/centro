#include <unistd.h>

#include "service.h"

/*
 * Starts polling for changes from the appropriate service. This method will
 * continously pull changes at the Service's interval as long as the Service is
 * not paused.
 */
void Service::Start() {
  while(true) {
    if(!_paused) {
      Pull();
    }
    sleep(_interval);
  }
}

/* Temporarily silences notifications for the Service. */
void Service::Pause() {
  _paused = true;
}

/* Unsilences notifications for the Service. */
void Service::Unpause() {
  _paused = false;
}
