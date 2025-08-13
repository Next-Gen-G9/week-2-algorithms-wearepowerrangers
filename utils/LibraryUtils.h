#ifndef LIBRARY_UTILS_H
#define LIBRARY_UTILS_H

#include <vector>
#include <string>
#include "../models/Book.h"
#include "../models/User.h"

enum class Role { NONE, ADMIN, USER };

// User Management (Provided)
void saveUsers(const std::vector<User>& users);
std::vector<User> loadUsers();
void registerUser(std::vector<User>& users);
Role loginUser(const std::vector<User>& users);

// Book Management (Student Implementation Required)
void saveBooks(const std::vector<Book>& books);
std::vector<Book> loadBooks();
void addBook(std::vector<Book>& books);
void displayAllBooks(const std::vector<Book>& books);
Book* findBookById(std::vector<Book>& books, int id); // Returns a pointer
void checkOutBook(std::vector<Book>& books);
void returnBook(std::vector<Book>& books);
void sortBooksByTitle(std::vector<Book>& books);
void binarySearchByTitle(const std::vector<Book>& books);

#endif // LIBRARY_UTILS_H