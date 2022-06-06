#include<cstdio>
int m[101];
 
void ordenar(int n){
    int aux;
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            if(m[i]<m[j+1]){//Asscendente
                aux = m[j+1];
                m[j+1] = m[i];
                m[i] = aux;
            }
        }
    }
}
 
int tomar(int n, int mt){
    int c=0, s=0;
    for(int i=0;i<n;i++){
        s+=m[i];
        c++;
        if(s>mt){
            return c;
        }
    }
}
 
int main(){
    int n, sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &m[i]);
    }
    ordenar(n);
    for(int i=0;i<n;i++){
        sum+=m[i];
    }
    printf("%d",tomar(n,sum/2));
 
    /*for(int i=0;i<n;i++){
        printf("%d ", m[i]);
    }*/
    return 0;
}