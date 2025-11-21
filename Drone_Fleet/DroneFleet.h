#ifndef DRONE_FLEET_H
#define DRONE_FLEET_H

#include<string>
using namespace std;
class DroneFleet{
	
	public:
		DroneFleet(string modelName, double batteryLife);
		string getModelName();
		double getBatteryLife();
	
	private :
		string modelName;
		double batteryLife;
};

#endif
