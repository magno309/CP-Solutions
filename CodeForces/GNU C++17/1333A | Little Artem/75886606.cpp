#include<cstdio>
 
char s[105][105];
 
int main(){
    int t;
    scanf("%d", &t);
    for(int k=0;k<t;k++){
        int n,m,b=0,w=0;
        scanf("%d%d", &n,&m);
        b = ((n*m)/2)+1;
        w = (n*m)-b;
        int i=0,j=0;
        bool turn = true;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(i%2==0){
                    if(j%2==0){
                        if(b>0){
                            s[i][j] = 'B';
                            b--;
                        }else if(w>0){
                            s[i][j] = 'W';
                            w--;
                        }
                    }else{
                        if(w>0){
                            s[i][j] = 'W';
                            w--;
                        }else if(b>0){
                            s[i][j] = 'B';
                            b--;
                        }
                    }
                }else{
                    if(j%2==0){
                        if(w>0){
                            s[i][j] = 'W';
                            w--;
                        }else if(b>0){
                            s[i][j] = 'B';
                            b--;
                        }
                    }else{
                        if(b>0){
                            s[i][j] = 'B';
                            b--;
                        }else if(w>0){
                            s[i][j] = 'W';
                            w--;
                        }
                    }
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("%c", s[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}