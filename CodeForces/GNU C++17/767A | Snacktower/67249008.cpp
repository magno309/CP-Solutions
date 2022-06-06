#include <cstdio>
 
int arr[100005];
 
int main(){
    int n;
    scanf("%d", &n);
    int s = n;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i] == s){
            printf("%d ", s--);
            for(int j=0;j<i;j++){
                //printf("%d\n", j);
                if(arr[j] == s){
                    printf("%d ", s--);
                    j=-1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}