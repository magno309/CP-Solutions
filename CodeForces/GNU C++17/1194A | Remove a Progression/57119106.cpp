#include<cstdio>
 
int main(){
    int t,n,x;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d%d", &n,&x);
        printf("%d\n", x*2);
    }
    return 0;
}