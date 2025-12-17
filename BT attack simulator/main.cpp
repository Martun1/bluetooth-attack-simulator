#include <iostream>
#include "simulator.h"

int main() {
    BluetoothSimulator sim;
    int choice, index;

    do {
        std::cout << "\n=== Bluetooth Attack Simulator (Educational) ===\n";
        std::cout << "1. Scan devices\n";
        std::cout << "2. Simulate deauthentication attack\n";
        std::cout << "3. Simulate signal interference\n";
        std::cout << "4. Show defensive techniques\n";
        std::cout << "5. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                sim.scanDevices();
                break;
            case 2:
                sim.scanDevices();
                std::cout << "Select device: ";
                std::cin >> index;
                sim.simulateDeauth(index - 1);
                break;
            case 3:
                sim.scanDevices();
                std::cout << "Select device: ";
                std::cin >> index;
                sim.simulateInterference(index - 1);
                break;
            case 4:
                sim.showDefenses();
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}
