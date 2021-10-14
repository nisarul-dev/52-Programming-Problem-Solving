// Problem Link: https://dimikoj.com/problems/4

#include <stdio.h>

int main() {
    int n, num, i, j;
    scanf("%d", &n);

    for ( i = 1; i <= n; i++ ) {
        scanf( "%d", &num );
        printf( "Case %d:", i );
        for ( j = 1; j <= num; j++ ) {
            if(num % j == 0) {
                printf( " %d", j );
            }
        }
        printf("\n");
    }

    return 0;
}
