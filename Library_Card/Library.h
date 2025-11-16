#ifndef LIBRARY_H
#define LIBRARY_H

#include<string>

using namespace std;

class Library{
	
	public:
		Library(string cardholderName);
		void checkoutBook();
		void returnBook();
		string getCardholderName() const;
		int getBooksCheckedOut() const;
		
	private:
		string cardholderName;
		int booksCheckedOut;
	
	
};

#endif
