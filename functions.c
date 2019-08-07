#include <stdio.h>
/*
//factorial
int fact(int);
int main(){
    printf(" bir sayi giriniz: ");
    int x;
    scanf("%d",&x);
    printf("faktoriyeli : %d", fact(x));
}
int fact(int x){
    int sonuc =1;
    for(int i=1;i<=x;i++){
        sonuc*=i;
    }
    return sonuc;
}
*/

/*
//combination
int fact(int);
int comb(int,int);
int main(){
    printf(" iki sayi giriniz:\n ");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("kombinasyonu : %d",comb(x,y));
    
}
int comb(int x,int y){ // C(n,r) = n!/(r!(n-r)!)
    return fact(x)/(fact(y)*(fact(x-y)));
}
int fact(int x){
    int sonuc =1;
    for(int i=1;i<=x;i++){
        sonuc *=i;
    }
    return sonuc;
}
*/

/*
//fibonacci
int fib(int);
int main(){
    int x;
    scanf("%d",&x);
    printf(" %d ",fib(x));
}
int fib(int n){
    int a = 1, b = 1;
    int c;
    for (int i = 3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        
    }
    return c;
}
*/


//recursive fibonacci

int fib(int);
int main(){
    int x;
    scanf("%d",&x);
    printf("%d ",fib(x));
}
int fib(int n){
    if(n==1||n==0)
        return 1;
    return fib(n-1)+fib(n-2);
}









