#include <stdio.h>
#define senpa printf ("++++++++++++++++++++++++++++++\n");

int main (){
 int number;
 
    senpa
    printf ("Even & Odd Number\n ");
    senpa

    while ( 1 ) {
    printf (" Enter number  : ");
    scanf ("%d" , &number);
    if (number <= 0) {
        break;
    }
  if (number <= 0){
    printf ("Number is even number\n");
  }else{
    printf ("Number is odd number\n");
    }
    senpa
    }
    return 0;
}