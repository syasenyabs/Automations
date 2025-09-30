#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
    #include <windows.h>
#else 
    #include <unistd.h>
#endif

enum yemek{pizza,lahmacun,doner,hamburger};
enum tatli{baklava,kunefe};
enum yemek rastgeleyemeksecme();
enum tatli rastgeletatlisecme();
void gecikme(int sn);
int yukleme();

int main(){
    srand(time(NULL));

    enum yemek yemeksec=rastgeleyemeksecme();
        yukleme();
        printf("secilen yemek:");
    switch(yemeksec){
        case 0:
            printf("pizza\n");
            break;
        case 1:
            printf("lahmacun\n");
            break;
        case 2:
            printf("doner\n");
            break;
        case 3:
            printf("hamburger\n");
        default:
            break;
    }
    gecikme(1);
    yukleme();

    enum tatli tatlisec=rastgeletatlisecme();

    printf("secilen tatli:");
    switch(tatlisec){
        case baklava:
            printf("baklava\n");
            break;
        case kunefe:
            printf("kunefe\n");
            break;
    }
    return 0;
}

enum yemek rastgeleyemeksecme(){
    return rand()%4;
}

enum tatli rastgeletatlisecme(){
    return rand()%2;
}

int yukleme(){
    for(int i=0;i<=3;i++){
        if(i==1){
            printf("secim yapiliyor.");
            gecikme(1);
            continue;
            }
        if(i==2){
            printf(".");
            gecikme(1);
            continue;
            }
        if(i==3){
            printf(".");
            gecikme(1);
            continue;
        }
        break;
        }}

        void gecikme(int sn)
        {
            #ifdef _WIN32
                Sleep(sn * 1000);
            #else
                sleep(sn);
            #endif
        }

        
    

