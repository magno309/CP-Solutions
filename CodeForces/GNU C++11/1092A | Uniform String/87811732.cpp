#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k, letra = 'a', cont=0;
        scanf("%d%d", &n,&k);
        char s[1005] = {0};
        for(int i=0;i<n;i++){
            s[i] = letra++;
            cont++;
            if(cont>=k){
                letra = 'a';
                cont = 0;
            }
        }
        printf("%s\n", s);
    }
    return 0;
}