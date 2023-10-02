C - File I/O
This repository contains examples and explanations of file input/output (I/O) operations in the C programming language.

Table of Contents
Introduction
Opening a File
Reading from a File
Writing to a File
Closing a File
Error Handling
Conclusion
Introduction
File I/O operations are essential for reading data from files and writing data to files in C. The C standard library provides several functions and data types for performing file I/O operations.

Opening a File
To perform file I/O operations, you first need to open a file. The fopen function is used to open a file and returns a FILE pointer that can be used for subsequent operations. It takes two arguments: the filename and the mode.

Here's an example of opening a file for reading:

c
Copy
#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // File operations go here...

    fclose(file);
    return 0;
}
In the example above, fopen("input.txt", "r") opens the file named "input.txt" in read mode. If the file cannot be opened, fopen returns NULL, indicating an error.

The second argument to fopen specifies the mode. Common modes include:

"r": Read mode.
"w": Write mode. If the file exists, its contents are truncated. If the file does not exist, a new file is created.
"a": Append mode. Data is written to the end of the file. If the file does not exist, a new file is created.
"b": Binary mode. Used for binary file I/O.
Reading from a File
Once a file is opened for reading, you can use functions like fscanf or fgets to read data from the file.

Here's an example of reading a line from a file using fgets:

c
Copy
#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char buffer[256];
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Read line: %s", buffer);
    }

    fclose(file);
    return 0;
}
In the example above, fgets(buffer, sizeof(buffer), file) reads a line from the file and stores it in the buffer. The sizeof(buffer) argument ensures that we don't read more data than the buffer can hold.

Writing to a File
To write data to a file, you can use functions like fprintf or fputs.

Here's an example of writing a string to a file using fprintf:

c
Copy
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n");

    fclose(file);
    return 0;
}
In the example above, fprintf(file, "Hello, World!\n") writes the string "Hello, World!\n" to the file.

Closing a File
After you finish reading from or writing to a file, it's important to close the file using the fclose function. This ensures that any buffered data is flushed to the file and the file resources are released.

c
Copy
#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // File operations go here...

    fclose(file);
    return 0;
}
In the example above, fclose(file) closes the file that was previously opened.

Error Handling
When working with file I/O operations, it's important to handle errors properly. If a file fails to open or a read/write operation fails, the corresponding functions return an error indicator.

You can use the feof and ferror functions to check for end-of-file or error conditions, respectively.

Here's an example of error handling while reading from a file:

c
Copy
#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char buffer[256];
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Read line: %s", buffer);
    } else {
        if (feof(file)) {
            printf("End of file reached.\n");
        } else if (ferror(file)) {
            printf("Error while reading from file.\n");
        }
    }

    fclose(file);
    return 0;
}
In the example above, feof(file) checks if the end of the file has been reached, and ferror(file) checks if an error occurred while reading from the file.

Conclusion
File I/O operations are fundamental in many C programs. This readme file provided an introduction to opening, reading from, writing to, and closing files in C. It also covered error handling techniques when working with file I/O operations.

For more detailed information, refer to the C standard library documentation or additional resources on file I/O in C programming.
