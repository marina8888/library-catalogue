//
// Created by Marina Kovaleva on 2019-04-01.
//

#ifndef PROJECT_CLASS_H
#define PROJECT_CLASS_H
#include <iostream>
using namespace std;

class Entry{
private:
    int borrowed;
    string BorrowedBy;
    string name;
    string year;
public:
    Entry();
    entryBorrowed();
    entryReturned();
    printDetails();
}

class Book extends public Entry{
private:
    string author;
    string publisher;
    string edition;
public:
    printDetails();//override
}

class MusicAlbum extends public Entry{
private:
    string artist;
    string recordLabel;
public:
    printDetails();//override
}

class Film extends public Entry{
private:
    string director;
    string language;
public:
    printDetails();//override
}


#endif //PROJECT_CLASS_H
