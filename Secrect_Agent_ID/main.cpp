#include<iostream>
#include<string>
using namespace std;

int main()
{
	string fullName;
	string alias;
	int age;
	int agentLevel;
	string favoriteGadget;
	
	cout<<"Enter your full name : "<<endl;
	getline(cin,fullName);
	
	cout<<"Enter your secret alias : "<<endl;
	getline(cin,alias);
	
	cin.get();
	
	cout<<"Enter your age : "<<endl;
	cin>>age;
	
	cout<<"Enter your agentLevel (1-10) : "<<endl;
	cin>>agentLevel;
	
//	cin.get();
	cout<<"Enter your favoriteGadget : "<<endl;
	cin>>favoriteGadget;
	
	cout<<"==================================="<<endl;
	cout<<"       S.E.C.R.E.T   A.G.E.N.T     "<<endl;
	cout<<"==================================="<<endl;
	cout<<"Agent Name : "<<fullName<<endl;
	cout<<"Alias : "<<alias<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Level : "<<agentLevel<<endl;
	cout<<"Preferred Gadget : "<<favoriteGadget<<endl;
	cout<<"==================================="<<endl;
	
	return 0;
	
}
