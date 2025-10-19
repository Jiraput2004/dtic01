 /*
  หากผู้ใช้ป้อนสายรถเมล์ 57 แสดงข้อความ สาย 57 ไปปิ่นเกล้า บางขุนนนท์

 หากผู้ใช้ป้อนสายรถเมล์ 3 แสดงข้อความ สาย 3 ไปสนามหลวง ลาดพร้าว

 หากผู้ใช้ป้อนสายรถเมล์ 71 แสดงข้อความ สาย 71 ไปหัวลำโพง เยาวราช

 หากผู้ใช้ป้อนสายรถเมล์ 56 แสดงข้อความ สาย 56 ไปบางลำพู สะพานกรุงธน

 หากผูใช้ป้อนสายรถเมล์ 539 แสดงข้อความ สาย 539 ไปอนุสวรีย์ชัย สามเสน

 หากผู้ใช้ป้อนสายรถเมล์สายอื่นนอกจากนี้ แสดงข้อความ ยังไม่มีข้อมูลสายรถเมล์ที่
สอบถาม
 */

#include <stdio.h>
#define senpa printf ("++++++++++++++++++++++++++++++\n");

 int main(){

    int but_numeber;


    senpa
    printf (" Bus Number Information\n");
    senpa
    printf ("Enter but numeber : ");
    scanf ("%d" , &but_numeber );
    senpa

    if (but_numeber == 57 ){
    printf ("Go to Pinklao Bangkhunnon\n");   
    }else if (but_numeber == 3) {
     printf ("Go to Sanam Luang Ladproao\n"); 
    }else if (but_numeber == 71) {
     printf ("Go to Hua Lamphong Yaowarat\n"); 
    }else if (but_numeber == 56) {
     printf ("Go to Bang Lamphu Sqphan Krungthon\n"); 
    }else if (but_numeber == 539) {
     printf ("Go to  Anusawari Chai Samsen\n"); 
    }else{
        printf("No bus number information\n");
    }
    senpa
    
    return 0;
 }