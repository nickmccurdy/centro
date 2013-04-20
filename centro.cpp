#include <stdlib.h>
#include <unistd.h>
#include <libnotifymm.h>

void notify() {
  Notify::init("Hello world!");
  Notify::Notification Hello("Hello world!", "This is an example notification.", "dialog-information");
  Hello.show();
}

int main(int argc, char* argv[]) {
  notify();
}
