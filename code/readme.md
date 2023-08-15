# Compiling and Running "Hello, World!" in C using GCC

This guide will walk you through the process of writing, compiling, and running a "Hello, World!" program in the C programming language using the GCC compiler.

## Prerequisites

- GCC Compiler: Make sure you have the GCC compiler installed on your system. You can check if it's installed by running `gcc --version` in your terminal. If it's not installed, you can download and install it according to your system's instructions.

## Steps

1. **Write the Code:**
   Create a new file named `HelloWorld.c` using a text editor of your choice.

   ```c
   #include <stdio.h>

   int main() {
       printf("Hello, World!\n");
       return 0;
   }
   ```

   OR 

   Navigate to folder lesson-1 for a pre-written hello world program.

   ```bash
   cd lesson-1
   ```

2. **Compile the Code:**
   Open your terminal and navigate to the directory where you saved `HelloWorld.c`. Run the following command to compile the code:

   ```bash
   gcc -o HelloWorld HelloWorld.c
   ```

   This command tells GCC to compile `HelloWorld.c` and create an executable named `HelloWorld`.

3. **Run the Executable:**
   Once the compilation is successful, you can run the executable by typing:

   ```bash
   ./HelloWorld
   ```

   You should see the output: `Hello, World!`.

## Troubleshooting

- If you encounter any errors during compilation, carefully check your code for typos or syntax mistakes.
- Ensure you are navigating to the correct directory in the terminal where your `HelloWorld.c` file is located.
- Make sure GCC is installed and available in your system's PATH.

## Conclusion

Congratulations! You've successfully compiled and run your first C program using GCC. This simple "Hello, World!" example demonstrates the basics of compiling and executing C code. You're now ready to explore more complex projects and delve deeper into C programming.


|        Code Examples        |                |
| ------------------- | ------------------- |
| [Lesson 1](lesson-1/index.md) | [Lesson 5](lesson-5/index.md) |
| [Lesson 2](lesson-2/index.md) | [Lesson 6](lesson-6/index.md) |
| [Lesson 3](lesson-3/index.md)          | [Lesson 7](lesson-7/index.md) |
| [Lesson 4](lesson-4/index.md)          | [Lesson 8](lesson-8/index.md) |
