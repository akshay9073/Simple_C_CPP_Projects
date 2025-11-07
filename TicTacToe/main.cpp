#include<iostream>
#include<string>


using namespace std;
const int ROWS=3;
const int COLS=3;

void runGame();
void initalizeGameBoard(string gameBoard[][COLS]);
void printCurrentBoard(string gameBoard[][COLS]);



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
