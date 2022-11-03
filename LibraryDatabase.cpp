#include "LibraryDatabase.h"
#include <iostream>
#include "string"

using namespace std;
namespace NSP_LibraryDatabase {
	LibraryDatabase::LibraryDatabase() {}

	// ----------------------------------------
	void LibraryDatabase::InsertValueDataBase(ofstream& file)
	// ----------------------------------------
	{
		cout << " Write the Book Name: ";
		cin >> bookName;
		cout << " Write the Book Autor: ";
		cin >> bookAutor;
		cout << " Write the Book Editorial: ";
		cin >> bookEditorial;
		cout << " Write the Book ISBN: ";
		cin >> bookIsbn;
		cout << " Write the Book Price: ";
		cin >> bookPrice;
		file << "bookName: " << bookName << "  |  bookAutor: " << bookAutor << "  |  bookEditorial: " << bookEditorial
			 << "  |  bookIsbn: " << bookIsbn << "  |  bookPrice: " << bookPrice;
	}

	// ----------------------------------------
	void LibraryDatabase::DeleteValueDataBase(ofstream& file)
	// ----------------------------------------
	{
		
	}
}
