# Primitive List Doubly Linked List

This repository aims to provide a comprehensive starting point for understanding and implementing two fundamental data structures: a Primitive List and a Doubly Linked List. These data structures are implemented in C++ and serve as a great introduction to list manipulation and linked list concepts for beginners and intermediate programmers.

<hr><br>

## Purpose of This Repository

### Primitive List

A Primitive List is a basic data structure that allows storing a collection of elements in a sequential manner. This repository provides examples of how to create, manipulate, and perform common operations on primitive lists in C++.

### Doubly Linked List

A Doubly Linked List is a more advanced data structure where each node contains a reference to both the next and the previous node in the sequence. This allows for more efficient insertion and deletion operations compared to a singly linked list. This repository includes examples of how to implement and manipulate doubly linked lists in C++.

<hr><br>

## Demonstration

### Primitive List Example

```cpp
#include <iostream>
#include "PrimitiveList.h"

int main() {
    PrimitiveList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.display(); // Output: 1 2 3
    return 0;
}
```

### Doubly Linked List Example

```cpp
#include <iostream>
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList<int> list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.display(); // Output: 1 2 3
    return 0;
}
```

<hr><br>

## Features

- Basic implementation of Primitive List
- Advanced implementation of Doubly Linked List
- Examples of common operations (insertion, deletion, traversal)
- Well-documented code for easy understanding

<hr><br>

## Technologies Used

- C++
- GitHub for version control

<hr><br>

## Project Setup

1. **Clone the repository:**
   ```bash
   git clone https://github.com/n4vrl0s3/Primitive-List-Doubly-Linked-List.git
   ```
2. **Navigate to the project directory:**
   ```bash
   cd Primitive-List-Doubly-Linked-List
   ```

<hr><br>

## Steps to Run

1. **Compile the code using a C++ compiler:**
   ```bash
   g++ -o main main.cpp
   ```
2. **Run the executable:**
   ```bash
   ./main
   ```

<hr><br>

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

<hr><br>

<div align="center">
  <a href="https://www.x.com/n4vrl0s3/">
    <img src="https://capsule-render.vercel.app/api?type=waving&height=200&color=100:49108B,20:F3F8FF&section=footer&reversal=false&textBg=false&fontAlignY=50&descAlign=48&descAlignY=59"/>
  </a>
</div>
