#include<cstdio>
int primos[3001], cub[3001], in;
 
void criba(){
    for(int i=2;i<=3000;i++){
        if(cub[i] == 0){
            primos[in++] = i;
        }
        for(int j=i*i; j<=3000; j+=i){
            cub[j]=1;
        }
    }
}
 
int main(){
    criba();
    /*for(int i=0;i<10;i++){
        printf("%d ", primos[i]);
    }*/
    int n, c=0;
    scanf("%d", &n);
    for(int i=2;i<n+1;i++){
        int aux = 0;
        for(int j=0;j<in;j++){//Mal
            //printf("entro\n");
            if(i%primos[j]==0){
                aux++;
            }
        }
        //printf("%d %d\n", i, aux);
        if(aux == 2){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}