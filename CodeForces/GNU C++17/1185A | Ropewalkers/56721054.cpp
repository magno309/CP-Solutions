#include<cstdio>
#include<algorithm>
 
using namespace std;
 
int main(){
    int arr[5], d;
    scanf("%d%d%d%d", &arr[0], &arr[1], &arr[2], &d);
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            if(arr[i]>arr[j]){
                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }
        }
    }
    /*for(int i=0;i<3;i++){
        printf("%d ",arr[i]);
    }*/
    printf("%d", max(0, d - (arr[1] - arr[0])) + max(0, d - (arr[2] - arr[1])));
    return 0;
}