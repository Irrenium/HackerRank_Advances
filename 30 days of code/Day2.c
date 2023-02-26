
    // Declare second integer, double, and String variables.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define MAX_BUFFER 255

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    int si;
    double dd;
    char *buff = malloc(MAX_BUFFER);

    if (buff == NULL) {
        printf("Memory error\n");
        return 1;
    }
    // Read and save an integer, double, and String to your variables.
    if ( fgets(buff, MAX_BUFFER, stdin) != NULL ) {
        sscanf(buff, "%d", &si);
        printf("%d\n", i + si);
    }

    if ( fgets(buff, MAX_BUFFER, stdin) != NULL ) {
        sscanf(buff, "%lf", &dd);
        printf("%.1f\n", d + dd);
    }

    if ( fgets(buff, MAX_BUFFER, stdin) != NULL ) {
         printf("%s%s\n", s, buff);
    }

    return 0;
}