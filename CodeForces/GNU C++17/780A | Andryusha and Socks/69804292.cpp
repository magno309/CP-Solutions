#include<cstdio>
 
int arr[100005];
 
int main(){
    int n, m=0, a=0;
    scanf("%d", &n);
    for(int i=0;i<n*2;i++){
        int c;
        scanf("%d", &c);
        if(arr[c]==0){
            arr[c]++;
            a++;
        }else{
            arr[c] = 0;
            if(a>m){
                m = a;
            }
            a--;
        }
    }
    printf("%d", m);
    return 0;
}