#include <cstdio>
 
int suma(int n){
    int s = 0;
    while(n != 0){
        s+=n%10;
        n/=10;
    }
    //printf("%d\n", s);
    return s;
}
 
int main(){
    int a;
    scanf("%d", &a);
    while(suma(a) % 4 != 0){
        a++;
    }
    printf("%d", a);
    return 0;
}