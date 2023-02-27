/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char a[] = "81c8g8u168";
    int len = sizeof(a) - 1;
    for(int i = 0; i < len;i++) {
        if(a[i] == '1') {
            printf("I ");
        }
        else if(a[i] == '2') {
            printf("II ");
        }
        else if(a[i] == '3') {
            printf("III ");
        }
        else if(a[i] == '4') {
            printf("IV ");
        }
        else if(a[i] == '5') {
            printf("V ");
        }
        else if(a[i] == '6') {
            printf("VI ");
        }
        else if(a[i] == '7') {
            printf("VII ");
        }
        else if(a[i] == '8') {
            printf("VIII ");
        }
        else if(a[i] == '9') {
            printf("IX ");
        }
        else {
            printf("%c",a[i]);
        }
    }
    return 0;
}
