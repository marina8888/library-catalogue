
#include "entry.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

// Standard Entry Constructor
Entry::Entry(){
    cout<<"Please input the item's name:"<<endl;
    cin>>name;
    while (cout << "Please input a year: " && !(cin >> year)) { //discards non-int input
        cin.clear();
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        cout << "Invalid input ";
    }
    while ((borrowed != 0) and (borrowed != 1)) { //accepts only 0 or 1 entries
        cout << "Is the item borrowed: ['0', '1']:" << endl;
        cin >> borrowed;
    } if(borrowed) {
        cout << "Please type name of borrower:" << endl;
        cin >> borrowedBy;
    } else {
        borrowedBy = "nobody"; //sets borrowedBy to nobody for borrow=0
    }
}

// Overloading Entry Constructor
Entry::Entry(string &name, int year, int borrowed, string &borrowedBy)
        : name(name), year(year), borrowed(borrowed), borrowedBy(borrowedBy) {
    while ((borrowed != 0) and (borrowed != 1)) {
        cout << "Is the item borrowed: ['0', '1']:" << endl;
        cin >> borrowed;
    }
    if (borrowed) {
        cout << "Please type name of borrower:" << endl;
        cin >> borrowedBy;
    } else {
        borrowedBy = "nobody";
    }
}

void Entry::entryBorrowed (string& name){
    borrowed = 1;
    borrowedBy = name;
}

void Entry::entryReturned() {
    borrowed = 0;
    borrowedBy = "nobody";
}

//adds entry to library
void Library::addEntry(Entry &entry) {
    catalogue.insert( pair<string, Entry>( entry.name, entry) );
}
//modifies an existing entry
void Library::modifyEntry(Entry &entry) {
    catalogue[entry.name] = entry;
}
//deletes entry
void Library::deleteEntry(Entry &entry) {
    catalogue.erase(entry.name);
}
//lists all entries in library
void Library::listEntries() {
    cout << endl << "Listing Library Entries:" << endl;
    for (auto const &element : catalogue) {
        cout << "name: " << element.first << ", year: " << element.second.year;
        cout << ", borrowed: " << element.second.borrowed << ", borrowed by: " << element.second.borrowedBy << endl;
    }
    cout << "Listing complete" << endl << endl;
}


//book functions
Book::Book(){
    cout<<"Please input the book's author:"<<endl;
    cin>>author;
    cout<<"Please input the book's publisher:"<<endl;
    cin>>publisher;
    cout<<"Please input the book's edition:"<<endl;
    cin>>edition;
}

Book::Book(string &author, string &publisher, string &edition)
 : author(author), publisher(publisher), edition(edition){
};

void Book::printDetails() {
    cout<<"book name: "<<name<<endl;
    cout<<"book year: "<<year<<endl;
    cout<<"author: "<<author<<endl;
    cout<<"publisher: "<<publisher<<endl;
    cout<<"edition: "<<edition<<endl;
};


//music album functions
MusicAlbum::MusicAlbum() {
    cout<<"Please input the artist:"<<endl;
    cin>>artist;
    cout<<"Please input the record label:"<<endl;
    cin>>recordLabel;
};
MusicAlbum::MusicAlbum(string &artist, string &recordLabel)
        : artist(artist), recordLabel(recordLabel){
};
void MusicAlbum::printDetails() {
    cout << "music album name: " << name << endl;
    cout << "music album year: " << year << endl;
    cout << "artist: " << artist << endl;
    cout << "record label: " << recordLabel << endl;
}


//film functions
Film::Film() {
    cout<<"Please input the film director: "<<endl;
    cin>>director;
    cout<<"Please input the film language: "<<endl;
    cin>>language;
};
Film::Film(string& director, string& language)
        : director(director), language(language){
};
void Film::printDetails() {
    cout << "film name: " << name << endl;
    cout << "film year: " << year << endl;
    cout << "film director: " << director << endl;
    cout << "film language: " << language << endl;
};