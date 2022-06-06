#include<cstdio>
 
int cub[105];
 
int main(){
    int n, arr[105], t=0, c=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        t+=arr[i];
    }
    int p = arr[0];
    cub[0] = 1;
    t-=arr[0];
    c++;
    int i=1;
    while(p<=t and i<n){
        if(arr[0]>=arr[i]*2){
            cub[i] = 1;
            p+=arr[i];
            t-=arr[i];
            c++;
        }
        i++;
    }
    if(p<t or p==t){
        printf("0");
    }else{
        printf("%d\n",c);
        for(int i=0;i<n;i++){
            if(cub[i]==1){
                printf("%d ", i+1);
            }
        }
    }
    return 0;
}