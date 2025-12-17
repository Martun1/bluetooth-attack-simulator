#include "simulator.h"
#include <iostream>

BluetoothSimulator::BluetoothSimulator() {
    devices.push_back({"JBL_Speaker", "Phone_A", true});
    devices.push_back({"Sony_Headphones", "Phone_B", true});
    devices.push_back({"Car_Audio", "Phone_C", true});
}

void BluetoothSimulator::scanDevices() {
    std::cout << "\n[Scanning Bluetooth Devices]\n";
    for (size_t i = 0; i < devices.size(); i++) {
        std::cout << i + 1 << ". " << devices[i].name
                  << " | Connected to: " << devices[i].owner << "\n";
    }
}

void BluetoothSimulator::simulateDeauth(int index) {
    if (index < 0 || index >= devices.size()) {
        std::cout << "Invalid device.\n";
        return;
    }
    std::cout << "\n[Simulating Deauthentication Attack]\n";
    std::cout << "Target: " << devices[index].name << "\n";
    std::cout << "Connection dropped (SIMULATION)\n";
    std::cout << "Defense: Pairing confirmation, MAC filtering\n";
}

void BluetoothSimulator::simulateInterference(int index) {
    if (index < 0 || index >= devices.size()) {
        std::cout << "Invalid device.\n";
        return;
    }
    std::cout << "\n[Simulating Signal Interference]\n";
    std::cout << "Target: " << devices[index].name << "\n";
    std::cout << "Signal degraded (SIMULATION)\n";
    std::cout << "Defense: Frequency hopping, stronger encryption\n";
}

void BluetoothSimulator::showDefenses() {
    std::cout << "\n[Bluetooth Security Defenses]\n";
    std::cout << "- Disable auto-pairing\n";
    std::cout << "- Use secure pairing modes\n";
    std::cout << "- Monitor unknown devices\n";
    std::cout << "- Keep firmware updated\n";
}
