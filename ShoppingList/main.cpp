#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<string> shoppinglist;
	string item;
	
	cout<<"\nWelcome to Shopping List Project : "<<endl;
	cout<<"\nEnter the items in list and enter \"done\" once all items are entered : "<<endl;
	getline(cin,item);
	
	while(item!="done")
	{
		shoppinglist.push_back(item);
		
		cout<<"Enter another item (or 'done' to finish) : "<<endl;
		getline(cin,item);
	}
	
	int count=1;
	cout<<"\n============SHOPPING LIST ITEMS================\n"<<endl;
	for(string item :shoppinglist)
	{
		cout<<count<<" :"<<item<<endl;
		count++;
	}
	
	return 0;
	
}
