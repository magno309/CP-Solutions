#include <cstdio>
#include <stdlib.h>
 
int mayor(int a,int b){
    return (a>b)?a:b;
}
 
int menor(int a, int b){
    return (a<b)?a:b;
}
 
int main(){
    int n, arr[100005];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i==0){
            printf("%d %d\n", abs(arr[i] - arr[i+1]), abs(arr[i] - arr[n-1]));
        }else if(i==n-1){
            printf("%d %d", arr[i] - arr[i-1], arr[i] - arr[0]);
        }else{
            printf("%d %d\n", menor(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1])), mayor( abs(arr[i] - arr[0]), abs(arr[i] - arr[n-1]) ));
        }
    }
    return 0;
}