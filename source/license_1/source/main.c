#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc == 2) {
        printf("Checking License: %s\n", argv[1]);
        if (strcmp(argv[1], "AAAA-Z10-N-42-OK") == 0) {
            printf("Access Granted!\n");
        } else {
            printf("WRONG!\n");
        }
    } else {
        fprintf(stderr, "Usage: %s <key>\n", argv[0]);
    }
    return 0;
}