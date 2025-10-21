The `fgets` function in C is used to read a string from a file (which can be a standard input, a file on disk, etc.) until a newline character is encountered or the end-of-file (EOF) is reached, or until the specified number of characters have been read.

Here's a detailed breakdown of how `fgets` works and its function:

### Syntax

```c
char *fgets(char *str, int n, FILE *stream);
```

- **str**: This is the pointer to an array of chars where the string read will be stored.
- **n**: This is the maximum number of characters to be read (including the terminating null character).
- **stream**: This is the file pointer to the input stream from which characters are read.

### Functionality

1. **Reading Input**: `fgets` reads characters from the specified `stream` and stores them into the `str` array until:
   - A newline character (`\n`) is read.
   - The end-of-file (EOF) is reached.
   - The specified number of characters (n-1) is read.
   
2. **Null-Termination**: The string read is automatically null-terminated (`'\0'`), ensuring it is a proper C string.

3. **Newline Character**: If a newline character is read, it is included in the string and the string is null-terminated after it. This means that if you input a line of text followed by pressing Enter, the resulting string in `str` will contain the newline character.

4. **Return Value**: `fgets` returns `str` on success, and `NULL` on error or when the end of the file is reached while no characters have been read.

### Example

In the context of the provided code:

```c
while (fgets(input, sizeof(input), stdin)) {
    input[strcspn(input, "\n")] = 0; // Remove the newline character
    ...
}
```

- **`fgets(input, sizeof(input), stdin)`**: This reads a line of input from the standard input (`stdin`) and stores it in the `input` array. The maximum number of characters read will be `sizeof(input) - 1` to leave space for the null-terminator.
  
- **`input[strcspn(input, "\n")] = 0;`**: This line removes the newline character from the input string, replacing it with a null terminator. `strcspn` calculates the length of the initial segment of `input` that does not contain the newline character, effectively finding the position of the newline character if it exists.

### Example Behavior

If you input the following line of text:

```
123
```

- `fgets` will read "123\n" from stdin and store it in `input` as `"123\n\0"`.
- The `strcspn` function will find the newline character and replace it with a null terminator, so `input` becomes `"123\0"`.

By using `fgets` in this manner, the program reads each line of input, processes it to remove the newline character, and then processes the numeric value as described.
