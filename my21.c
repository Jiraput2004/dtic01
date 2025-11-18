#include <stdio.h>
int main(){
    
    int dataA;
    int dataB[5];
    int dataC[] = {10, 20, 30};
    int dataD[2][5];


    dataA = 20;
    dataB[2] = 200;

    printf("%d\n" , dataC[0] + dataC[2] );
    return 0;
}
