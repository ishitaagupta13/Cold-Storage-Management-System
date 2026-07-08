# Cold-Storage-Management-System
Logistic and controlled warehouse management system for agricultural products.
A C++ console application for logistics and controlled warehouse management of agricultural products. It provides persistent, file-based record management with full CRUD (Create, Read, Update, Delete) operations, built using object-oriented design principles.

# Overview

Cold storage facilities need reliable, structured tracking of inventory — what's stored, how much, and for how long — without the overhead of a full database system. This project implements a lightweight record management system in C++ that persists data to disk, validates input to prevent corrupted records, and supports the core workflows a warehouse operator needs day-to-day.

# Features


Add records — Register new inventory entries (product name, quantity, storage date, batch/location details).
View records — Display all currently stored records, or look up a specific record.
Update records — Modify quantity, storage duration, or other fields for an existing entry.
Delete records — Remove records once products are dispatched or expired.
Persistent storage — All operations read from and write to a file on disk, so data survives between program runs.
Input validation — Guards against invalid quantities, malformed entries, and duplicate/missing record IDs.


# Tech Stack


Language: C++
Paradigm: Object-Oriented Programming (classes, encapsulation)
Storage: File handling (fstream) for persistent, memory-safe read/write operations
Interface: Command-line / console-based menu system
