#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <string>
#include <vector>

struct Device {
    std::string name;
    std::string owner;
    bool connected;
};

class BluetoothSimulator {
public:
    BluetoothSimulator();
    void scanDevices();
    void simulateDeauth(int index);
    void simulateInterference(int index);
    void showDefenses();

private:
    std::vector<Device> devices;
};

#endif
