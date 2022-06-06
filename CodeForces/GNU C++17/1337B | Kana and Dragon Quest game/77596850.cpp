#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t-->0){;
        int x,n,m;
        scanf("%d%d%d", &x,&n,&m); //Vida, Void, Strikes
 
        /*if(x-(m*10)<0){
            printf("YES\n");
            return 0;
        }*/
 
        while(x>(x/2)+10 and n>0){
            x = (x/2)+10;
            n--;
        }
 
        while(m--){
            x-=10;
        }
 
        if(x>0)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}