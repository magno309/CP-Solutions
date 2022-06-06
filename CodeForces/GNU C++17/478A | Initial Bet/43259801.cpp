#include<cstdio>
int main(){
    int t=0,a;
    for(int i=0;i<5;i++){
        scanf("%d", &a);
        t+=a;
    }
    if(t%5==0 && t!=0){
        printf("%d", t/5);
    }else{
        printf("-1");
    }
    return 0;
}