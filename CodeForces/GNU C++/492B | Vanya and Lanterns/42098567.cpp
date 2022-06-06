#include<stdio.h>
 
int main(){
    int n,l,aux, lamp[1500];
    double d, m=0,r;
    scanf("%d%d", &n,&l);
    for(int i=0;i<n;i++){
        scanf("%d", &lamp[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            if(lamp[i]>lamp[j+1]){
                aux = lamp[j+1];
                lamp[j+1] = lamp[i];
                lamp[i] = aux;
            }
        }
    }
    //Obtengo distancia mayor entre lamparas
    for(int i=0;i<n-1;i++){
        d = lamp[i+1]-lamp[i];
        if(d>m){
            m=d;
        }
    }
    /*for(int i=0;i<n;i++){
        printf("%d ", lamp[i]);
    }
    printf("\n");
    printf("Lamp[0]: %d\n", lamp[0]);
    printf("Lamp[n-1]: %d\n", lamp[n-1]);
    printf("l - lamp[n-1]: %d\n", l - lamp[n-1]);
    printf("m: %lf\n", m);*/
    //Comparar
    if(lamp[0]==0 or lamp[n-1]==l){
        if(lamp[0]!=0){
            r = lamp[0];
            printf("%.8lf", r);
            return 0;
        }
        if(lamp[n-1]!=l){
            r = l-lamp[n-1];
            printf("%.8lf", r);
            return 0;
        }
        if(lamp[0]==0){
            if(l-lamp[n-1]>m){
                r = l-lamp[n-1];
                printf("%.8lf", r);
                return 0;
            }else{
                printf("%.8lf", m/2);
                return 0;
            }
        }
        if(l-lamp[n-1]==l){
            if(lamp[0]>m){
                printf("%.8lf", m/2);
            }else{
                r = lamp[0];
                printf("%.8lf", r);
            }
        }
    }else{
        if(m/2>lamp[0] and m/2>l-lamp[n-1]){
            printf("%.8lf", m/2);
        }
        else{
            if(l-lamp[n-1]>lamp[0]){
                r = l-lamp[n-1];
                printf("%.8lf", r);
            }else{
                r = lamp[0];
                printf("%.8lf", r);
            }
        }
    }
    return 0;
}