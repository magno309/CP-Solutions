#include<cstdio>
 
int mat[105][105];
 
int menor(int a, int b){
    return a<b?a:b;
}
 
int horizontal(){
    int c=0;
    bool pintar = true;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            if(mat[i][j]>0 and pintar){
                c++;
                pintar = false;
            }
        }
        pintar = true;
    }
    return c;
}
 
int vertical(){
    int c=0;
    bool pintar = true;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            if(mat[j][i]>0 and pintar){
                c++;
                pintar = false;
            }
        }
        pintar = true;
    }
    return c;
}
 
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d%d", &a,&b);
        mat[a][b]++;
    }
    printf("%d", menor(vertical(),horizontal()));
    return 0;
}