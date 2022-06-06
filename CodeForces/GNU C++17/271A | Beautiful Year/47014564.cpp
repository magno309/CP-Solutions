#include<cstdio>
 
int main(){
    int n;
    scanf("%d", &n);
    while(true){
        n++;
        int m = n/1000;
        int c = (n/100)%10;
        int d = (n/10)%10;
        int u = n%10;
        if(m != c and m != d and m != u and c != d and c!= u and d != u){
            printf("%d", n);
            break;
        }
    }
    return 0;
}