/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char a[] = "ABCabcABC";
    int shift = 4;
    char tmp;
    int len = sizeof(a) - 1;
    for (int i = 0, j = shift; j<len; i++,j++) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
    printf("%s",a);
    return 0;
}


