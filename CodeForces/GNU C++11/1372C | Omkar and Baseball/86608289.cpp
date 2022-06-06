#include <cstdio>
 
 
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n, arr[200005], cub[200005] = {0}, c = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < n; i++){
            if(arr[i]-1 == i){
                cub[i] = 1;
            }
        }
        bool b = true;
        for (int i = 0; i < n; i++) {
            if(cub[i] == 0 and b){
                c++;
                b = false;
            }
            if(cub[i] == 1){
                b = true;
            }
        }
        if(c == 0){
            printf("0\n");
        }else if(c == 1){
            printf("1\n");
        }else{
            printf("2\n");
        }
    }
 
    return 0;
}