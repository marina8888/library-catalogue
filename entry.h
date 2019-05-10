//
// Created by Marina Kovaleva on 2019-05-10.
//

#ifndef CW2_ENTRY_H
#define CW2_ENTRY_H

#include <iostream>
using namespace std;


//Entry is an abstract base class
class Entry {
protected:
    int borrowed = -1; //if borrowed
    string borrowedBy; //name of person borrowing
    string name; //name of item
    int year; //year of publication
protected:
    Entry();
    //Entry(string name, int year, int borrowed, string borrowedBy);
//    void entryBorrowed (string& name);
//    void entryReturned ();
    virtual void printDetails() =0;
};


//Subclass book with overriden functions
class Book : public Entry {
private:
    string author, publisher, edition; //use structs? introduce pointers/references
public:
    Book();
    Book( string& author, string& publisher, string& edition);
    void printDetails();
};


class MusicAlbum : public Entry {
private:
    string artist, recordLabel;
public:
    MusicAlbum();
    MusicAlbum(string& artist, string& recordLabel);
    void printDetails();//override
};


class Film : public Entry {
private:
    string director, language;
public:
    Film();
    Film(string& director, string& language);
    void printDetails();
};


#endif //CW1_ENTRY_H
