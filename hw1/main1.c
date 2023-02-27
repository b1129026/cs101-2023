/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int A = 0;
    int B = 0;
    int C = 0;
    int d = 0;
    char a[] = "AABBBCCCCddd";
    unsigned long len = (unsigned long)sizeof(a)/sizeof(char)-1;
    for (int i = 0;i < len; i++) {
        if (a[i] == 'A') {
            A = A + 1;
        }
        if (a[i] == 'B') {
            B = B + 1;
        }
        if (a[i] == 'C') {
            C = C + 1;
        }
        if (a[i] == 'd') {
            d = d + 1;
        }
    }
    printf("A%dB%dC%dd%d",A,B,C,d);
    return 0;
    
}
    
    