# Cataloguing Programme for a Library

# EN3085 Assessed Coursework 2

You should solve the problems independently from other students and submit only your own work. Submit the programs and a short report explaining your solutions and demonstrating their correctness by 6pm, 10/05/19 through Learning Central.


1.	Your company has won a contract to create a software system for a local library. The library stocks three types of items: books, films and music albums. The program should allow a librarian to add new items to the cataloguing system, to issue the items to the library members and to update the returned items. Your colleagues have provided you with the following class hierarchy diagram: 


![alt text] (https://raw.githubusercontent.com/marina8888/library-catalogue/master/Diagram.png)

2.	Write a C++ class Entry according to the given diagram. Derive from it three subclasses: MusicAlbum, Book and Film. The class Entry should have member variables to store the name of the item and if it is borrowed and by who. The subclasses should have additional data members as specified in the diagram. Include member function declarations into your four class definitions according to the diagram. In addition, include two constructor declarations for each of the subclasses: one constructor with parameters for passing the values of all data members and another constructor with no parameters, but which allows the user to enter the values for all data members interactively. Use virtual functions appropriately.	 				                   		
3.	Write definitions of all member functions for classes Entry and Film. The functions printDetails() should display the values of their class data members.	  	       							

4.	Expand your classes with useful extra data members and functionality.					
					
5.	Write a C++ program, which will use the above classes. Use as many of the C++ and C++ Standard Library features as you can.		

6.	Provide documentation for your program (limited to 4 pages including screen shots). Include a short description of the problem-solving phase and the implementation of your program, as well as an account of its limitations and possible improvements. In addition, as part of the documentation, provide evidence of testing. You must supply and explain the choice of values, which you used to test your program and the answers, which the program gave. You should also document any particular cases for which your program fails, or better add code to your program to make sure that they do not occur.

# Marking scheme

(1) Source code. Maximum marks will be awarded for:

A correctly functioning program. The program should operate according to the specification. An efficient program and elegant algorithms. Try to develop algorithms, which are efficient in terms of the amount of data, which needs to be stored, and the speed in which they operate. Appropriate use of classes and functions. Try to keep your function main() as short as possible. A user-friendly program. When your program runs, the messages displayed on the screen should be easy to understand and succinct. The user should be in no doubt as to what they must do to use the program.
A well commented program. The judicious use of commenting is essential if somebody else is to easily understand your program. Start your programs with a short comment specifying the name of the program, your name, and what your program is designed to do. A well laid out program. Indent your program code. Indent your comments as well. Use blank lines to space out blocks of code.

(2) Documentation. Marks will be awarded for:

•	A well documented program. Include a short description of the problem-solving phase and the implementation of your program, as well as an account of its limitations and possible improvements.
•	A well tested program. You must supply and explain the choice of values, which you used to test your program and the answers, which the program gave. You should also document any particular cases for which your program fails, or better add code to your program to make sure that they do not occur.

Dr Y Hicks
