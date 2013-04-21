#include <string>
#include <list>
#include <libnotifymm.h>

class CentroNotifier {
  public:
    CentroNotifier();
    ~CentroNotifier();
    void Notify(std::string title, std::string description, std::string icon="dialog-information");
};

void CentroNotifier::Notify(std::string title, std::string description, std::string icon) {
  Notify::Notification notification(title, description, icon);
  notification.show();
}

int main(int argc, char* argv[]) {
  Notify::init("Centro");
  CentroNotifier::CentroNotifier *centroNotifier;
  centroNotifier->Notify("Hello world!", "This is an example notification.");
}
