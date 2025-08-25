#include <stdio.h>

int main() {
    int age = 19;
    float pi = 3.14159;
    char grade = 'A';
    char name[] = "C Language";

    printf("Integer (%%d): %d\n", age); //%d for int
    printf("Float (%%f): %f\n", pi); //%f for float values
    printf("Character (%%c): %c\n", grade); //%c for characters
    printf("String (%%s): %s\n", name); //%s for string

    return 0;
}
