#include<cstdio>
int a[1001], b[1001];
 
int recorrido(int e){
    int p=0, t=0;
    for(int i=0;i<e;i++){
        p-=a[i];
        p+=b[i];
        if(p>t){
            t = p;
        }
    }
    return t;
}
 
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d%d", &a[i], &b[i]);
    }
    printf("%d",recorrido(n));
    return 0;
}