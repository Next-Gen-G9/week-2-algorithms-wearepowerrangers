#ifndef BOOK_H
#define BOOK_H

#include <string> // Required for std::string

// STUDENT TASK: Define the structure for a Book.
// This exercise covers: struct, std::string
//
// 1. Define a struct named 'Book'.
// 2. Add the following member variables inside the struct:
//    - an 'int' named 'id'
//    - a 'std::string' named 'title'
//    - a 'std::string' named 'author'
//    - a 'bool' named 'isAvailable'
//
struct Book {
    // Add member variables here
    int id;
    std::string title,author;
    bool isAvailable;

};

#endif // BOOK_H