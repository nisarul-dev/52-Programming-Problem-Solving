// Problem Link: https://dimikoj.com/problems/5

#include <stdio.h>

int main() {
    int n, num, i, j, k;
    scanf("%d", &n);

    for ( i = 1; i <= n; i++ ) {
        scanf( "%d", &num );
        if(i != 1) {
        	printf("\n");
        }
        for ( j = 1; j <= num; j++ ) {
            if(i != 1) {
                printf("\n");
            }
            for( k = 1; k <= num; k++ ) {
                printf("*");
            }
        }
    }

    printf("\n");
    return 0;
}
