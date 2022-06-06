#include<cstdio>
 
int mayor(int a, int b){
    return a>b?a:b;
}
 
int main(){
    int n,a,b,c,r=0;
    scanf("%d%d%d%d", &n,&a,&b,&c);
    for(int i=0;i*a<=n;i++){
        for(int j=0;i*a+j*b<=n;j++){
            if((n-i*a-j*b)%c==0){
                r = mayor(r, i+j+(n-i*a-j*b)/c);
            }
        }
    }
    printf("%d", r);
    return 0;
}