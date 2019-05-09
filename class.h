//
// Created by Marina Kovaleva on 2019-04-01.
//user should be able to input all parameters in one go for a new object
//if int borrowed is 0, borrowedby is "nobody"
//entry constructor will first be called

#ifndef PROJECT_CLASS_H
#define PROJECT_CLASS_H
#include <iostream>
using namespace std;

//Entry is an abstract base class
class Entry{
protected:
    int borrowed; //if borrowed
    string BorrowedBy; //name of person borrowing
    string name; //name of item
    string year; //year of publication
public:
    Entry();
    Entry(string nam, int yea);
    virtual ~Entry(); //should it be virtual though?- is it needed?
    void entryBorrowed (string nam);
    string entryReturned () const ;
    virtual void printDetails()=0;
};

//Subclass book with overriden functions
class Book : public Entry{
private:
    string author, publisher, edition; //use structs? introduce pointers/references
public:
    Book();
    Book(const string auth, string publi, string editi);
    void printDetails();
};

//class MusicAlbum : public Entry{
//private:
//    string artist, recordLabel;
//public:
//    MusicAlbum();
//    MusicAlbum(string artis, string recordLabe);
//    void printDetails();//override
//}

//class Film : public Entry{
//private:
//    string director, language;
//public:
//    Film();
//    Film(string directo, string languag);
//    void printDetails();
//}
//

#endif //PROJECT_CLASS_H
