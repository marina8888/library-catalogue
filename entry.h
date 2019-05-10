//
// Created by Marina Kovaleva on 2019-05-10.
//

#ifndef CW2_ENTRY_H
#define CW2_ENTRY_H

#include <iostream>
#include <map>
#include <string>
using namespace std;





//Entry is base class
class Entry {
protected:
    int borrowed = -1; //if borrowed
    string borrowedBy; //name of person borrowing
    string name; //name of item
    int year; //year of publication
public:
    Entry(); //default constructor
    Entry(string &name, int year, int borrowed, string &borrowedBy); //overloaded constructor
    void entryBorrowed (string& name);
    void entryReturned ();
    friend class Library;
};

//library class- friend of entry class
//contains catalogue which maps name (key) to entry class members
class Library {
private:
    map<string, Entry> catalogue;
public:
    void addEntry(Entry &entry);
    void listEntries();
    void modifyEntry(Entry &entry);
    void deleteEntry(Entry &entry);
};

//derived class
class Book : public Entry {
private:
    string author, publisher, edition;
public:
    Book();
    Book( string &author, string &publisher, string &edition);
    void printDetails();
};

//derived class
class MusicAlbum : public Entry {
private:
    string artist, recordLabel;
public:
    MusicAlbum();
    MusicAlbum(string &artist, string &recordLabel);
    void printDetails();
};

//derived class
class Film : public Entry {
private:
    string director, language;
public:
    Film();
    Film(string &director, string &language);
    void printDetails();
};


#endif //CW1_ENTRY_H
