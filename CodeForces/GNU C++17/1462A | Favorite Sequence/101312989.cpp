#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, ini, fin;
        int arr[1005];
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        ini = 0;
        fin = n-1;
        while(ini<=fin){
            printf("%d ", arr[ini++]);
            if(ini < fin or n%2==0){
                printf("%d ", arr[fin--]);
            }
        }
        printf("\n");
    }
    return 0;
}