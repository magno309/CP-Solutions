#include<cstdio>
int main(){
    int m[5][5], c=0, x, y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d", &m[i][j]);
            if(m[i][j] == 1){
                x=i;
                y=j;
            }
        }
    }
    while(x!=2){
        if(x>2){
            x-=1;
            c++;
        }
        if(x<2){
            x+=1;
            c++;
        }
    }
    while(y!=2){
        if(y>2){
            y-=1;
            c++;
        }
        if(y<2){
            y+=1;
            c++;
        }
    }
    //printf("%d %d", x, y);
    printf("%d", c);
    return 0;
}