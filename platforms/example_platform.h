#ifndef EXAMPLE_PLATFORM_H
#define EXAMPLE_PLATFORM_H

#include <string>

/*
 * An example platform that simply prints notifications to stdout.
 */
class ExamplePlatform : public Platform {
  public:
    void Notify(std::string title, std::string description);
};

#endif
