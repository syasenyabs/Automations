#include <stdio.h>

int main(){
    int i,n,t1=0,t2=1,nextterm;

    printf("terim sayisi giriniz:\n");
    scanf("%d",&n);

    printf("fibonacci dizisi: \n");

    for(i=1;i<=n;++i){
        printf("%d \n",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return 0;
}
