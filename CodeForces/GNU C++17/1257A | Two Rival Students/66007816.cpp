#include <cstdio>
#include <math.h>
#include <algorithm> 
 
int main() {
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int n, x, a, b;
        scanf("%d%d%d%d", &n,&x,&a,&b);
        printf("%d\n", std::min(n-1, abs(a-b)+x));
    }
    return 0;
}