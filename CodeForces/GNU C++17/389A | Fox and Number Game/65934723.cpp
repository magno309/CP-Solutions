#include<cstdio>
 
int arr[108], n;
 
bool iguales(){
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            return false;
        }
    }
    return true;
}
 
int suma(){
    int s = 0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}
 
int main(){
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    while(!iguales()){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]>arr[j]){
                    arr[i]-=arr[j];
                }
            }
        }   
    }
    printf("%d", suma());   
    return 0;
}