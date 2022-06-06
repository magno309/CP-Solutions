#include<stdio.h>
 long long recorrido(int casas, int posi, int posf){
     if(posi==posf) return 0;
     if(posi<posf){
        return posf - posi;
     }else{
        return casas-posi + posf;
     }
 }
 
int main(){
    int n, m, a[100002] = {1};
    long long t=0;
    scanf("%d%d", &n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<m;i++){
       t += recorrido(n, a[i], a[i+1]);
    }
    printf("%I64d", t);
    return 0;
}