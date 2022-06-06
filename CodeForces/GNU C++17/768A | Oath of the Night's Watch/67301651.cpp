#include <cstdio>
 
int arr[100005];
 
void ordenar(int n){ //Inserttion sort
    int k,j;
    for(int i=1;i<n;i++){
        k = arr[i];
        j = i - 1;
        while(j>=0 && arr[j] > k){
            arr[j + 1] = arr[j];
            j-=1;
        }
        arr[j+1] = k;
    }
}
 
int main(){
    int n,c=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    ordenar(n);
    for(int i=1;i<n-1;i++){
        if(arr[0]<arr[i]&&arr[n-1]>arr[i]){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}