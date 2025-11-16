#include<iostream>
#include"Library.h"
void printLibraryCardDetails(const Library& card);

int main()
{
	Library aliceCard("Alice Johnson");
	Library bobCard("Bob Smith");
	
	aliceCard.checkoutBook();
	aliceCard.checkoutBook();
	bobCard.checkoutBook();
	
	printLibraryCardDetails(aliceCard);
	printLibraryCardDetails(bobCard);
}

void printLibraryCardDetails(const Library& card)
{
	cout<<card.getCardholderName()<<" has "
	<<card.getBooksCheckedOut()<<" books checked out"<<endl;
}
