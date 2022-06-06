#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,m;
        int a[1005] = {0}, b, c, r;
        bool flag = true;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++){
            scanf("%d", &c);
            a[c] = 1;
        }
        for(int i=0;i<m;i++){
            scanf("%d", &b);
            if(a[b] == 1 and flag){
                r = b;
                flag = false;
            }
        }
        if(flag){
            printf("NO\n");
        }else{
            printf("YES\n1 %d\n", r);
        }
    }
    return 0;
}