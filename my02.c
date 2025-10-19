//preprocessor directive
//คิอ ประกาศ Libary
#include <stdio.h>
#include "math.h"

// คือประกาศค่าคงที่ คือ การส้รางตัวแทนของอะไรสักอย่าหนึง เพื่อเอาไปใช้งานในโปรแกรม
#define ShowPa printf(" +++++++++++++++++++++++++++ ");
#define SMILE " ^_^ 555 "

//global (ใช้ที่ไหนก็ได้) declaration (ประกาศ/สร้าง)
int number = 999;
void showHey();

//user-define function 
void ShowHi(){
    printf("Hi.......\n");
}

int main(){
    ShowPa
    printf("DTI-SAU\n");
    printf("%lf\n", pow(2,10));
    ShowPa
    ShowHi();
    showHey();

        return 0;
}

//user-define function 
void showHey(){
    printf("Hey.....\n");
}