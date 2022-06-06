#include <cstdio>
 
int mayor(int a, int b){
    return (a>b)?a:b;
}
 
int menor(int a, int b){
    return (a>b)?b:a;
}
 
 
int main() {
    int l,r,a;
    int x,y,m=0;
    scanf("%d%d%d", &l,&r,&a);
    for(int i=0;i<=a;i++){
        x = l+i;
        y = r+a-i;
        m = mayor(m,menor(x,y)*2);
    }
    printf("%d", m);
    return 0;
}