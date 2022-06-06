#include<cstdio>
int main(){
    int n,a[101], m;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]<a[j]){
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}