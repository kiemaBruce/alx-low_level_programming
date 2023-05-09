## 0-read_textfile.c
- Reads a text file and prints it to the POSIX standard output
- Prototype: ssize_t read_textfile(const char *filename, size_t letters);
- where letters is the number of letters it should read and print
- returns the actual number of letters it could read and print.
- if the file can not be opened or read, it returns 0.
- if filename is NULL it returns 0.
- if write fails or does not write the expected amount of bytes, it
  returns 0.
