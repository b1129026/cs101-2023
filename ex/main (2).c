#include <stdio.h>


void multi(int i, int j) {
    if(i == 9 && j == 9) {
        printf("%d*%d = %d\n", i, j, i*j);
    }
    else if (j == 9) {
        printf("%d*%d = %d\n", i, j, i*j);
        i = i + 1;
        j = 1;
        multi(i,j);
    }
    else {
        printf("%d*%d = %d ", i, j, i*j);
        multi(i, j + 1);
    }
}

int main() {
    multi(1, 1);
    return 0;
}