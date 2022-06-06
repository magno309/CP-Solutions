#include<cstdio>
#include<stdlib.h>
 
int girar(int a, int b){
    if(abs(a-b)>10-abs(a-b)){
        return 10-abs(a-b);
    }else{
        return abs(a-b);
    }
}
 
int main(){
    int n, c=0;
    char original[1001], correcto[1001];
    scanf("%d", &n);
    scanf("%s", original);
    scanf("%s", correcto);
    for(int i=0;i<n;i++){
        c += girar(original[i]-'0', correcto[i]-'0');
    }
    printf("%d", c);
    return 0;
}