//no parameter - has retrun
//return type (data type) -> int, long int, float, double, Char, ......
#include <stdio.h>
double dti02( );

int dti01( ){
    return 555; //literal data/ raw data  ข้อมูลจริง
}


int main(){
    double xxx, yyy;

    // dti01(); ทำไม่มีใครเข้าทพกันเพราะมันเป็นฟังชั่นที่มี retrun 
    printf("result of call function dti01 = %d\n",dti01());
    //dti02(): ไม่มีใครเขาทำงาน
    xxx = dti02();
    printf("%lf\n", xxx + dti02());

    return 0;
}

double dti02( ){
    printf("Wow...\n");
    return 10 * 20.5; //expression 
}