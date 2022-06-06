#include<cstdio>
int main(){
    int k,n,w;
    scanf("%d%d%d", &k,&n,&w);
    int r = ((k+(k*w))*w)/2;
    if(r-n>0){
        printf("%d", r-n);
    }else{
        printf("0");
    }
    return 0;
}