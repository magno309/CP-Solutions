#include<cstdio>
#include<string.h>
 
int menor(int a, int b){
    return a<b?a:b;
}
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[106];
        scanf("%s", s);
        int u=0,c=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i] == '1') u++;
            else c++;
        }
        if(menor(u,c)%2==0){
            printf("NET\n");
        }else{
            printf("DA\n");
        }
    }
    return 0;
}