#include<cstdio>
int main(){
    int n,a,b,d,c=0,jugo=0;
    scanf("%d%d%d", &n, &b, &d);
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        if(a<=b){
            jugo+=a;
            if(jugo>d){
                jugo = 0;
                c++;
            }
        }
    }
    printf("%d", c);
    return 0;
}