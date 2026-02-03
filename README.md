# Student Record System

A simple CLI-based application written in C to manage student records. This system allows users to create, delete, and list student information efficiently.

## Features

- **Create a Student**: Add a new student record with Name, Surname, and Student ID.
- **List Students**: View all currently registered students with their details.
- **Delete a Student**: Remove a student record from the system using their list index.

## Prerequisites

- GCC compiler (or any standard C compiler)
- Terminal or Command Prompt

## How to Compile

To compile the program, open your terminal and navigate to the project directory. Run the following command:

```bash
gcc StudentRecordSystem.c -o StudentRecordApp
```

## How to Run

After compiling, you can run the application using:

**Windows:**
```bash
StudentRecordApp.exe
```

**Linux/macOS:**
```bash
./StudentRecordApp
```

## Usage

Upon running the application, you will be presented with a menu:

```text
Welcome to Student Registration System
Type a number
1-Create a student
2-Delete a student
3-List The students 
0-Exit
```

### 1. Create a Student
Select option `1`. You will be prompted to enter the student's Name, Surname, and ID.

### 2. Delete a Student
Select option `2`. The current list of students will be displayed with an index number (e.g., 1, 2, 3...). Enter the index number of the student you wish to delete.

### 3. List Students
Select option `3` to display all active student records in the system.

### 0. Exit
Select option `0` to terminate the application.

## Note
This application uses an in-memory array to store data. Records are not saved to a file and will be lost once the program exits.
