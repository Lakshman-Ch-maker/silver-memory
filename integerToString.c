	#include <stdio.h>

    int main() {
        int number = 12345;
        char str[20]; // Buffer to store the string

        // Using sprintf()
        sprintf(str, "%d", number);
        printf("Using sprintf: %s\n", str);

        // Using snprintf() for safety
        snprintf(str, sizeof(str), "%d", number);
        printf("Using snprintf: %s\n", str);

        return 0;
    }
