// DataBase.cpp : we want to create a Database using files. For this reason we will implement a program where you could create, read, update and delete books
//

#include <iostream>
#include "LibraryDatabase.h"
#include <fstream>

using namespace std;
using namespace NSP_LibraryDatabase;

bool AddingMoreBooks();

int main()
{
    ofstream databaseFile("libraryDatabase.txt");
    LibraryDatabase Database;
    while (AddingMoreBooks()) {
        Database.InsertValueDataBase(databaseFile);
    }  
}

// ----------------------------------------
bool AddingMoreBooks()
// ----------------------------------------
{
    bool result = false;
    string moreBooks;
        
    cout << "Do you want to add some books (y/n)?";
    cin >> moreBooks;
    if (moreBooks == "y")   result = true;
    else                    result = false;
    return result;
}


