#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Welcome";
    char destination[100];

    strcpy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}

