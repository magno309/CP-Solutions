#include<cstdio>
 
int main(){
    int n, c=1;
 
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        c+=i*4;
    }
    printf("%d", c);
    return 0;
}