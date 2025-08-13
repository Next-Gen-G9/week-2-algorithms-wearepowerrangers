# 📚 C++ Library Management System – Assignment Guide

Welcome to your C++ project!  
Your goal is to complete a **Library Management System** by filling in the missing code.  
The main structure is already built for you — just follow the `// STUDENT TASK:` comments in the code files.

---

## 📂 Step 1: Understand the Project Files

Before writing code, explore how the files are organized:

- **`models/`** – Contains data blueprints, like the `Book` struct.
- **`utils/`** – Holds the main logic. Most of your work will be in `LibraryUtils.cpp`.
- **`main.cpp`** – Runs the program, shows menus, and calls your functions.
- **`main.bat`** – Double-click to compile and run the project easily.

---

## 📝 Step 2: Create the Book Blueprint

**File:** `models/Book.h`

You can’t store books without knowing their details.  

1. Open **`Book.h`**.  
2. Inside `struct Book { ... }`, add:
   - `id`
   - `title`
   - `author`
   - `isAvailable`

---

## ➕ Step 3: Add and Display Books

**File:** `utils/LibraryUtils.cpp`

1. **`addBook`** – Ask the user for a title and author, then store the book.  
2. **`displayAllBooks`** – Loop through all books and print them.

**Test:** Run `main.bat`. You should be able to add and view books.

---

## 🎯 Step 4: Find and Modify Books (Pointers)

**File:** `utils/LibraryUtils.cpp`

1. **`findBookById`** – Locate a book by ID.  
   - Return its memory address (`&`) if found, otherwise `nullptr`.
2. **`checkOutBook`** & **`returnBook`** –  
   - Use `findBookById` to get a direct link to the book.
   - Change `isAvailable` to:
     - `false` for checkout
     - `true` for return

---

## ⭐ Step 5: Featured Books List (Arrays)

**File:** `main.cpp`

1. **`showPromotionalBooks`** – Create an `int` array with book IDs (e.g., `{1, 5, 10}`).  
2. Loop through the array and print the IDs.

---

## 🔍 Step 6: Sorting & Searching (Algorithms)

**File:** `utils/LibraryUtils.cpp`

1. **Bubble Sort** – Implement in `sortBooksByTitle` to arrange books alphabetically by title.  
2. **Binary Search** – Implement in `binarySearchByTitle` to quickly find a book.  
   - **Important:** Binary Search works only if the list is already sorted.

---

## ✅ Final Note

Follow the steps in order and test your code frequently.  
Good luck — you’ve got this! 🚀
