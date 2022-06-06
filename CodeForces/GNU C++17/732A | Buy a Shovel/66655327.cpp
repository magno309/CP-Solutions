#include<cstdio>
 
int main(){
    int k,r,c=1;
    scanf("%d%d", &k,&r);
    int tmp = k;
    while(k % 10 - r != 0){
        if(k % 10 == 0){
            break;
        }
        k+=tmp;
        c++;
    }
    printf("%d", c);
    return 0;
}