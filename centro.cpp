#include <string>
#include <libnotifymm.h>
#include "notification_platform.h"

/*
 * The main class for Centro. Holds one NotificationPlatform and many Services.
 * Services can send push notifications to CentroNotifier, and CentroNotifier
 * will display the notification using the current NotificationPlatform.
 */
class CentroNotifier {
  public:
    CentroNotifier();
    ~CentroNotifier();
    void Notify(std::string title, std::string description, std::string icon="dialog-information");
};

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
