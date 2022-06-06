#include <cstdio>
int arr[5005];
int mark[5005];
 
int menor(int a, int b){
    return (a<b)?a:b;
}
 
int main(){
    int n,p=0,m=0,PE=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 1){
            p++;
        }else if(arr[i] == 2){
            m++;
        }else{
            PE++;
        }
    }
    int e = menor(p, menor(m, PE));
    printf("%d\n", e);
    int l=1, c=0;
    int r[5];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j] == l and mark[j] == 0){
                r[c++] = j+1;
                mark[j] = 1;
                l++;
            }
            if(l > 3){
                l=1;
                if(c>=2){
                    for(int k=0;k<3;k++){
                        printf("%d ", r[k]);
                    }
                    c=0;
                }
                printf("\n");
                //break;
            }
        }
    }
}
 