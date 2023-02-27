/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char a[] = "-99acbc";
    char b[] = "99acbc";
    char c[] = "ac-99bc";
    int lena = sizeof(a) - 1;
    int lenb = sizeof(b) - 1;
    int lenc = sizeof(c) - 1;
    for (int i = 0; i<lena; i++) {
        if ((a[i] == '1')||(a[i] == '2')||(a[i] == '3')||(a[i] == '4')||(a[i] == '5')||(a[i] == '6')||(a[i] == '7')||(a[i] == '8')||(a[i] == '9')||(a[i] == '0')||(a[i] == '-')) {
            printf("%c",a[i]);
        }
    }
    printf("\n");
    for (int i = 0; i<lenb; i++) {
        if ((b[i] == '1')||(b[i] == '2')||(b[i] == '3')||(b[i] == '4')||(b[i] == '5')||(b[i] == '6')||(b[i] == '7')||(b[i] == '8')||(b[i] == '9')||(b[i] == '0')||(b[i] == '-')) {
            printf("%c",b[i]);
        }
    }
    printf("\n");
    for (int i = 0; i<lenc; i++) {
        if ((c[i] == '1')||(c[i] == '2')||(c[i] == '3')||(c[i] == '4')||(c[i] == '5')||(c[i] == '6')||(c[i] == '7')||(c[i] == '8')||(c[i] == '9')||(c[i] == '0')||(c[i] == '-')) {
            printf("%c",c[i]);
        }
    }
    printf("\n");
    return 0;
}