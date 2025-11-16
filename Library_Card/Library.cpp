#include<iostream>
#include "Library.h"

Library::Library(string cardholderName)
{
	this->cardholderName=cardholderName;
}

string Library::getCardholderName()const
{
	return cardholderName;
}

int Library::getBooksCheckedOut()const
{
	return booksCheckedOut;
}

void Library::checkoutBook()
{
	booksCheckedOut++;
}

void Library::returnBook()
{
	if(booksCheckedOut>=0)
	booksCheckedOut--;
	else
	{
		cout<<"No Books to return !!"<<endl;
	}
}
