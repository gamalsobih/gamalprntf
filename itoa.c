#include "main.h"
char* itoa(int value, char* str, int base) {
    // Handle negative numbers
    if (value < 0 && base == 10) {
        *str++ = '-';
        value = -value;
    }

    // Convert the number to a string in reverse order
    char* ptr = str;
    do {
        int digit = value % base;
        *ptr++ = digit < 10 ? '0' + digit : 'A' + digit - 10;
        value /= base;
    } while (value > 0);

    // Add null terminator
    *ptr = '\0';

    // Reverse the string
    int length = ptr - str;
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    return str;
}

int main() {
    int num = 123;
    char str[10];
    itoa(num, str, 10);
    printf("Integer = %d\nString = %s\n", num, str);
    return 0;
}
