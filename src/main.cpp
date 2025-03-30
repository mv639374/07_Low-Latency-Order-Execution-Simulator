#include "order_simulator.h"
#include <iostream>

int main() {
    OrderSimulator simulator;
    simulator.runSimulation(1200, 30); // 1200 orders, 30 scenarios
    return 0;
}