#include<cstdio>
 
int main(){
    int n,t,k,d;
    scanf("%d%d%d%d", &n,&t,&k,&d);
    if(k>=n){
        printf("NO");
    }else{
        int a = (n%k==0) ? n/k:n/k+1;
        if((a-1)*t>d){
            printf("YES");
        }else{
            printf("NO");
        }
    }
    return 0;
}