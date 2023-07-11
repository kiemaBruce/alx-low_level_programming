## 0-read_textfile.c
- Reads a text file and prints it to the POSIX standard output.
- Prototype: ssize_t read_textfile(const char *filename, size_t letters);
- where letters is the number of letters it should read and print.
- returns the actual number of letters it could read and print.
- if the file can not be opened or read, return 0.
- if filename is NULL return 0.
- if write fails or does not write the expected amount of bytes, return 0.
## 1-create_file.c
- Creates a file.
- Prototype: int create_file(const char *filename, char *text_content);
- where filename is the name of the file to create and text_content is a NULL
terminated string to write to the file.
- Returns: 1 on success, -1 on failure (file can not be created, file can not be
written, write “fails”, etc…).
- The created file must has permissions: rw-------. If the file already
exists, the permissions aren't changed.
- If the file already exists, it is truncated.
- If filename is NULL, the function returns -1.
- If text_content is NULL, an empty file is created.
## 2-append_text_to_file.c
- Appends text at the end of a file.
- Prototype: int append_text_to_file(const char *filename, char *text_content);
- where filename is the name of the file and text_content is the NULL terminated
string to add at the end of the file.
- Return: 1 on success and -1 on failure.
- If the file does not exist it is not created.
- If filename is NULL the function returns -1.
- If text_content is NULL, nothing is added to the file. The function returns
1 if the file exists and -1 if the file does not exist or if you do not have
the required permissions to write the file.
## 3-cp.c
- Copies the content of a file to another file.
- Usage: cp file_from file_to
- if the number of argument is not the correct one, exit with code 97 and print
Usage: cp file_from file_to, followed by a new line, on the POSIX standard
error.
- if file_to already exists, truncate it.
- if file_from does not exist, or if you can not read it, exit with code 98 and
print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on
the POSIX standard error
	- where NAME_OF_THE_FILE is the first argument passed to your program
- if you can not create or if write to file_to fails, exit with code 99 and print
Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX
standard error
	- where NAME_OF_THE_FILE is the second argument passed to your program
- if you can not close a file descriptor , exit with code 100 and print Error:
Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
	- where FD_VALUE is the value of the file descriptor
- Permissions of the created file: rw-rw-r--. If the file already exists, do not
change the permissions
- The program uses a buffer to read 1,024 bytes at a time from file_from to
reduce the number of system calls that are made.
- dprintf is an allowed function.
