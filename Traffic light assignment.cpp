#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int timer = 0;  // Set the timer to 0

    while (true) {
        switch (timer) {
            case 0:
                std::cout << "Traffic Light: RED" << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(3));  // Red light-3 seconds
                timer = 1;
                break;
            case 1:
                std::cout << "Traffic Light: YELLOW" << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(1));  // Yellow light-1 second
                timer = 2;
                break;
            case 2:
                std::cout << "Traffic Light: GREEN" << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(3));  // Green light-3 seconds
                timer = 0;
                break;
            default:
                std::cerr << "Invalid timer value" << std::endl;
                return 1;
        }
    }

    return 0;
}
