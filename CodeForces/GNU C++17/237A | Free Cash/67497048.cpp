#include <cstdio>
 
int arr[100][100];
 
int main() {
    int n,r=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int h,m;
        scanf("%d%d", &h,&m);
        arr[h][m]++;
        if(arr[h][m]>r){
            r = arr[h][m];
        }
    }
    printf("%d", r);
    return 0;
}