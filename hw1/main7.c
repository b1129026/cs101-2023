/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
#include <math.h>
int change(char c[],int len) {
    int n = 0;
    for(int i = 0; i < len; i++) {
        if(c[i] == '1') {
            n = n + pow(2,len-i-1);
        }
    }
    printf("%d\n",n);
}
int alpha(int n) {
    if(n = 10) {
        printf("A");
    }
    else if(n = 11) {
        printf("B");
    }
    else if(n = 12) {
        printf("C");
    }
    else if(n = 13) {
        printf("D");
    }
    else if(n = 14) {
        printf("E");
    }
    else if(n = 15) {
        printf("F");
    }
    else {
        printf("%d",n);
    }
}
int six(int n) {
    int x = n / 16;
    int y = n % 16;
    printf("%d%d\n",x,y);
}

int main() {
    char a[] = "10001111";
    char b[] = "10011110";
    int len = sizeof(a) - 1; 
    int c = change(a,len);
    int d = change(b,len);
    six(c);
    six(d);
    
    return 0;
}
    
    