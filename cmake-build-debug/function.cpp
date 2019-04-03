//
// Created by Marina Kovaleva on 2019-04-01.
//

#include "../class.h"

// Constructors - The default values are specified in the declaration
Entry::Entry(int x, int y) : x(x), y(y) { }

//Destructors
Entry::~Entry();

// Getters
int Entry::getX() const { return x; }
int Entry::getY() const { return y; }

// Setters
void Entry::setX(int x) { this->x = x; }
void Entry::setY(int y) { this->y = y; }

// Public Functions
//setters and getters

//things that do things
entryBorrowed();
entryReturned();
printDetails();
printDetails();//override
printDetails();//override
printDetails();//override
