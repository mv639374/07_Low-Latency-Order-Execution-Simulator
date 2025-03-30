#ifndef ORDER_SIMULATOR_H
#define ORDER_SIMULATOR_H

#include <zmq.hpp>
#include <thread>
#include <vector>
#include <queue>
#include <mutex>  // Add this line
#include <chrono>

class OrderSimulator {
public:
    OrderSimulator();
    void runSimulation(int orderCount, int scenarioCount);

private:
    zmq::context_t context;
    zmq::socket_t sender;
    zmq::socket_t receiver;
    std::vector<std::thread> workers;
    std::queue<std::string> orderQueue;
    std::mutex queueMutex;
    
    void processOrders(int workerId);
    void simulateMarketFeed();
    double measureLatency();
};

#endif