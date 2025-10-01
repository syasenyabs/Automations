#include <stdio.h>

int main(){
    long long userID = 111; 
    int password = 1234;
    long long inputUserID;
    int inputPassword;
    int attempt = 3;

    printf("Kullanici ID'nizi girin: \n");
    scanf("%lld", &inputUserID);

    if(userID != inputUserID){ 
        printf("Verilen ID'ler uyusmamaktadir!");

        return 0; 
    }

    do{
        printf("Sifrenizi girin: \n");
        scanf("%d", &inputPassword);

        if(inputPassword == password){
            printf("Giris Basarili! Hos geldin, %lld", userID);
            break;
        }else{
            attempt--; 
            printf("Kalan giris hakkiniz: %d\n", attempt);
        }

    } while (attempt > 0);
    
    if(attempt == 0){ 
        printf("Hesabiniz bloke olmustur.\n");
    }
    
    return 0;
}
