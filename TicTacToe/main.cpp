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
bool isBoardFull(string gameBoard[][COLS]);

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

string getWinner(string gameBoard[ROWS][COLS])
{
	for(int i=0;i<ROWS;i++)
	{
		if(gameBoard[i][0]!=" "&& gameBoard[i][0]==gameBoard[i][1] && gameBoard[i][1]==gameBoard[i][2])
		{
			return gameBoard[i][0];
		}
	}
	
	for(int i=0;i<COLS;i++)
	{
		if(gameBoard[0][i]!=" "&& gameBoard[0][i]==gameBoard[1][i] && gameBoard[1][i]==gameBoard[2][i])
		{
			return gameBoard[0][i];
		}
	}
	
	if(gameBoard[0][0]!=" "&& gameBoard[0][0]==gameBoard[1][1] && gameBoard[1][1]==gameBoard[2][2])
		{
			return gameBoard[0][0];
		}
	
	if(gameBoard[2][0]!=" "&& gameBoard[2][0]==gameBoard[1][1] && gameBoard[1][1]==gameBoard[0][2])
		{
			return gameBoard[2][0];
		}
	
		
		return "";
}

bool isBoardFull(string gameBoard[ROWS][COLS])
{
	int countFill=0;
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			if(gameBoard[i][j]!=" ")
			{
				countFill++;
			}
		}
	}
	return countFill==9;
}
