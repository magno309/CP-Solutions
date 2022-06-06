#include<cstdio>
 
int main(){
    int n,x,y, arr[100005];
    scanf("%d%d%d", &n,&x,&y);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        bool b=true;
        for(int j=i+1;j<i+y+1;j++){
            if(j<n){
                if(arr[j]<arr[i]){
                    b = false;
                }
            }
        }
        for(int j=i-x;j<i;j++){
            if(j>=0){
                if(arr[j]<arr[i]){
                    b = false;
                }
            }
        }
        if(b){
            printf("%d", i+1);
            return 0;
        }
    }
    return 0;
}