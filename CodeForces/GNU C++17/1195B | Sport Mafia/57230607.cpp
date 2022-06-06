#include<cstdio>
 
int main(){
    long long n,k;
    scanf("%lld%lld", &n,&k);
    for(long long i=1;i<n+1;i++){
        long long suma = (i*(i+1))/2;
        if(suma - (n-i) == k){
            printf("%lld", n-i);
            return 0;
        }
    }
    return 0;
}