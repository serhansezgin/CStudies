#include <stdio.h>
/*
//5 li 1 ve 6 li 1 cizdirme
int main(){
    int n;
    printf("bir sayi giriniz");
    scanf("%d",&n);
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                if ((i==n/2 || j==n/2) || (n%2==0 && (j==n/2-1 || i==n/2-1))) 
                    printf("1");
                else
                    printf("0");    
            }
            printf("\n");
    }
}
*/
/*
//asal sayilar
int main(){
    printf("bir sayi giriniz: ");
    int n;
    scanf("%d",&n);
    for (int i = n;i>=2;i--){
        int asal=1;
        for(int j=2;j<i;j++){  // kok i ye kadar gitme 
            if(i%j==0)
                asal = 0;  //kontrolde break koyma
        }
        if(asal==1){
            printf("%d",i);
            break;
        }
    }
}
*/

/*
int f(int n,int test){
    if (n-1==test)
        return 1;
    if (n%test == 0)
        return 0;

    return f(n,test+1);        
}
int g(int n){
    if(f(n,2))
        return n;
    return g(n-1);    
}

int main(){
    printf("bir sayi giriniz");
    int n;
    scanf("%d",&n);
    printf("%d",g(n));
}
*/

/*
//logaritma
int main(){
    int n;
    printf("bir sayi giriniz");
    scanf("%d",&n);
    int i;
    int c=0;
    for(i=1;i<n;i=i*2){
        c++;
    }
    printf("%d",c);
}
*/
/*
//yasini yazdirma
int main(){
    printf("yasinizi giriniz");
    int yas;
    scanf("%d",&yas);
    printf("Yasiniz : %d",yas);
}
*/


//yas alma, ortalamisini verme
int main(){
    int yas=0;
    int toplam=0;
    int say=0;
    while (yas>=0){
        toplam = toplam + yas;
        say ++;
        printf("siradaki ogrencinin yasini giriniz");
        scanf("%d",&yas);
    }
    say--;
    printf("\nortalama yas : %f",(float)toplam / (float) say);
}









