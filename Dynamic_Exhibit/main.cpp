#include <iostream>
#include"Exhibit.h"

using namespace std;

int main()
{
	int Exhibit_count=3;
	
	Exhibit *exhibitPtrs[Exhibit_count];
	
	exhibitPtrs[0]=new Exhibit("T-Rex Skeleton",101, 350.5);
	exhibitPtrs[1]=new Exhibit("Ancient ",102,450.2);
	exhibitPtrs[2]=new Exhibit("Space Exploration",309,290.43);
	
	for(int i=0;i<Exhibit_count;i++)
	{
		cout<<"Exhibit : "<<exhibitPtrs[i]->getName()<<endl;
		cout<<"\nRoom : "<<exhibitPtrs[i]->getRoomNumber()<<endl;
		cout<<"\nDisplay size : "<<exhibitPtrs[i]->getDisplaySize()<<endl;
		cout<<endl;
	}
	
	for(int i=0;i<Exhibit_count;i++)
	{
		delete exhibitPtrs[i];
		exhibitPtrs[i]=nullptr;
		}	
		
		return 0;
}
