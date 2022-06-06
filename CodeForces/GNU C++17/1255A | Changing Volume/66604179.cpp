#include<cstdio>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int a,b,d;
        scanf("%d%d", &a,&b);
        d = abs(a-b);
        //printf("%d\n", d);
        if(d%5==0){
            printf("%d\n", d/5);
        }
        else if((d-1)%5 == 0 or (d-2)%5 == 0){
            printf("%d\n", (d/5) + 1);
        }
        else if((d-3)%5 == 0 or (d-4)%5 == 0){
            printf("%d\n", (d/5) + 2);
        }
        else if(d%2==0){
            printf("%d\n", d/2);
        }
    }
}