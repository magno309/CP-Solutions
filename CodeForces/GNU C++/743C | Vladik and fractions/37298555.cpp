#include<cstdio>
int main(){
    int n,x,y,z;
    scanf("%d", &n);
    if(n>1){
        x=n;
        y=n+1;
        z=n*(n+1);
 
            printf("%d %d %d", x,y,z);
    }else{
        printf("-1");
    }
    return 0;
}