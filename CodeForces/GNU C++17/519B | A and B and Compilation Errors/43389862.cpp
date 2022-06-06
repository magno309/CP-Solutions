#include<cstdio>
int main(){
    int n,a,b,c,ta=0,tb=0,tc=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        ta+=a;
    }
    for(int i=0;i<n-1;i++){
        scanf("%d", &b);
        tb+=b;
    }
    for(int i=0;i<n-2;i++){
        scanf("%d", &c);
        tc+=c;
    }
 
    printf("%d\n%d", ta-tb,tb-tc);
    return 0;
}