#include<cstdio>
#include<string.h>
int main(){
    char s[101];
    scanf("%s", s);
    for(int i = 0; i<strlen(s); i++){
        if(s[i] == 72 | s[i] == 81 | s[i] == 57 /*| s[0] == 43*/){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}