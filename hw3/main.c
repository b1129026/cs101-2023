/******************************************************************************
Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
  int receipt_id;
  int recept_price;
  char receipt_time[32];
  int lotto_set[5][7];
}lotto_record_t;

int main() {
    FILE* fpf;
    lotto_record_t lotto_i;
    fpf = fopen("record.bin","wb+");
    int lotto;
    char lottonum[69];
    int tmp;
    int num;
    int m = 2;
    for(num = 0; num<69; num++) {
        lottonum[num] = num+1;
    }
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
    srand((unsigned) time(NULL)+(unsigned)rand());
    for(int ron = 0; ron<10000; ron++) {
        int a = rand() %69;
        int b = rand() %69;
        tmp = lottonum[a];
        lottonum[a] = lottonum[b];
        lottonum[b] = tmp;
    }
    
    printf("請問你要買幾組樂透?:");
    scanf("%d",&lotto);
    if(lotto == 0) {
        int a;
        int b;
        int c;
        
        printf("請輸入中獎號碼(最多三個):");
        scanf("%d %d %d",&a,&b,&c);
        printf("輸入中獎號碼為: %02d %02d %02d",a,b,c);
    }
    if(lotto!= 0) {
        FILE* fp1;
        int m = 1;
        fp1 = fopen("lotto[00001].txt","w+");
        fprintf(fp1, "======== lotto649 ========\n");
        fprintf(fp1,"======+ No.%05d +======\n", m);
        
         
        
        fprintf(fp1, "=%s=\r\n",time_str);
    
        int i, j, k;
    
        for(j = 0; j < lotto; j++) {
            fprintf(fp1,"[%d]:",j);
             
            for (i = 0; i < 6; i++) {
                int num = fprintf(fp1,"%02d ",lottonum[i+j]);
            
            }
            for( i = 6;i < 69; i++) {
                if(lottonum[i+j]<10) {
                    fprintf(fp1,"%02d \n",lottonum[i+j]);
                    break;
                }
            }
        }
        for(k = lotto+1; k<=5; k++) {
            fprintf(fp1,"[%d]:-- -- -- -- -- -- -- \n",k);
        }
        fprintf(fp1,"======== csie@cgu ========");
        fclose(fp1);
    }
    
    lotto_i.receipt_id = m;
    strcpy(lotto_i.receipt_time,time_str);
    lotto_i.recept_price = lotto*100;
    fprintf(fpf,"彩券 No. %d\n",lotto_i.receipt_id);
    fprintf(fpf,"售出時間: %s\n",lotto_i.receipt_time);
    fprintf(fpf,"售出金額: %d\n",lotto_i.recept_price);
    //strcpy(lotto_i.lotto_set,
    fclose(fpf);
    
    
    return 0;
}