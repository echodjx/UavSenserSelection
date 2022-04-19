#pragma once
#include <string>

using namespace std;

class Sensor {
public:
    Sensor();

private:
    string name;
    double capacity;
    double energy;
    bool working;
};