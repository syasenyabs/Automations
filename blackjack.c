#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int blackjackoyna();

int main(){
    srand(time(NULL));
    blackjackoyna();

    return 0;
}

int blackjackoyna(){
    int toplam=0;
    int kart;
    char tercih;
    printf("Blackjack oyununa hosgeldiniz.\n");
    printf("Amacimiz 21i gecmeden toplam yapmaktir.\n");

    while(1){
        kart=rand()%13+1;
        if(kart==1){
            printf("Dagitilan kart: AS\n");
            toplam++;
        }
        else if(kart>=11 && 13<=kart){
            printf("Dagitilan kart: %s\n",kart==11?"vale":kart==12?"kiz":"papaz");
            toplam+=10;
        }
        else{
            printf("dagitilan kart= %d\n",kart);
            toplam+=kart;
        }

        printf("toplam: %d\n",toplam);

        if(toplam>21){
            printf("oyunu kaybettiniz. toplam:%d",toplam);
        }
        else if(toplam==21){
            printf("oyunuz kazandiniz. toplam:%d",toplam);
        }
        
        printf("Oyuna devam etmek istiyor musunuz? (E/H)");
        scanf(" %c",&tercih);

        if(tercih=='E'||tercih=='e'){
            continue;
        }
        else if(tercih=='H'||tercih=='h'){
            printf("oyundan cekildiniz.");
            break;
        }
        else{
            printf("gecersiz giris.");
            break;
        }
    }
}
