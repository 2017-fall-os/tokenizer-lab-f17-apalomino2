## Tokenizer Lab!

### Purpose

To demonstrate proficiency with:
* Arrays and pointers
* Memory allocation
* Seperate compilations and linking
* Writing a simple Makefile
* Use of the git source code management system

### Assignment

* Write a tokenizer function mytoc() in a file called mytoc.c with the following signature:
  	char ** mytoc(char * buf, char delim)
* Include mytoc()'s signature in a "header" file called mytoc.h
* Write a file called test.c containing a test program that includes the header file mytoc.h
* Write a Makefile that compiles the source files and links them to build a functional test program named "test"

### Program Instructions

1. To compile type "make" in source directory.  
2. To run type "make demo" or "./test". Once running, the program will print "$" and await input.  
3. Enter any string and it be broken down into tokens based on the delimiter. The default delimiter is ' '.  
4. To change the delimiter, enter "\d<current delimiter><new delimiter>" where <char> represents only 1 character.
   Examples:
   * "\d :" changes the default delimiter to ':'.
   * "\d: " changes the delimiter from ':' to ' '.
5. To close the program type "exit".  

