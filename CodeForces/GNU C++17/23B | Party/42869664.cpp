#include<cstdio>
int main(){
    int t,n;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d", &n);
        if(n>1){
            printf("%d\n", n-2);
        }else{
            printf("0\n");
        }
 
    }
    return 0;
}