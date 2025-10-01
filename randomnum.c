#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int x=0;
 int rastgelesayiuret(int a,int b);
 int input();

 int main(){
    srand(time(NULL));
    int max,min,altsinir,ustsinir;
    altsinir=input();
    ustsinir=input();
    max=(ustsinir>altsinir)?ustsinir:altsinir;
    min=(altsinir>ustsinir)?ustsinir:altsinir;
    rastgelesayiuret(min,max);
 }

 int input(){
    printf("sayi giriniz:\n");
    scanf("%d",&x);
    return x;
 }

 int rastgelesayiuret(int a,int b){
    printf("%d ile %d arasindaki rastgele sayi: %d",b,a,a+rand()%(b-a+1));
 }
