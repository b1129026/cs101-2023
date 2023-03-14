/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE* fp;
    fp = fopen("lotte.txt","w+");
    int lotto;
    printf("請輸入要一到五組組樂透:");
    scanf("%d",&lotto);
    fprintf(fp, "======== lotto649 ========\n");
    time_t curtime;
    char time_str[80];
    time(&curtime);
    strcpy(time_str,ctime(&curtime));
    for(int n = 0; n<sizeof(time_str)/sizeof(time_str[0]); n++) {
        if (time_str[n] == '\0') {
            time_str[n-1] = '\0';
            break;
        } 
    }
    fprintf(fp, "=%s=\r\n",time_str);
    
    
    int i, j, k;
    
    for(j = 1; j <= lotto; j++) {
        fprintf(fp,"[%d]:",j);
        srand((unsigned) time(NULL)+(unsigned)rand());
        for (i = 0; i < 6; i++) {
            srand((unsigned) time(NULL)+(unsigned)rand());
            int num = fprintf(fp,"%02d ",rand() % 68+1);
            
        }
        srand((unsigned) time(NULL)+(unsigned)rand());
        fprintf(fp,"%02d \n",rand() % 9+1);
    }
    for(k = lotto+1; k<=5; k++) {
        fprintf(fp,"[%d]:-- -- -- -- -- -- -- \n",k);
    }
    fprintf(fp,"========csie@cgu========");
    fclose(fp);
    
    return 0;
}
