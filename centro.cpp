#include <stdlib.h>
#include <unistd.h>
#include <libnotifymm.h>

void notify() {
  Notify::Notification Hello("Hello world!", "This is an example notification.", "dialog-information");
  Hello.show();
}

int main(int argc, char* argv[]) {
  Notify::init("Centro");
  notify();
}
