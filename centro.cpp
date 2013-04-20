#include <stdlib.h>
#include <unistd.h>
#include <libnotifymm.h>

void notify(std::string title, std::string description, std::string icon="dialog-information") {
  Notify::Notification Hello(title, description, icon);
  Hello.show();
}

int main(int argc, char* argv[]) {
  Notify::init("Centro");
  notify("Hello world!", "This is an example notification.");
}
