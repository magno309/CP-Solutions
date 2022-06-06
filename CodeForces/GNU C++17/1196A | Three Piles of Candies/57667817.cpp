#include<cstdio>
 
int main(){
    int q;
    scanf("%d", &q);
    for(int i=0;i<q;i++){
        long long n, s=0;
        for(int j=0;j<3;j++){
            scanf("%lld", &n);
            s+=n;
        }
        printf("%lld\n", s/2);
    }
    return 0;
}