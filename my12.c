#include <stdio.h>
#define senpa printf ("++++++++++++++++++++++++++++++\n");
    int main(){
        int  num1 , num2 , sum ;
        senpa
        printf ("sum  number\n");
        senpa

        do {
            printf ("Entet number 1 : "); scanf ("%d" , &num1) ;
             printf ("Entet number 2 : "); scanf ("%d" , &num2) ;
             sum = num1 + num2 ;
              printf("Sum of %d and %d is: %d\n",num1, num2, sum);
        senpa

        }while (sum <= 999 );
        
        return 0;
    }