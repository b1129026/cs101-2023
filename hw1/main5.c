/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char a[] = {-9,8,7,6,5,-4,3,-2,1};
    char tmp;
    int i = 4;
    for (int i = 0; i<9; i++) {
        for (int j = 0; j<9; j++) {
            if(a[i]>a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("%d",a[i-1]);
    return 0;
}