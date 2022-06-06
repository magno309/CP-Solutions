#include<cstdio>
 
int main(){
    int n,m,r=0;
    scanf("%d%d", &n,&m);
    for(int i=0;i<n;i++){
        int a;
        scanf("%d", &a);
        r+=a;
        printf("%d ", r/m);
        r%=m;
    }
    return 0;
}