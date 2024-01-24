#include <stdio.h>

int main() {
    // create variable values of different sizes
    char c = 'A';
    unsigned short s = 12345;
    unsigned int l = 1234567890;
    float f = 1.2345;
    double d = 1.234567e100;

    // open the file data.bin for writing in binary mode
    // binary mode primarily instructs the file library how to treat anything
    // being written that looks like a newline character for some OSes
    FILE *file = fopen("data.bin", "wb");

    // the compiler returns information about variable sizes
    // as a size_t (size type), which holds the size in bytes.
    // first, let's find out how big a size_t is and write that to the file
    size_t size = sizeof(size_t);
    fwrite(&size, sizeof(size), 1, file);

    // find the size of a char (character),
    // then write the size and the value to the file
    size_t bytes = sizeof(c);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&c, sizeof(c), 1, file);
    
    // find the size of an unsigned short integer,
    // then write the size and the value to the file
    bytes = sizeof(s);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&s, sizeof(s), 1, file);

    // find the size of an unsigned integer,
    // then write the size and the value to the file
    bytes = sizeof(l);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&l, sizeof(l), 1, file);

    // find the size of a single-precision floating point value,
    // then write the size and the value to the file
    bytes = sizeof(f);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&f, sizeof(f), 1, file);

    // find the size of a double-precision floating point value,
    // then write the size and the value to the file
    bytes = sizeof(d);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&d, sizeof(d), 1, file);

    // close the file
    fclose(file);
}