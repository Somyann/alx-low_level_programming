The #include preprocessor directive is used to make the definitions of functions, constants and macros etc. from one file, usually called as a header file, available for use in another C code. A header file has ".h" extension from which you can include the forward declarations of one or more predefined functions, constants, macros etc. The provision of header files in C facilitates a modular design of the program.

System Header Files
The C compiler software is bundled with many pre-compiled header files. These are called system header files. A well-known example is "stdio.h" – a header file included in almost every C program.

Each of the system header files contains a number of utility functions. These functions are often called library functions. For example, printf() and scanf() functions, needed for performing IO operations, are the library functions available in the "stdio.h" header file.

The preprocessor statements that load one or more header files are always in the beginning of the C code. We start our journey to learn C programming with a basic "Hello World" program that starts with including the "stdio.h" file −