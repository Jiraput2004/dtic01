#include <stdio.h>
#include <string.h> // ต้อง include <string.h> สำหรับ strcpy และ strcat

// กำหนดขนาดบัฟเฟอร์ให้ใหญ่พอสำหรับการต่อสตริง
#define BUFFER_SIZE 100

int sumNumber(int n1, int n2){
    printf("n1 is %d\n", n1);
    printf("n2 is %d\n", n2);
    return n1 + n2;
}

// เปลี่ยนประเภท fname เป็น char*
char* showWelcome(const char* fname, const char* lname){ 
    // ใช้ static char array เพื่อให้ตัวแปรยังอยู่หลังฟังก์ชันทำงานเสร็จ
    static char result[BUFFER_SIZE]; 
    
    // 1. เริ่มต้นด้วยการคัดลอก "Welcome " เข้าไปใน result ก่อน
    // result ต้องมีขนาดใหญ่พอ
    strcpy(result, "Welcome "); 
    
    // 2. ต่อ fname เข้ากับ result 
    strcat(result, fname); 

    // 3. ต่อช่องว่าง " " 
    strcat(result, " "); 
    
    // 4. ต่อ lname เข้ากับ result
    strcat(result, lname); 

    return result; 
}

int main (){
    // แก้ไข prinef เป็น printf และต้องระบุชนิดของสตริง literal ให้เป็น const char*
    printf ("Sum is number %d\n", sumNumber(10, 20));
    printf ("%s\n", showWelcome("Jiraput", "Na"));

    return 0;
}