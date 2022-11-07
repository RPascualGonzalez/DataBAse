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
	void LibraryDatabase::DeleteValueDataBase(ifstream& file, string isbnSearched)
	// ----------------------------------------
	{
		// is not posible delete one row is needed to copy all the values in a vector, remove the file and printed in a new file;
		string row;
		while (getline(file, row))
		{
			if (not IsIsbnFoundedInThisRow(row, isbnSearched))
			{
				fileCopied.push_back(row);
			}
		}
		file.close();
		remove("libraryDatabase.txt");	
		CreateAndFillFileOldValues();
	}

	// ----------------------------------------
	void LibraryDatabase::CreateAndFillFileOldValues()
		// ----------------------------------------
	{
		ofstream databaseFile("libraryDatabase.txt", ios_base::out);
		for (string row : fileCopied)
		{
			databaseFile << row << "dddd\n";
		}

	}

	bool LibraryDatabase::IsIsbnFoundedInThisRow(string row, string isbnSearched)
	// ----------------------------------------
	{
		bool result = false;
		size_t found = row.find(isbnSearched);
		if (found != string::npos) result = true;
		return result;
	}
	// ----------------------------------------
	void LibraryDatabase::PrintValueDataBase(ifstream& file)
	// ----------------------------------------
	{
		string row;
		while (getline(file, row))
		{
			cout << row << "\n";
		}
	}
}
