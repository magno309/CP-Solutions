#include<cstdio>
int main(){
    long long n,m,a,r,r2;
    scanf("%I64d%I64d%I64d", &n, &m, &a);
    r = n/a;
    if(n%a>0){
        r++;
    }
    r2 = m/a;
    if(m%a>0){
        r2++;
    }
    printf("%I64d", r*r2);
    return 0;
}