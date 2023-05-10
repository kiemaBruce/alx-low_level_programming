## 0-read_textfile.c
- Reads a text file and prints it to the POSIX standard output
- Prototype: ssize_t read_textfile(const char *filename, size_t letters);
- where letters is the number of letters it should read and print
- returns the actual number of letters it could read and print.
- if the file can not be opened or read, it returns 0.
- if filename is NULL it returns 0.
- if write fails or does not write the expected amount of bytes, it
  returns 0.
## 1-create_file.c
- Creates a file.
- Prototype: int create_file(const char *filename, char *text_content);
- where filename is the name of the file to create and text_content is a NULL
  terminated string to write to the file.
- Returns: 1 on success, -1 on failure (file can not be created, file can not be
  written, write “fails”, etc…)
- The created file must have those permissions: rw-------. If the file already
  exists, the permissions are not changed.
- If the file already exists it is truncated.
- If filename is NULL it returns  -1.
- If text_content is NULL, an empty file is created.
## 2-append_text_to_file.c
- Appends text at the end of a file.
- Prototype: int append_text_to_file(const char *filename, char *text_content);
- where filename is the name of the file and text_content is the NULL terminated
  string to add at the end of the file.
