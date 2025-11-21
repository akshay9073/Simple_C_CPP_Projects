#include<iostream>
#include"Exhibit.h"

Exhibit::Exhibit(string name,int roomNumber,double displaySize)
{
	this->name=name;
	this->roomNumber=roomNumber;
	this->displaySize=displaySize;
	
}

string Exhibit::getName()
{
	return name;
}

int Exhibit::getRoomNumber()
{
	return roomNumber;
}

double Exhibit::getDisplaySize()
{
	return displaySize;
}
