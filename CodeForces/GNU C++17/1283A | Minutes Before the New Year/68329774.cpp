#include <cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int h,m,r;
        scanf("%d%d", &h,&m);
        r = ((23 - h) * 60) + (60 - m);
        printf("%d\n", r);
    }
    return 0;
}
 