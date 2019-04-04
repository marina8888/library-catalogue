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
protected:
    getEntry();
    setEntry();
public:
    Entry();
    entryBorrowed();
    entryReturned();
    void printDetails();
}

class Book : public Entry{
private:
    string author, publisher, edition;
public:
    Entry(string author, string publisher, string edition); //override
    void printDetails();//override
}

class MusicAlbum : public Entry{
private:
    string artist, recordLabel;
public:
    void printDetails();//override
}

class Film : public Entry{
private:
    string director, language;
public:
    void printDetails();//override
}


#endif //PROJECT_CLASS_H
