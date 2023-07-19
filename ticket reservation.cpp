#include <iostream>
#include <vector>
#include <string>

// Base class for services
class Service {
public:
    virtual void reserve() = 0;
};

// Subclasses for different services
class Flight : public Service {
public:
    void reserve() override {
        std::cout << "Flight reservation\n";
    }
};

class Hotel : public Service {
public:
    void reserve() override {
        std::cout << "Hotel reservation\n";
    }
};

class Event : public Service {
public:
    void reserve() override {
        std::cout << "Event reservation\n";
    }
};

int main() {
    std::vector<Service*> services;

    // Create instances of each service
    Flight flight;
    Hotel hotel;
    Event event;

    // Add the services to the vector
    services.push_back(&flight);
    services.push_back(&hotel);
    services.push_back(&event);

    // Demonstrate reserving each service
    for (const auto& service : services) {
        service->reserve();
    }

    return 0;
}
