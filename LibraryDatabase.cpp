#include "LibraryDatabase.h"
#include <iostream>
#include "string"

using namespace std;
namespace NSP_LibraryDatabase {
	LibraryDatabase::LibraryDatabase() {}

	// ----------------------------------------
	void LibraryDatabase::InsertBookDataBase()
	// ----------------------------------------
	{
		ofstream databaseFileOut("libraryDatabase.txt", ios_base::out | ios_base::app);
		cin.ignore();
		cout << " Write the Book Name: ";
		getline(cin, bookName);
		cout << " Write the Book Autor: ";
		getline(cin, bookAutor);
		cout << " Write the Book Editorial: ";
		getline(cin, bookEditorial);
		cout << " Write the Book ISBN: ";
		getline(cin, bookIsbn);
		cout << " Write the Book Price: ";
		cin >> bookPrice;
		databaseFileOut << "\n" <<"bookName: " << bookName << "  |  bookAutor: " << bookAutor << "  |  bookEditorial: " << bookEditorial
			 << "  |  bookIsbn: " << bookIsbn << "  |  bookPrice: " << bookPrice;
	}

	// ----------------------------------------
	void LibraryDatabase::DeleteBookDataBase()
	// ----------------------------------------
	{
		// is not posible delete one row is needed to copy all the values in a vector, remove the file and printed in a new file;

		ifstream databaseFileIn("libraryDatabase.txt");
		if (!databaseFileIn)
		{
			cout << "Error open libraryDatabase.txt\n";
		}
		string row;
		string isbnSearched;
		cout << "insert the book ISBN: \n";
		cin >> isbnSearched;
		while (getline(databaseFileIn, row))
		{
			if ( not IsIsbnFoundedInThisRow(row, isbnSearched))
			{
				fileCopied.push_back(row);
			}
		}
		databaseFileIn.close();
		ofstream databaseFileOut("libraryDatabase.txt");

		for (string row : fileCopied) {
			databaseFileOut << row << "\n";
		}

	}

	// ----------------------------------------
	bool LibraryDatabase::IsIsbnFoundedInThisRow(string row, string isbnSearched)
	// ----------------------------------------
	{
		bool result = false;
		size_t found = row.find(isbnSearched);
		if (found != string::npos) result = true;
		return result;
	}

	// ----------------------------------------
	void LibraryDatabase::PrintOneBookDataBase()
	// ----------------------------------------
	{
		ifstream databaseFileOut("libraryDatabase.txt");
		if (!databaseFileOut)
		{
			cout << "Error open libraryDatabase.txt\n";
		}
		string row;
		string isbnSearched;
		cout << "insert the book ISBN to print: \n";
		cin >> isbnSearched;
		while (getline(databaseFileOut, row))
		{
			if (IsIsbnFoundedInThisRow(row, isbnSearched))
			{
				cout << row;
			}
		}
	}

	// ----------------------------------------
	void LibraryDatabase::PrintValuesDataBase()
	// ----------------------------------------
	{
		ifstream databaseFileOut("libraryDatabase.txt");
		if (!databaseFileOut)
		{
			cout << "Error open libraryDatabase.txt\n";
		}
		string row;
		while (getline(databaseFileOut, row))
		{
			cout << row << "\n";
		}
	}

	// ----------------------------------------
	void LibraryDatabase::UpdateBookDataBase()
	// ----------------------------------------
	{
		DeleteBookDataBase();
		InsertBookDataBase();
	}
}
