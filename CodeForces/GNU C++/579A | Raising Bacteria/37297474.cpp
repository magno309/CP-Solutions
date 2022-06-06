#include<cstdio>
 
int bin(int n){
    int c=0;
    for(int i=n; i>0; i=i/2){
        if(i%2!=0){
            c++;
        }
    }
    return c;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", bin(n));
    return 0;
}