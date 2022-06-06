#include <cstdio>
 
 
int main() {
    int n, arr[105];
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    for(int i=0;i<m;i++){
        int x,y;
        //Cable, i - pajaro
        scanf("%d%d",&x,&y);
        arr[x-1] += y-1;
        arr[x+1] += arr[x]-y;
        arr[x] = 0;
    }
    for(int i=1;i<=n;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}