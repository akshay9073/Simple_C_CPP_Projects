#include<iostream>

#include<cstdlib>

#include<ctime>

using namespace std;

int main()
{
	char userMove;
	char computerMove;
	
	srand(time(0));
	
	cout<<"Welcome to Rock Paper and Scissors!!"<<endl;
	cout<<"Enter your Move (R,P or S) : "<<endl;
	cin>>userMove;
	
	int randNum=rand()%3;
	
	if(randNum==0)
	{
		computerMove='R';
	}else if(randNum==1)
	{
		computerMove='P';
	}else{
		computerMove='S';
	}
	
	cout<<"You Played : "<<userMove<<endl;
	cout<<"Computer played : "<<computerMove<<endl;
	
	if(userMove==computerMove)
	{
		cout<<"It's a tie!!"<<endl;
	}
	else if((userMove=='R' && computerMove=='S')||(userMove=='S'&& computerMove=='P')||(userMove== 'P' && computerMove=='R'))
	{
		cout<<"You Win!!"<<endl;
	}
	else
	{
		cout<<"Computer win!!"<<endl;
	}
	
	return 0;
}
