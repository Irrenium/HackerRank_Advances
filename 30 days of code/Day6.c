#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i; // n number of arrays,

    scanf("%d",&n);
    // malloc an array of n char array pointers.
    char **array = (char**) malloc(sizeof(char *)*n);

    // allocate memory for each of the char array pointers
    for(i=0;i<n;i++) {
        array[i] = malloc(sizeof(char)*20000);
        scanf("%s",array[i]);
    }

    for(i = 0; i < n; i++) {
        int end = strlen(array[i]) - 2;
        int funnyFlag = 1;
        
        for(int j = 1; j < strlen(array[i]) - 1; j++) {       
            
            if(abs(array[i][j] - array[i][j - 1]) != abs(array[i][end] - array[i][end+1])) {                  
                funnyFlag = 0;                
                break;
            }     
            
            end--;              
        }
        
        if(funnyFlag == 1){
            printf("Funny\n");
        }else {
            printf("Not Funny\n");
        }
        free(array[i]);
    }

    free(array);
    return 0;
}