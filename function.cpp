//
// Created by Marina Kovaleva on 2019-04-01.
//

#include "class.h"
#include <iostream>

//entry constructor, destructor
Entry::Entry(){
    cout<<"please input name of item:"<<endl;
    cin>>name;
    cout<<"please input year:"<<endl;
    cin>>year;
    cout<<"type 1 if it has been borrowed, 0 if not:"<<endl;
    cin>>borrowed;
    if(borrowed==1) {
        cout << "please type name of borrower:" << endl;
        cin >> BorrowedBy;
    }
        else {
        BorrowedBy = "nobody";
    }
}
Entry::~Entry()=default;

//entry setters and getters
string Entry::entryReturned() const { return name; }
void Entry::entryBorrowed (string& nam) { name=nam; }

//overiding derived class constructor
Book::Book(string& auth, string& publi, string& editi): Entry(), author(auth), publisher(publi), edition(editi) {};
Book::Book() {
    cout << "Please input author, publisher:" << endl;
    cin>>author>>publisher>>edition;
}; //develop this for comma lists

void Book::printDetails(){
    cout<<"name of item is:"<<name<<endl;
    cout<<"year of item is:"<<year<<endl;
    cout<<"author is:"<<author<<endl;
    cout<<"publisher is:"<<publisher<<endl;
    cout<<"editor is:"<<edition<<endl;
};

