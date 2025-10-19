#include <stdio.h>
#define senpa printf ("++++++++++++++++++++++++++++++\n");
int main (){
    int Number; 

    senpa
    printf ("Lucky Number\n");
    senpa
    printf ("Enter a Lucky Number :");
    scanf("%d" , &Number );
    senpa
    if ( Number == 13); {
        printf ("You are correct, 13 is a Lucky number \n");
    }
    senpa

    return 0;
}