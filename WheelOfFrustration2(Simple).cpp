#include <iostream>
#include <unistd.h> // for sleep()

int main()
{
    std::cout << "INIT SEQUENCE (-)" << std::flush;
    for (;;) {
        sleep(1);
        std::cout << "\b\b\\)" << std::flush;
        sleep(1);
        std::cout << "\b\b|)" << std::flush;
        sleep(1);
        std::cout << "\b\b/)" << std::flush;
        sleep(1);
        std::cout << "\b\b-)" << std::flush;
    }
}