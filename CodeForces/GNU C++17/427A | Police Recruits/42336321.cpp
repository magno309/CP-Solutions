#include<stdio.h>
 
int main(){
    int n, e[100001], crimenes=0, polis=0;
    bool p=false;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &e[i]);
    }
    for(int i=0;i<n;i++){
        if(e[i]>0){
            p=true;
            polis+=e[i];
        }
        if(e[i]==-1){
            crimenes++;
            if(p){
                crimenes--;
                polis--;
                if(polis==0){
                    p=false;
                }
            }
        }
    }
    printf("%d", crimenes);
    return 0;
}