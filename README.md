# bytekit

**bytekit** is a C library for manipulating character arrays (strings) as sequences of bytes, where each address holds a binary value corresponding to a character in the ASCII table.

---

## Character array vs. character pointer

What is the difference between a character array and a character pointer?  
Consider the following example:

```c
char arr[] = "Hello World"; // array version
char *ptr = "Hello World";  // pointer version
```

- `arr` is an array of 12 characters. When the compiler sees:
    ```c
    char arr[] = "Hello World";
    ```
    it allocates 12 consecutive bytes of memory and associates the address of the first byte with `arr`.  
    ![allocations for char array in c](https://overiq.com/media/uploads/character-array-in-memory-1504599203175.png)

- `ptr` is a pointer to a string literal. When the compiler sees:
    ```c
    char *ptr = "Hello World";
    ```
    it allocates 12 bytes for the string literal `"Hello World"` (in read-only memory) and extra bytes for the pointer variable `ptr`. The pointer is assigned the address of the string literal.  
    ![allocations for char pointer in c](https://overiq.com/media/uploads/2020/07/26/character-pointer-and-string-literal-1504599248003.png)

In C, the name of an array points to the base address, but an array and a pointer are not the same:  
- An array allocates storage for the data.
- A pointer just stores an address, which may point to a string literal (read-only) or to a buffer (modifiable).

---

## Library functions

This library provides the following functions for manipulating strings:
- `length`: get the length of a string.
- `equal`: check if two strings are the same.
- `copy`: copy characters from one string to another.
- `subcopy`: copy a specific portion of a string, using the starting and ending index, to another string.
- `subcopy_len`: copy a specific portion of a string, using the length, to another string.
- `subcopy_index_len`: copy a specific portion of a string, using the starting index and the length, to another string.