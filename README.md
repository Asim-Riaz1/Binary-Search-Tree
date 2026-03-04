# Binary Search Tree Implementation (C++)

## Overview
This project demonstrates a **Binary Search Tree (BST)** implementation in C++. It includes basic operations such as:
- Node insertion
- Searching for values
- Inorder traversal

The program uses dynamic memory allocation to build the tree structure.

## Features
- Binary Search Tree data structure implementation.
- Recursive algorithms for tree operations.
- Demonstrates tree traversal techniques.

## Data Structure
### Node Structure
Each node contains:
- `data` → Stores integer value.
- `left` → Pointer to left child node.
- `right` → Pointer to right child node.

### Binary Search Tree Property
- Left subtree contains values smaller than the root node.
- Right subtree contains values greater than the root node.

## Functions

### insertion(Node *&current, int value)
- Inserts a value into the BST.
- Creates a new node if the current node is NULL.
- Recursively moves to left or right subtree depending on value comparison.

### search(Node *&current, int value)
- Searches for a value in the BST.
- Displays:
  - "Value found!" if value exists.
  - "Value not found!" otherwise.

### inOrder(Node *&current)
- Performs inorder traversal.
- Prints values in **sorted ascending order**.

## How to Compile and Run

### Compile
```bash
g++ main.cpp -o bst
Run
./bst
Example Usage
Node *current = nullptr;
insertion(current, 5);
insertion(current, 6);
search(current, 6);
inOrder(current);

Concepts Covered
Binary Search Tree Data Structure
Recursion
Dynamic Memory Allocation
Tree Traversal Algorithms

Possible Improvements
Add deletion operation.
Add user input menu system.
Implement balancing techniques (AVL/Red-Black Trees).

Author

Created for learning Data Structures and Algorithms in C++.
