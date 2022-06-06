#include<stdio.h>
int main(){
    int s[5],cont=0, aux;
    for(int i=0; i<4;i++){
        scanf("%d", &s[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=i;j<3;j++){
            if(s[i]>s[j+1]){
                aux = s[j+1];
                s[j+1] = s[i];
                s[i] = aux;
            }
        }
    }
    for(int i=0; i<3;i++){
        if(s[i]==s[i+1]){
            cont++;
        }
    }
    printf("%d", cont);
    return 0;
}