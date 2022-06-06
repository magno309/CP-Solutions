#include<cstdio>
#include<string.h>
int main(){
    char sum[101], aux[2];
    scanf("%s", sum);
    int l = strlen(sum);
    aux[0] = sum[0];
    for(int i=0; i<l; i++){
        for(int j=0;j<l-2; j+=2){
            if(sum[j+2]<sum[j]){
                aux[0] =sum[j+2];
                sum[j+2] = sum[j];
                sum[j] = aux[0];
            }
        }
    }
    printf("%s", sum);
    return 0;
}