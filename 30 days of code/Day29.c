


#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <math.h>

#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int maxvalue(int n, int k) {
    int i, j;
    int res = 0, max_res = 0;

    for (i = 1; i <= n; i++) {
        for (j = i+1; j <=n ; j++) {
            int val = i &j;
            
            if (val > max_res && val < k) {
                max_res = val;
            }
        }
    }

    return max_res;
}

int main(){
    int t; 
    int a0;

    scanf("%d",&t);

    for(a0 = 0; a0 < t; a0++){
        int n; 
        int k;

        scanf("%d %d",&n,&k);
        printf("%d\n", maxvalue(n, k));
    }

    return 0;
}