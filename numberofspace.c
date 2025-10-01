#include <stdio.h>

int main(){
    int sayac=0;
    char cumle[100];
    printf("bir cumle girin:");
    fgets(cumle,sizeof(cumle),stdin);

    for(int i=0;cumle[i]!='\0';i++){
        if(cumle[i]==' '){
            sayac++;
        }
    }

    printf("bosluk sayisi: %d",sayac);
    return 0;
}
