#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zar=0;
int zarAt();
int kontrol(int x,int y);

int main(){
    srand(time(NULL));
    int zar1 = zarAt();
    int zar2 = zarAt();

    kontrol(zar1,zar2);
}

int zarAt(){
    zar=rand()%6+1;
    printf("zar=%d\n",zar);
    return zar;
}

int kontrol(int x,int y){
    if(x==y){
        switch (x)
        {
        case 1:
            printf("1-1 hepyek\n");
            break;
        case 2:
            printf("2-2 du bara\n");
        break;
        case 3:
            printf("3-3 du se\n");
        break;
        case 4:
            printf("4-4 dort cehar\n");
        break;
        case 5:
            printf("5-5 du bes\n");
        break;
        case 6:
            printf("6-6 du ses\n");
        break;
        default:
            break;
        }
    }
}
