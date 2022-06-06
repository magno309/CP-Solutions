#include <cstdio>
 
int main() {
    int n, k, c=0, r=240;
    scanf("%d%d", &n, &k);
    for(int i=1;i<=n;i++){
        if(r-i*5>=k){
            //printf("%d\n", r);
            c++;
            r-=i*5;
        }else{
            break;
        }
    }
    printf("%d", c);
    return 0;
}