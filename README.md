### **Cpp-101 Documentation**

---

#### **Overview**
The **C++ Exercises** repository is designed to help me as a beginner get started with C++ by solving a series of hands-on exercises. The exercises cover a broad spectrum of foundational C++ concepts, including variables, arrays, strings, pointers, references, and dynamic memory management.

---

#### **Languages and Technologies**
- **C++** – The main programming language used in these exercises.
- **Standard Library** – Includes `<iostream>` for input and output operations.

---

#### **Key Features**
- **Basic C++ Syntax** – Learn the basics of C++ syntax, variables, input/output operations, and loops.
- **Strings & Arrays** – Practice working with strings and arrays to store and manipulate data.
- **Pointers & References** – Start understanding how pointers and references work in C++ and their use in functions.
- **Dynamic Memory Allocation** – Get familiar with dynamic memory allocation using `new` and `delete`.
- **Vector Manipulation** – Work with vectors and understand how to dynamically allocate arrays.
- **Caesar Cipher** – Implement basic encryption techniques like the Caesar cipher for learning logic flow and character manipulation.

---

#### **Installation and Usage Tips**
1. **Install a C++ Compiler**:
   - Ensure that you have a C++ compiler installed on your system (e.g., GCC, Clang, MSVC).
   - For Linux or macOS, use the terminal to install a compiler:
     ```bash
     sudo apt install g++
     ```
   - For Windows, download and install [MinGW](http://www.mingw.org/) or use Visual Studio.

2. **Running the C++ Program**:
   - Navigate to the directory where the C++ file is located.
   - Compile the program:
     ```bash
     g++ -o program_name program_file.cpp
     ```
   - Run the compiled program:
     ```bash
     ./program_name
     ```

3. **Understanding the Output**:
   - The programs will interact with the user via the console, asking for input and displaying results.

---

### **Exercises in the C++ Repository**

---

#### **Exercise 1: Cifrado Cesar (Caesar Cipher)**
- **Purpose**: Introduces the concept of the Caesar cipher, a simple encryption technique where each letter in the text is shifted by a certain number of positions in the alphabet.
- **Key Features**: 
   - Working with variables and strings in C++.
   - Using loops and conditional statements to perform encryption.
- **Example**: Shift a letter by 3 positions in the alphabet (e.g., `A` becomes `D`).

---

#### **Exercise 2: Create a Vector**
- **Purpose**: Allows you to create a vector of any given size, populate it with values, and then print it.
- **Key Features**: 
   - Practice using arrays and loops in C++.
   - Dynamic vector creation based on user input.
   - Learn to manipulate and display array elements.
- **Key Code Example**:
   - Allocate an array of size `n` and populate it with user input, printing the final vector.
   
---

#### **Exercise 3: Letra del DNI**
- **Purpose**: Similar to the first exercise, but now implemented in C++.
- **Key Features**: 
   - Understanding arrays and string manipulation in C++.
   - Working with user input and performing simple calculations or lookups to assign a letter to a Spanish National ID.
   - Reinforces the concept of using arrays and functions.

---

#### **Exercise 4: Pointers and References**
- **Purpose**: Introduces the concept of pointers and references in C++.
- **Key Features**: 
   - Learn how to work with memory addresses and pass data between functions using pointers.
   - Understand how to modify data indirectly using references.
   - Hands-on with dynamic memory allocation and deallocation.
   - **Example**: Manipulating function arguments with pointers and references.

---

#### **Exercise 5: Vector Handling (Dynamic Array Example)**
- **Purpose**: Understand how to create a dynamic array using pointers in C++.
- **Key Features**:
   - Use of `new` for dynamic memory allocation of arrays.
   - Learn how to manage memory with dynamic arrays.
   - Understanding pointer arithmetic and array indexing.
- **Code Explanation**:
   - This code prompts the user to input the number of elements `n`, dynamically allocates memory for an integer array (`vector`), and then takes input for each element in the array.
   - The array is displayed in the format `(value1 value2 value3 ...)`.
   - **Code**:
     ```cpp
     #include <iostream>

     int main() {
         int n;
         int* vector;

         std::cout << "Número de elementos: ";
         std::cin >> n;
         std::cout << "la variable X es de " << n << " elementos" << "\n";

         vector = new int[n];

         for (int i = 0; i < n; i++) {
             std::cout << "Elemento " << i + 1 << ": ";
             std::cin >> vector[i];
         }

         std::cout << "\n";
         std::cout << "la variable X es:" << "\n";
         std::cout << "\n";
         std::cout << "( ";

         for (int i = 0; i < n; i++) {
             std::cout << vector[i] << " ";
         }

         std::cout << ")";
         std::cout << "\n";

         return 0;
     }
     ```

   - **Explanation**: 
     - **Dynamic Memory Allocation**: `new int[n]` is used to allocate memory for `n` integers.
     - **Input and Output**: The program requests user input to fill the vector and then displays the vector contents.
     - **Pointer Usage**: `vector[i]` accesses the memory location of each element in the array, and the pointer `vector` dynamically points to the array.
     - **Memory Deallocation**: After using the dynamic memory, it's recommended to free it using `delete[] vector` to prevent memory leaks.
