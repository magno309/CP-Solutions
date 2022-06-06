#include<cstdio>
 
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int n;
        char s[105];
        bool b=false;
        scanf("%d", &n);
        scanf("%s", s);
        for(int i=0;i<n;i++){
            if(s[i] == '8'){
                if(n - i >= 11){
                    printf("YES\n");
                    b = true;
                    break;
                }else{
                    printf("NO\n");
                    b = true;
                    break;
                }
            }
        }
        if(!b){
            printf("NO\n");
        }
    }
    return 0;
}