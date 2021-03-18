#include<stdio.h>
#include<string.h>

int main() {
    int turn, i=1;
    char n[101];

    scanf("%d", &turn);

    while( i <= turn ){
        scanf("%s", &n);

        if(n[strlen(n) - 1] % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
        i++;
    }
}
