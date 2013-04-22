/*
 * Adapts libnotify to work with the NotificationPlatform spec. Should work on
 * many different Linux DEs and WMs (as long as a libnotify server is running).
 */
class LibnotifyPlatform : public NotificationPlatform {
  public:
    LibnotifyPlatform();
    ~LibnotifyPlatform();
    void Notify(std::string title, std::string description, std::string icon="dialog-information");
};

/* Initializes a new LibnotifyPlatform by setting the app name to "Centro". */
LibnotifyPlatform::LibnotifyPlatform() {
  Notify::init("Centro");
}
