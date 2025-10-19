#include <stdio.h>
#define senpa printf ("++++++++++++++++++++++++++++++\n");
int main (){

     char pro_id[5], pro_name[50];
     float pro_price , pro_sale;


    senpa
    printf ("Calculate Product Sale\n");
    senpa
    printf ("Enter product code :");
    scanf ("%s" , &pro_id);

    printf ("Enter product name :");
    scanf ("%s" , &pro_name);

    printf ("Enter product price :");
    scanf ("%s" , &pro_price);
    senpa

    if (pro_price < 1000){
        pro_price = pro_price - (pro_price  * 3 / 100.0);
    
    }else{
    pro_price = pro_price - (pro_price * 5 / 100.0);
    }
    printf ("Product sale : %.2f\n" , pro_price);
    senpa

    return 0;
}