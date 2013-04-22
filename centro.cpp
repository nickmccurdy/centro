#include <string>
#include <libnotifymm.h>

#include "centro.h"
#include "notification_platform.h"

/* Displays a notification to the user. Currently uses libnotify. */
void CentroNotifier::Notify(std::string title, std::string description, std::string icon) {
  Notify::Notification notification(title, description, icon);
  notification.show();
}

/*
 * Starts up Centro by initializing libnotify and creating an example
 * notification.
 */
int main(int argc, char* argv[]) {
  Notify::init("Centro");
  CentroNotifier::CentroNotifier *centroNotifier;
  centroNotifier->Notify("Hello world!", "This is an example notification.");
}
