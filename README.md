# Low-Latency Order Execution Simulator with ZeroMQ

A C++-based simulator for low-latency order execution using ZeroMQ messaging. Processes 1200+ mock orders with sub-millisecond latency, enhanced by multi-threaded queues and market-making logic.

## Features
- Processes 1200+ mock orders with sub-millisecond latency.
- Boosts throughput by 18% using multi-threaded ZeroMQ queues.
- Tests market-making logic across 30 scenarios, achieving 97% execution success.

## Prerequisites
- C++17
- ZeroMQ (libzmq) and cppzmq
- CMake 3.10+
- A C++ compiler (e.g., g++)

## Build Instructions
```bash
mkdir build && cd build
cmake ..
make
