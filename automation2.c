#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
    #include <windows.h>
#else 
    #iclude <unistd.h>
#endif

void rastgeleslotsec();
int randomsayiuret();
void duraklama(int saniye);

int main(){
    srand(time(NULL));

    rastgeleslotsec();
    return 0;

}

void rastgeleslotsec(){
    int slot1,slot2,slot3,slot4;
    while(1){

        slot1=randomsayiuret();
        slot2=randomsayiuret();

        if(slot1==slot2){
            continue;
        }
        slot3=randomsayiuret();
        if(slot3==slot1 || slot3==slot2){
            continue;
        }
        slot4=randomsayiuret();
        if(slot4==slot3||slot4==slot2||slot4==slot1){
            continue;
        }
        break;
    }

        printf("secilen sayilar:\n");
        printf("1.slot:%d\n", slot1);
        duraklama(1);
        printf("2.slot:%d\n", slot2);
        duraklama(1);
        printf("3.slot:%d\n", slot3);
        duraklama(1);
        printf("4.slot:%d\n", slot4);


}

int randomsayiuret(){
    return rand()%20+1;
}
void duraklama(int saniye){
    #ifdef _WIN32
        Sleep(saniye*1000);
    #else
        sleep(saniye);
    #endif

}
