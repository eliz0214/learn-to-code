#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int a,b,c;
    
    
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    
    if (a==b)
  { if (b==c)
      
      printf("Equilateral Triangle");
   
     else 
       printf("isosceles Triangle");
   }
    else
      
        { if (b==c)
            
     printf("isosceles Triangle");
         else
             printf("Scalene Triangle");
         }
    return 0;
        
}
