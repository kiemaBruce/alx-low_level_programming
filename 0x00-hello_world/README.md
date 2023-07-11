0-preprocessor - runs a C file through the preprocessor and saves the result into another file.
## 1-compiler 
Compiles a C file but does not link.
         - The C file name is saved in the variable $CFILE
	 - The output file is named the same as the C file, but with the extension .o instead of .c
## 2-assembler
Generates the assembly code of a C code and save it in an output file.
	- The C file name is saved in the variable $CFILE
	- The output file is named the same as the C file, but with the extension .s instead of .c

3-name - compiles a C file and creates an executable named cisfun.
4-puts.c - prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
5-printf.c - prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

## 6-size.c
Prints the size of various types on the computer it is compiled and run on.
###	 a.out
	64-bit executable
### 	size32
	32-bit execuatble
### 	size64
	64-bit executable

## 100-intel
Generates the assembly code (Intel syntax) of a C code and saves it in an output file.
