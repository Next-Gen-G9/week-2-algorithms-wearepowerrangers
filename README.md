# 📚 C++ Library Management System

Welcome to your C++ project! This guide will walk you through completing a command-line **Library Management System**. The core structure is already in place; your mission is to implement the essential functions by following the `// STUDENT TASK:` comments in the code.

---

## 🎯 Project Goal

Your goal is to implement the core features of a library, including:

- Adding books  
- Displaying books  
- Checking out books  
- Returning books  
- Searching for books  

This project provides hands-on experience with fundamental C++ concepts like **structs, vectors, pointers, arrays, and algorithms**.

---

## 🚀 Getting Started

### 1. Explore the Files

Before coding, get familiar with the project structure:

- **main.cpp**: The program's entry point. Contains the user interface, menus, and function calls.  
- **models/**: Contains data "blueprints." You will edit `Book.h`.  
- **utils/**: Contains the main application logic. Most of your work will happen in `LibraryUtils.cpp`.  
- **data/**: Stores book and user data files (`books.dat`, `users.dat`).  
- **compile.bat**: Windows script to compile and run the project.  

---

### 2. How to Compile & Run (Alternative)

If you aren't using the `.bat` script, you can compile with a C++ compiler like `g++`:

```bash
# Compile all the necessary .cpp files
g++ main.cpp utils/LibraryUtils.cpp -o library_system

# Run the compiled program
./library_system
