#include <cstdio>
 
int main(){
    int n, b=0;
    scanf("%d", &n);
    b+=n/100;
    n=n%100;
    b+=n/20;
    n=n%20;
    b+=n/10;
    n=n%10;
    b+=n/5;
    n=n%5;
    b+=n/1;
    n=n%1;
    printf("%d", b);
    return 0;
}