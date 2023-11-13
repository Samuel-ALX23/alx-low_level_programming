ALX Task 0x18 - Dynamic Libraries

This repository contains my implementation of the ALX Task 0x18 - Dynamic Libraries.

Overview
Dynamic libraries are shared libraries that can be loaded into a program at runtime. They allow programs to share code and data, which can save memory and improve performance.

To create a dynamic library, you first need to compile your code into a shared object file. This can be done using the following command:

gcc -shared -o <library_name>.so <source_files.c>
Once you have created the shared object file, you can load it into a program using the dlopen() function. The dlopen() function takes the name of the shared object file as an argument and returns a handle to the library.

To use the functions in the dynamic library, you need to call the dlsym() function. The dlsym() function takes the handle to the library and the name of the function as arguments and returns a pointer to the function.

Once you have finished using the dynamic library, you need to unload it using the dlclose() function.

Usage
To use this repository, simply clone it to your local machine and compile the code using the following command:

make
This will create a dynamic library called libdynamic_libraries.so.

To load the dynamic library into a program, you can use the following code:

C
#include <dlfcn.h>

int main() {
  // Load the dynamic library.
  void *handle = dlopen("./libdynamic_libraries.so", RTLD_LAZY);
  if (handle == NULL) {
    fprintf(stderr, "Failed to load dynamic library: %s\n", dlerror());
    return 1;
  }

  // Get a pointer to the function in the dynamic library.
  int (*add_function)(int, int) = dlsym(handle, "add");
  if (add_function == NULL) {
    fprintf(stderr, "Failed to find symbol 'add' in dynamic library: %s\n", dlerror());
    return 1;
  }

  // Call the function in the dynamic library.
  int result = add_function(1, 2);

  // Unload the dynamic library.
  dlclose(handle);

  // Print the result.
  printf("The result is: %d\n", result);

  return 0;
}
Use code with caution. Learn more
This code will load the dynamic library, call the add() function in the library, and then unload the library.

Testing
To test the dynamic library, you can use the following command:

./test
This will compile and run the test program, which will call the functions in the dynamic library.

Conclusion
This repository contains a simple implementation of a dynamic library. The library contains a single function, add(), which adds two numbers together.

You can use this repository as a starting point for creating your own dynamic libraries.
