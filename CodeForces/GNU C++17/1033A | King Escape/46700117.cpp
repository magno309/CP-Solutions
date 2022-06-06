#include<cstdio>
//int tablero[1001][1001];
/*void llenar_tablero(int n,int a, int b){
    int x=a;
    int y=b;
    for(int i=0;i<n;i++){
        tablero[i][b] = 1; //vertical
        tablero[a][i] = 1; //horizontal
        tablero[a+i][b+i] = 1;
        if(a-i>=0 and b-i>=0){
            tablero[a-i][b-i] = 1;
        }
        tablero[a+i][b-i] = 1;
    }
}*/
int main(){
    int n,qx,qy,kx,ky,cx,cy;
    scanf("%d", &n);
    scanf("%d%d", &qx,&qy);
    scanf("%d%d", &kx,&ky);
    scanf("%d%d", &cx,&cy);
    if(kx<qx and ky<qy and cx<qx and cy<qy){
        printf("YES");
    }else if(kx>qx and ky<qy and cx>qx and cy<qy){
        printf("YES");
    }else if(kx<qx and ky>qy and cx<qx and cy>qy){
        printf("YES");
    }else if(kx>qx and ky>qy and cx>qx and cy>qy){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}