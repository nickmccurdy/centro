/*
 * The main class for Centro. Holds one NotificationPlatform and many Services.
 * Services can send push notifications to CentroNotifier, and CentroNotifier
 * will display the notification using the current NotificationPlatform.
 */
class CentroNotifier {
  public:
    CentroNotifier();
    //~CentroNotifier();
    void Notify(std::string title, std::string description, std::string icon="dialog-information");
};
