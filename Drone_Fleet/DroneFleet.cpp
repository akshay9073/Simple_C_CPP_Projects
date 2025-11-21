#include<iostream>
#include<string>
#include"DroneFleet.h"
using namespace std;

DroneFleet::DroneFleet(string modelName,double batteryLife)
{
	this->modelName=modelName;
	this->batteryLife=batteryLife;	
}

string DroneFleet::getModelName()
{
	return modelName;
}

double DroneFleet::getBatteryLife()
{
	return batteryLife;
}
