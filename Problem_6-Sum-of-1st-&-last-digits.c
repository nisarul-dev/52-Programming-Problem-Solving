// Problem Link: https://dimikoj.com/problems/6

#include <stdio.h>

int main() {
    int n, num, i, j, first_digit, last_digit;
    scanf("%d", &n);

    for ( i = 1; i <= n; i++ ) {
        last_digit = 0;
        first_digit = 0;

        scanf( "%d", &num );

        // Finding the last digit
        int num_cpy = num;
        while ( num_cpy%10 != 0 ) {
            num_cpy--;
            last_digit++;
        }

        // Finding the first digit
        first_digit = num;
        while ( first_digit > 9 ) {
            first_digit /= 10;
        }

        printf( "Sum = %d\n", first_digit + last_digit );
    }

    return 0;
}
