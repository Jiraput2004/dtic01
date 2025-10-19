 /*
 single comment


   multiline comment
   " " double quote, ' ' single qoute, # hash, / slash, \ back slash
   : colon, ; semicolon, ( ) round bracket, [ ] square bracket 
   { } curly bracket, < > anggle bracket, | Pipe, & ampersand
   ` backtick (Alt + 9 + 6), ^ Caret

*/
#include "stdio.h" //หริอ <stdio.h>

int main(){
    //แสดงเฉพาะที่อยุ่ใน " " แรกเท่านั้น โดยเขียนอย่างไงแสดงอย่างงั้น ** ยกเว้นรหัสแบ็คสแลช กับ  Format spec/ format code 
    //แต่หากมีอะไรต่อจาก " " แรก จะต้องนำมาแสดงผลที่ "" แรกเสมอ โดยใช้ Foemat spec / format code

    printf(" Hello.....\n");

    printf("AAA %d  BBB  %s %d^_^\n" , 555, "Wow wow wow", 100+200);

    printf("Hi\n\n\nHey\tHoo\t\twow");


    return 0;
}
