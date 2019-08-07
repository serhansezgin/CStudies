#include <stdio.h>
//loops   for, while, do while
/*
int main(){
    for(int i=21;i<=50;i+=2){  //initialization   condition iteration     i 21   21+2   23+2   25+2   27+2  29+2  31+2
        printf(" %d ",i);
    }
*/

/*
int main(){


    int i=0;
    while(i<=10){
        printf(" %d ",i);
        i++;
    }
}
*/

/*
int main(){

    
    int i=0;
    do{
        printf(" %d ",i);  // do while kontrolleri dongunun sonunda yapar, sen bbunu girmissin deyip basta, kontrol edilebilir sonra
       
        i++;
    }while(i<=10);
    }
*/

/*
int main(){
    for(int i=20;i<50;i++){
        if(i%2 == 1)
        printf(" %d ",i);
    }
}
*/
/*
int main(){
    for(int i=21;i<50;i+=2){

        //if(i%2 == 1)
        printf(" %d ",i);
    }
}
*/
/*
int main(){
    for(int i=20;i<50;i++){
        if(i%2 == 0)
        printf(" %d ",i);
    }
}
*/
/*
int main(){
    for(int i=20;i<50;i+=2){
        //f(i%2 == 0)
        printf(" %d ",i);
    }
}
*/
/*
int main(){
    for(int i=100;i>=20;i--){
        if(i%3 == 0 && i%7 == 0)
        printf(" %d ",i);
    }
}
*/

/*
int main(){
    int girilen;
    int eb = 0;
    for (int i=0;i<5;i++){
        scanf(" %d ",&girilen);
            printf("\n simdiye kadarki en buyuk sayi : %d\n",eb);
        if(girilen>eb)
            eb=girilen;
    }
    printf(" eb : %d",eb);
}
*/


/*
//en buyuk
int main(){
    int girilen=0;
    int eb=0;
    while(girilen!=-1){
        scanf(" %d ",&girilen);
        if(girilen>eb)
            eb=girilen;        
    }
    printf(" eb : %d ",eb);
}
*/

/*
//ortalama
int main(){
    int girilen=0;
    int ort;
    int n = 0;
    int toplam = 0;
    while(girilen !=-1){
        scanf(" %d ", &girilen);
        n++;
        toplam = toplam + girilen;
    }
        n--;
        toplam ++;
    printf(" kac sayi girildi : %d , toplam : %d , ortalama : %d ",n,toplam,toplam/n);

}
*/


/*
//asal sayi
int main(){
    int a=1,b;
    scanf(" %d ", &b);
    int flag = 0;
    while(a<b-1){
        a++;
        if(b%a == 0){
            flag =1;
            break;
        }
    }    
    if(flag == 0)
        printf(" sayi asal ");
    else
        printf(" sayi asal degil ");    
}
*/


/*
//like fourier transform, matrix
int main(){
    int i,j; // foo, bar
    for (i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf(" %d ",i*j);

        }
        printf("\n");
    }
}
*/


/*
//yildiz cizdirme
int main(){
    for(int n = 0; n<5;n++){
        for(int i=0;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
}
*/

/*
//ters yildiz
int main(){
    for(int n = 4; n>=0;n--){
        for(int i=0;i<=n;i++){
            printf("*");
        }
        printf("\n");
    }
}
*/

/*
//ters yildiz 2
int main(){
    int i,j;
    for(int i = 5; i>=1;i--){
        for(int k=0;k<5-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
}
*/
/*
// break
int main(){
    int i;
    for (i=0;i<10;i++){
        printf("%d\n",i);
        if(i==5)
            break;
    }
}
*/


//continue, be careful for printf's place
int main(){
    int i;
    for (i=0;i<10;i++){
        if(i==5)
            continue;
        printf("%d\n",i);
    }
}



