
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int returned[3] = {0};
    int expected[3] = {0};
    
    scanf("%d %d %d\n", &returned[0], &returned[1], &returned[2]);
    scanf("%d %d %d\n", &expected[0], &expected[1], &expected[2]);
    
    if(returned[2] > expected[2]) {
        printf("10000\n");
    } else if (returned[1] > expected[1]) {

        int months_late = returned[1] - expected[1];
        printf("%d\n", months_late * 500);

    } else if (returned[0] > expected[0]) {

        int days_late = returned[0] - expected[0];
        printf("%d\n", days_late * 15);

    } else {
        
        printf("0\n");
    }
    
    return 0;
}