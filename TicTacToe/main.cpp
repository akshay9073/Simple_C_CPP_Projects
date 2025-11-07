#include<iostream>
#include<string>


using namespace std;
const int ROWS=3;
const int COLS=3;

void runGame();
void initalizeGameBoard(string gameBoard[][COLS]);
void printCurrentBoard(string gameBoard[][COLS]);
void getUserInput(bool xTurn,string gameBoard[][COLS]);
bool cellAlreadyOccupied(int,int,string gameBoard[][COLS]);

int main()
{
	
	runGame();
	
	return 0;
}


//The game loop--runGame
void runGame()
{
	string winner="";
	bool xTurn=true;
	int theRow=0;
	int theCol=0;
	
	string gameBoard[ROWS][COLS];
	
	initalizeGameBoard(gameBoard);
	
	printCurrentBoard(gameBoard);
	
	while(winner== "")
	{
		if(xTurn)
		{
			cout<<"It is X's turn"<<endl;
		}
		else
		{
			cout<<"It is 0's turn"<<endl;
		}
		
		getUserInput(xTurn,gameBoard);
	}
}




void initalizeGameBoard(string gameBoard[ROWS][COLS])
{
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			gameBoard[i][j]=" ";
		}
	}
}

void printCurrentBoard(string gameBoard[ROWS][COLS])
{
		for(int i=0;i<ROWS;i++)
		{
			for(int j=0;j<COLS;j++)
			{
				cout<<gameBoard[i][j];
				if(j<2)
				{
					cout<<" | ";
				}
			}
			cout<<endl;
			if(i<2)
			{
				cout<<"- - - - -"<<endl;
			}
		}
		cout<<endl;	
}

void getUserInput(bool xTurn,string gameBoard[ROWS][COLS])
{
	int row=-1;
	int col=-1;
	
	bool keepAsking=true;
	
	while(keepAsking)
	{
		cout<<"Please enter the row THEN the column, each from 0, 1, or 2, separated by a space"<<endl;
		cin>>row;
		cin>>col;
		
		if(row>=0 && col>=0 && row<=2 && col<=2)
		{
			if(!cellAlreadyOccupied(row,col,gameBoard))
			{
				keepAsking=false;
			}
			else
			{
				cout<<"That cell is already occupied!!"<<endl;
			}
		}
	}
	
	if(xTurn)
	{
		gameBoard[row][col]="x";
		
	}
	else
	{
		gameBoard[row][col]="o";
	}
}

bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS])
{
	return gameBoard[row][col]!=" ";
}
