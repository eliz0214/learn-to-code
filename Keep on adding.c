#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int num,sum=0;
    do{
        scanf("%d",& num);
        if(num==0) {break;}
        sum=sum+num;
        if(sum==num) {continue;}
        printf("%d\n",sum);
        }while (num>0);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
