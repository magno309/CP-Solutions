#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, arr[105], cub[105] = {0};
        scanf("%d", &n);
        for(int i=0;i<n*2;i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0;i<n*2;i++){
            if(cub[arr[i]] == 0){
                printf("%d ", arr[i]);
                cub[arr[i]] = 1;
            }
        }
        printf("\n");
    }
    return 0;
}