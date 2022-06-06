#include<cstdio>
 
int main(){
    int n, arr[100005], s=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i==0){
            s+= arr[i]+1;
        }else{
            if(arr[i-1]<=arr[i]){
                s++;
                s+=(arr[i]-arr[i-1])+1;
            }else{
                s+=arr[i-1]-arr[i];
                s+=2;
            }
        }
    }
    printf("%d", s);
    return 0;
}