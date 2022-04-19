#pragma once
#include <string>
#include <vector>
#include "Sensor.h"
using namespace std;

class Uav {
public:
    Uav(string name, double POS_X, double POX_Y, double POX_Z, double energy);
private:
    string name;
    double POS_X;
    double POX_Y;
    double POX_Z;
    double energy;
    vector<Sensor> sensors;
};