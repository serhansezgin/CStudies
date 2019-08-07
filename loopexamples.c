#include <stdio.h>
/*
int main(){
    for (int i=0;i<10;i++)
    printf("%d funcyou\n",i);
    
}
*/
/*
int main(){
    for (int i=0;i<10;i++)
    printf("%d\n",i);
    
}
*/
/*
int main(){
    for (float i=0;i<10;i=i/2)
    printf("%f funcyou\n",i);
    
}
*/
/*
int main(){
    for (int i=100;i>=50;i--){
        if(i%3==0){
            printf("%d ",i);
        }
    }
    
}
*/
/*
int main(){
    int i=100;
    while (i>=50){
        if(i%3==0){
            printf("%d ",i);
        }
        i--;
    }
    
}
*/
/*
int main(){
    for (int i=1;i<=10;i++){
            printf("%d %d %d\n",i*5,100-((i-1)*10+1),i);
        }
    }
  */
/*
 int main(){
    for (int i=0;i<=17;i++){
        
            printf("%d ",100-1-i*3);
        }
    }
  */
 /*
//from sert
int main(){
    for (int i=100;i>=50;i-3){
        
            printf("%d ",i);
        }
    }
  */
/*
 int main(){
     int top = 0;
     for (int i = 1;i<=10;i++){
         printf("bir sayi giriniz: ");
         int sayi;
         scanf("%d",&sayi);
         top=top+sayi;
     }
     
     printf("sayilarin toplami : %d \n",top);
     printf("ortalamasi : %d",top/10);

 }
*/
/*
int main(){
    int top =0;
    int say =0;
    int sayi=0;
    while (sayi!= -1){
        printf("bir sayi giriniz");
        scanf("%d",&sayi);
        //if(sayi==0)
        //continue;
        if(sayi==-1)
        break;
        top=top+sayi;
        say++;
        printf("top : %d sayi: %d say %d\n",top,sayi,say);



    }
    printf("toplam: %d \n",top);
    printf("ortalama: %d",top/say);
}
*/


/*
int main(){
    while(1){
        printf("sonsuzdongu");
    }
}
*/

//while 0 yanlis, digerlari 1 -100 dogru

//nested loop
/*
int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%d\t",i*j);
        }
        printf("\n");
    }
}
*/
 /* 
int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if((i+j)%2==0)
             printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }
}
*/

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if((i+j)==6 || i==j)
             printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }
}



















