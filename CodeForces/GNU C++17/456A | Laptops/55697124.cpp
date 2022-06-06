#include<cstdio>
 
int main(){
    int n, a[100005], b[100005];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d%d", &a[i], &b[i]);
        if(a[i] != b[i]){
            printf("Happy Alex");
            return 0;
        }
    }
    printf("Poor Alex");
    return 0;
}