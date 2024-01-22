#include <stdio.h>

int main() {
    char c = 'A';
    unsigned short s = 12345;
    unsigned int l = 1234567890;
    float f = 1.2345;
    double d = 1.234567e100;

    FILE *file = fopen("data.bin", "wb");

    size_t size = sizeof(size_t);
    fwrite(&size, sizeof(size), 1, file);

    size_t bytes = sizeof(c);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&c, sizeof(c), 1, file);
    
    bytes = sizeof(s);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&s, sizeof(s), 1, file);

    bytes = sizeof(l);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&l, sizeof(l), 1, file);

    bytes = sizeof(f);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&f, sizeof(f), 1, file);

    bytes = sizeof(d);
    fwrite(&bytes, sizeof(bytes), 1, file);
    fwrite(&d, sizeof(d), 1, file);

    fclose(file);
}