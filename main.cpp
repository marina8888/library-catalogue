//
// Created by Marina Kovaleva on 2019-04-01.
//

#include "entry.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;

//A program to test inputs for library system
//Please see tests below for interactive user input and for inputting values as arguments
//This program has been written to catch errors in user input for example:
//allowing only integer input for year, and 0 or 1 input for borrowed
//A weakness of this program is that it allows the creation of Entry classes.
//With further development this can be solved by declaring the printDetails() function as a pure virtual function.
//This would make Entry an abstract class.
//This program also does not cater for invalid quantity argument inputs when creating objects
//This can be solved through catching errors and default arguments to the constructors

int main(){

  // Demonstrate creating a book
  string test1 = "test1";
  Book bk(test1, test1, test1);
  bk.printDetails();
  // Add Book to library
  Library lib;
  lib.addEntry(bk);
  lib.listEntries();

  // Borrow the book
  string borrower = "marina1";
  bk.entryBorrowed(borrower);
  lib.modifyEntry(bk);
  lib.listEntries();

  // Remove book from library
  lib.deleteEntry(bk);
  lib.listEntries();

  // Demonstrate creating a music album
  string test2 = "test2";
  MusicAlbum alb;

  // Add Album to library
  lib.addEntry(alb);
  lib.listEntries();

  // Borrow the album
  string borrower2 = "marina2";
  alb.entryBorrowed(borrower2);
  lib.modifyEntry(alb);
  lib.listEntries();

  // Remove album from library
  lib.deleteEntry(alb);
  lib.listEntries();

  // Demonstrate creating a film
  string test3 = "test3";
  Film film;

  // Add Film to library
  lib.addEntry(film);
  lib.listEntries();

  // Borrow the film
  string borrower3 = "marina3";
  alb.entryBorrowed(borrower3);
  lib.modifyEntry(film);
  lib.listEntries();

  // Remove film from library
  lib.deleteEntry(film);
  lib.listEntries();



  return 0;
}

