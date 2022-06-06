#include<cstdio>
int f[1001], b[1001];
 
void ordenar(int t){
    int auxF;
    int auxB;
    for(int i=0;i<t;i++){
        for(int j=i;j<t-1;j++){
            if(f[i]>f[j+1]){
                auxF = f[j+1];
                auxB = b[j+1];
                f[j+1] = f[i];
                b[j+1] = b[i];
                f[i] = auxF;
                b[i] = auxB;
            }
        }
    }
}
 
int main(){
    int s,n;
    scanf("%d%d", &s,&n);
    for(int i=0;i<n;i++){
        scanf("%d%d", &f[i], &b[i]);
    }
    ordenar(n);
    for(int i=0;i<n;i++){
        //printf("%d %d\n", f[i], b[i]);
        if(s>f[i]){
            s+=b[i];
        }else{
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}