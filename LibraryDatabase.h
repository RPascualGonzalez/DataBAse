#pragma once
#include <fstream>
#include <vector>

namespace NSP_LibraryDatabase {
	class LibraryDatabase
	{
	public:
		LibraryDatabase();
		void InsertBookDataBase();
		void DeleteBookDataBase();
		void PrintValuesDataBase();
		void PrintOneBookDataBase();
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


