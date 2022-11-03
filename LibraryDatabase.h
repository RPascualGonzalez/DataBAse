#pragma once
#include <fstream>

namespace NSP_LibraryDatabase {
	class LibraryDatabase
	{
	public:
		LibraryDatabase();
		void InsertValueDataBase(std::ofstream& file);
		void DeleteValueDataBase(std::ofstream& file);
		
	protected:
	private:

		float bookPrice;
		std::string bookName;
		std::string bookIsbn;
		std::string bookEditorial;
		std::string bookAutor;
	};
}


