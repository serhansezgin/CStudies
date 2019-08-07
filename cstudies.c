#include <stdio.h>

/* yourum  */

int main(){
    int a=10;  //a yi 10 a esitle
    int b =3, c=4;   //3 u al b nin icine koy, 4 u al c nin icine koy
    int x;
    printf("\n a : %d , b : %d , c : %d" , a,b,c);
    printf("\n a:10, b : 3, c : 4         ");
    
    a=23; b=34; c=45;
    printf("\n a : %d , b : %d , c : %d" , a,b,c);
    printf("\n a:10, b : 3, c : 4         ");
    
/* backslash ile ozel karakter yazdirilabilir*/

    printf("\n n b t \b\t\n \\  \"   a : %d , b : %d, c: %d", a,b,c);                                   

    printf("\n input a number you fucking idiot \n");
    scanf("%d",&x);
    printf("\n the number you entered is : %d \n",x);

    float pi = 3.14;  //trial like java
    printf("%8.4f",pi);


}