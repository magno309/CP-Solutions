#include<cstdio>
 
int arr[5];
 
int mayor(int a, int b){
    return a>b?a:b;
}
 
bool verifica(int a, int b, int c){
    if(arr[0] == mayor(a,b) and arr[1] == mayor(a,c) and arr[2] == mayor(b,c)) return true;
    else return false;
}
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        for(int i=0;i<3;i++){
            scanf("%d", &arr[i]);
        }
        bool flag = true;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(verifica(arr[i],arr[j],arr[k]) and flag){
                        printf("YES\n");
                        printf("%d %d %d\n",arr[i],arr[j],arr[k]);
                        flag = false;
                    }
                }
            }
        }
        if(flag)printf("NO\n");
    }
    return 0;
}