#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	const int num_movies=5;
	
	vector<string>movies;
	vector<double>ratings;
	
	string temptitle;
	double temprating;
	
	for(int i=0;i<num_movies;i++)
	{
		cout<<" Enter the title of movie #"<< (i+1)<<": ";
		getline(cin,temptitle);
		
		cout<<"Enter the rating for \""<<temptitle<<"\"(1-10):";
		cin>>temprating;
		
		cin.get();
		movies.push_back(temptitle);
		ratings.push_back(temprating);
		
		
	}
	
	cout<<"\nHere are your movie ratings : \n"<<endl;
	
	for(int i=0;i<num_movies;i++)
	{
		cout<<"You rated \" "<<movies[i]<<"\" a "
		<<ratings[i]<<"/10"<<endl;
	}
	
	return 0;
}
