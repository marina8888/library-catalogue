//
// Created by Marina Kovaleva on 2019-05-10.
//

#ifndef MAIN_CPP_LIBRARY_H
#define MAIN_CPP_LIBRARY_H
using namespace std;

#include "function.h"
#include <map>

class Library {
private:
    multimap<string, Book> books_;


public:
    Library(); //add
    void addBook( const string& author, Book& name );
    void removeBook( const string& author );
    void removeBook( Book& book );

    Book* findBook( const string& id );
    Book* findBook( Book& book );

    size_t totalBooks() const;
    size_t totalUniqueBooks() const;

#endif //MAIN_CPP_LIBRARY_H
