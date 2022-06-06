#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, arr[100005];
        bool turno = true, flag = true;
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]>1){
                if(turno){
                    printf("First\n");
                    flag = false;
                    break;
                }else{
                    printf("Second\n");
                    flag = false;
                    break;
                }
            }
            turno = !turno;
        }
        if(flag){
            if(n%2==0)printf("Second\n");
            else printf("First\n");
        }
    }
    return 0;
}