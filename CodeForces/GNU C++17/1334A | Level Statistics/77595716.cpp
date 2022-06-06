#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d", &n);
        int a,b;
        int antA=-1, antB=-1;
        bool flag = true;
        for(int j=0;j<n;j++){
            //printf("%d\n", flag);
            scanf("%d%d", &a,&b);
            if(b>a){
                flag = false;
            }
            if(a == antA and b>antB){
                flag = false;
            }
            if(a < antA or b < antB){
                flag = false;
            }
            if(b-antB > a-antA){
                flag = false;
            }
            antA = a;
            antB = b;
        }
        if(flag)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}