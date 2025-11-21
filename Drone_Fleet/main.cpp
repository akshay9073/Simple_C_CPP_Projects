#include<iostream>
#include "DroneFleet.h"
#include<string>

using namespace std;
void printFleet(DroneFleet** fleet,int size);
int main()
{
	int numDrones=0;
	string model;
	double battery=0.0;
	
	cout<<"How many drones are in your fleet?  ";
	cin>>numDrones;
	
	DroneFleet** droneFleet= new DroneFleet *[numDrones];
	for(int i=0;i<numDrones;i++)
	{
		cout<<"Enter model name for drone : "<<(i+1)<<" : ";
//		cin.get();
cin.ignore();

		
		getline(cin,model);
		
		cout<<"Enter battery life (as a perecntage) for "<<model<<" :";
		cin>>battery;
		
		droneFleet[i]=new DroneFleet(model,battery);
		
	}
	
	cout<<"\nDrone Fleet summary "<<endl;
	printFleet(droneFleet,numDrones);
	
	for(int i=0;i<numDrones;i++)
	{
		delete droneFleet[i];
		droneFleet[i]=nullptr;
		
	}
	
	delete [] droneFleet;
}

void printFleet(DroneFleet** fleet,int size)
{
	for(int i=0;i<size;i++)
	cout<<"Drone "<<(i+1)<<" : "<<fleet[i]->getModelName()
	<<" Battery : "<<fleet[i]->getBatteryLife()<<" %"<<endl;
	
}
