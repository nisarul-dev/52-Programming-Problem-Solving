#include<stdio.h>

int main()
{
    for(int i = 1000; i > 0; i--) {
        printf("%d\t", i);
        if ((i-1) % 5 == 0) {
            printf("\n");
        }
    }
}
