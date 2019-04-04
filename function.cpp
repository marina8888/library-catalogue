//
// Created by Marina Kovaleva on 2019-04-01.
//

#include "class.h"

// Constructors - The default values are specified in the declaration
Entry::Entry(string BorrowedBy, string BorrowedBy,) : BorrowedBy(none), name(none) year(none) { }

//Destructors
Entry::~Entry();

// Getters
int Entry::getEntry() const { return x; }

// Setters
void Entry::setEntry(int x) { this->x = x; }

// Public Functions
//setters and getters

//things that do things
entryBorrowed();
entryReturned();
printDetails();
printDetails();//override
printDetails();//override
printDetails();//override
