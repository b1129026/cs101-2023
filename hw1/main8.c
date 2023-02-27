/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
int main() {
    char a[] = "Hello";
    int len = sizeof(a) - 1;
    for(int i = 0;i<len/2;i++) {
        int tmp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = tmp;
    }
    a[0] = a[0] - 32;
    a[len-1] = a[len-1] + 32;
    printf("%s",a);
    return 0;
}