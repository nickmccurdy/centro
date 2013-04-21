#include <string>

class NotificationPlatform {
  public:
    NotificationPlatform();
    ~NotificationPlatform();
    virtual void Notify(std::string title, std::string description, std::string icon="dialog-information") = 0;
};
