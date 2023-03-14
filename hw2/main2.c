/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    FILE* fp = fopen("main.c","r+");
    FILE* wp = fopen("main2.txt","w+");
    char c;
    int i = 1;
    fprintf(wp,"01");
    while((c = getc(fp)) != EOF) {
        c =='\n' ? fprintf(wp,"\n%02d",++i) : fprintf(wp, "%c", c);
    }
    fclose(fp);
    fclose(wp);
    return 0;
}

