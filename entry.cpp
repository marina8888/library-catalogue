//
// Created by Marina Kovaleva on 2019-05-10.
//

#include "entry.h"
#include <iostream>
using namespace std;

//entry constructor
Entry::Entry(){
    cout<<"Please input the item's name:"<<endl;
    cin>>name;
    assert(typeid(name)==typeid(string));
    cout<<"Please input year - Example. 2019:"<<endl;
    cin>>year;
    while ((borrowed != 0) and (borrowed != 1)) {
        cout << "Is the item borrowed: ['0', '1']:" << endl;
        cin >> borrowed;
    } if(borrowed) {
        cout << "Please type name of borrower:" << endl;
        cin >> borrowedBy;
    }
}
//Entry::Entry(string name, int year, int borrowed=0, string borrowedBy="nobody")
//: name(name), year(year), borrowedBy(borrowedBy) {
//    while ((borrowed != 0) and (borrowed != 1)) {
//        cout << "Is the item borrowed: ['0', '1']:" << endl;
//        cin >> borrowed;
//    }
//    if (borrowed) {
//        cout << "Please type name of borrower:" << endl;
//        cin >> borrowedBy;
//    }
//    else {
//        borrowedBy = "nobody";
//    }

//book functions
Book::Book(){
    cout<<"Please input the book's author:"<<endl;
    cin>>author;
    cout<<"Please input the book's publisher:"<<endl;
    cin>>publisher;
    cout<<"Please input the book's edition:"<<endl;
    cin>>edition;
}
 inline Book::Book(string& author, string& publisher, string& edition)
 : author(author), publisher(publisher), edition(edition){
};
void Book::printDetails() {
    cout<<"book name: "<<name<<endl;
    cout<<"book year"<<year<<endl;
    cout<<"author: "<<author<<endl;
    cout<<"publisher: "<<publisher<<endl;
    cout<<"edition: "<<edition<<endl;
};
//music album functions
inline MusicAlbum::MusicAlbum() {
    cout<<"Please input the artist:"<<endl;
    cin>>artist;
    cout<<"Please input the record label:"<<endl;
    cin>>recordLabel;
};
inline MusicAlbum::MusicAlbum(string& artist, string& recordLabel)
        : artist(artist), recordLabel(recordLabel){
};
void MusicAlbum::printDetails() {
    cout << "music album name: " << name << endl;
    cout << "music album year: " << year << endl;
    cout << "artist: " << artist << endl;
    cout << "record label: " << recordLabel << endl;
}
//film functions
inline Film::Film() {
    cout<<"Please input the film director: "<<endl;
    cin>>director;
    cout<<"Please input the film language: "<<endl;
    cin>>language;
};
inline Film::Film(string& director, string& language)
        : director(director), language(language){
};
void Film::printDetails() {
    cout << "film name: " << name << endl;
    cout << "film year: " << year << endl;
    cout << "film director: " << director << endl;
    cout << "film language: " << language << endl;
};