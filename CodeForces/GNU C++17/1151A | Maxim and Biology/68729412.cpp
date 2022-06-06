#include <cstdio>
 
int menor(int a, int b){
    return a<b?a:b;
}
 
int abs(int a){
    return a<=0?a*-1:a;
}
 
char s[55];
char g[10] = "ACTG";
 
int main(){
    int n,m,r=99;
    scanf("%d", &n);
    scanf("%s", s);
    for(int i=0;i<n-3;i++){
        int op=0;
        for(int j=0;j<4;j++){
            m = abs(g[j] - s[i+j]);
            op+=menor(m,26-m);
        }
        r = menor(r,op);
    }
    printf("%d", r);
    return 0;
}