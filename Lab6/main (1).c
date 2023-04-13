#include <stdio.h>


void multi(int i, int j) {
    printf("%d * %d = %d  ",i, j, i * j);
    if(i == 9 && j == 9) {
        return;
    }
    else if(j == 9) {
        i++;
        j = 0;
        printf("\n");
    }
    j++;
    multi(i,j);
}

int main() {
    multi(1, 1);
    return 0;
}