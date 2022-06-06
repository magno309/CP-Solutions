#include<cstdio>
 
int main(){
    int n,m,k;
    scanf("%d%d%d", &n,&m,&k);
    if(n<=m and n<=k){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}