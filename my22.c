#include <stdio.h>

#define pa printf("------------------------------------------\n");
#define EMP_NUM 5

int main(){

    double emp_sale[EMP_NUM], sum =0;

    pa
    printf("              AVERAGE SALE\n");
    pa
    for(int x = 0 ; x < EMP_NUM; x++){  //++x, x=x+1,x+=1
        printf("Employee No.%d/Sale is:: ", x+1);
        scanf("%lf", &emp_sale[x]);
    }
    pa
    for(int x = 0 ; x < EMP_NUM; x++){  //++x, x=x+1,x+=1
        sum = sum + emp_sale[x];

    }
    printf("Average Sale is :: %.2lf\n", sum/EMP_NUM);
    pa
    return 0; 
}