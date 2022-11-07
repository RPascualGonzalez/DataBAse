// DataBase.cpp : we want to create a Database using files. For this reason we will implement a program where you could create, read, update and delete books
//

#include <iostream>
#include "LibraryDatabase.h"
#include <fstream>

using namespace std;
using namespace NSP_LibraryDatabase;

void InitialMenu();
int action = 0;
int main()
{

    InitialMenu();
    cin >> action;
    LibraryDatabase Database;
    switch (action)
    {
        case 1: Database.InsertBookDataBase(); break;
        case 2: Database.DeleteBookDataBase(); break;
        case 3: break;
        case 4: Database.PrintOneBookDataBase(); break;
        case 5: Database.PrintValuesDataBase();  break;
        default: break;
    }
}

// ----------------------------------------
void InitialMenu() 
// ----------------------------------------
{
    cout << "Database Actions: \n";
    cout << " 1 - Add Book \n";
    cout << " 2 - Delete Book (given isbn)\n";
    cout << " 3 - Update Book (given isbn) \n";
    cout << " 4 - Print Book (given isbn) \n";
    cout << " 5 - Print all the Books \n";
}



