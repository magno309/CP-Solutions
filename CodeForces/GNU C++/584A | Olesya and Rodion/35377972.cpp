#include<cstdio>
int main(){
    int n,t;
    scanf("%d%d", &n, &t);
    if(n==1 & t==10){
        printf("-1");
    }else{
        if(t==10){
            for(int i=0; i<n-2; i++){
                printf("1");
            }
            printf("10");
        }else{
            //printf("%d", t);
            for(int i=0; i<n; i++){
                printf("%d",t);
            }
        }
    }
    return 0;
}