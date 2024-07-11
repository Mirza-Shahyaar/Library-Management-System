# Library Management System

The Library Management System is a console-based application developed in C++ that facilitates efficient management of a library's book inventory. It incorporates fundamental Object-Oriented Programming (OOP) principles to provide essential functionalities for librarians and administrators.

## Features

### Book Management

- **Add New Books:** Enter unique identifiers (IDs), titles, and authors to add books to the library's collection.
- **Display Book Information:** View detailed information about each book, including its ID, title, author, and current issuance status.
- **Track Issuance Status:** Monitor whether a book is available or issued to a borrower.

### Transaction Handling

- **Issue Books:** Mark books as issued when borrowed by specifying their IDs. This updates their availability until they are returned.
- **Return Books:** Update the system to reflect that a borrowed book has been returned to the library, making it available for future borrowing.

### User Interface

- **User-Friendly Console Interface:** The system provides a straightforward text-based menu for easy navigation and operation.
- **Clear Feedback:** Receive immediate feedback confirming successful operations such as book additions, issuances, and returns.
- **Error Handling:** Prompt notifications for invalid inputs or actions to guide users effectively.

## Output Preview

### Adding a Book

```
--- Library Management System ---
1. Add Book
2. Issue Book
3. Return Book
4. Display All Books
5. Quit
Enter your choice (1-5): 1

Enter book ID: 101
Enter book title: The Catcher in the Rye
Enter book author: J.D. Salinger
Book added successfully!
```

### Issuing a Book

```
--- Library Management System ---
1. Add Book
2. Issue Book
3. Return Book
4. Display All Books
5. Quit
Enter your choice (1-5): 2

Enter book ID to issue: 101
Book issued successfully!
```

### Returning a Book

```
--- Library Management System ---
1. Add Book
2. Issue Book
3. Return Book
4. Display All Books
5. Quit
Enter your choice (1-5): 3

Enter book ID to return: 101
Book returned successfully!
```

### Displaying All Books

```
--- Library Management System ---
1. Add Book
2. Issue Book
3. Return Book
4. Display All Books
5. Quit
Enter your choice (1-5): 4

ID: 101, Title: The Catcher in the Rye, Author: J.D. Salinger, Issued: No
```

## How to Use

1. **Adding a Book:** Choose option `1` from the main menu, enter book details, and confirm the book's addition.
2. **Issuing a Book:** Select option `2`, input the book ID to mark it as issued to a borrower.
3. **Returning a Book:** Opt for option `3`, enter the book ID to register its return to the library.
4. **Displaying All Books:** Select option `4` to view a list of all books with their details.
5. **Exiting the System:** Choose option `5` to gracefully exit the application.

## Requirements

- **C++ Compiler:** Ensure access to a compatible C++ compiler (e.g., Dev C++, Visual Studio, g++) to compile and execute the program.
- **Standard C++ Libraries:** The program utilizes essential C++ libraries such as `iostream`, `vector`, and `string` for core functionalities.

## Future Enhancements

- **File Management:** Implement file handling capabilities to persist library data across sessions.
- **Enhanced User Interaction:** Develop a graphical user interface (GUI) for a more interactive and visually appealing user experience.
- **Advanced Features:** Introduce functionalities such as user authentication, advanced search options, and statistical analytics for comprehensive library management.
