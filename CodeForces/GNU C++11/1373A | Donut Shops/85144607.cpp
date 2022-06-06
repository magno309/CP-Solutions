#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long a,b,c;
        scanf("%lld%lld%lld", &a,&b,&c);
        if(a<c){
            printf("1 ");
        }else{
            printf("-1 ");
        }
        if(a*b > c){
            printf("%lld", b);
        }else{
            printf("-1");
        }
        printf("\n");
    }
    return 0;
}