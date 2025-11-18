//have parameter - no return 
#include <stdio.h>

void dti02(char* name, int age);

void dti01(int x, double y){
    printf("X is %d\n", x);
    printf("y is %d\n", y);
    printf("Sum of x + y : %lf\n", x + y);
}

int main(){

    dti01(10,12.34);
    dti01(12,34.56);
    dti02("Jiraput", 21);

    return 0;
}

void dti02(char* name, int age){
    printf("Hi....%s\n", name);
    printf("Your age is %d\n", age);
}