#ifndef EXHIBIT_H
#define EXHIBIT_H

#include<string>
using namespace std;

class Exhibit{
	
	public:
	Exhibit(string name,int roomNumber,double displaySize);
	string getName() ;
	int getRoomNumber();
	double getDisplaySize();
	
	private:
		string name;
		int roomNumber;
		double displaySize;
};


#endif
