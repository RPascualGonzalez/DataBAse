#pragma once
#include <fstream>
#include <vector>

namespace NSP_LibraryDatabase {
	class LibraryDatabase
	{
	public:
		LibraryDatabase();
		void InsertValueDataBase(std::ofstream& file);
		void DeleteValueDataBase(std::ifstream& file, std::string isbnSearched);
		void PrintValueDataBase(std::ifstream& file);
		void CreateAndFillFileOldValues();
		
	private:
		bool IsIsbnFoundedInThisRow(std::string row, std::string isbnSearched);

		float bookPrice;
		std::string bookName;
		std::string bookIsbn;
		std::string bookEditorial;
		std::string bookAutor;

		std::vector<std::string> fileCopied;

		
	};
}


