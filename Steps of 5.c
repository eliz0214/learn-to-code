#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    for(i=11;i<100;i++)
        {
        scanf("%d",&i);
        if(i%5==0)
            printf("%d\n",i);
        }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
