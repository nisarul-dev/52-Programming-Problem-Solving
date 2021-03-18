#include<stdio.h>

int main() {
    int turn;
    scanf("%d", &turn);

    int ara[turn];
    for(int i=0; i < turn; i++) {
        scanf("%d", &ara[i]);
    }

    for(int i=0; i < turn; i++) {
        if(ara[i] % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }
}
