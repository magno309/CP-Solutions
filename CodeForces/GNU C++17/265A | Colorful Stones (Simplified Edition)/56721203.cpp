#include<cstdio>
#include<string.h>
 
int main(){
    char s[60];
    char t[60];
    int c=0;
    scanf("%s", s);
    scanf("%s", t);
    for(int i=0;i<strlen(t);i++){
        if(s[c]==t[i]){
            c++;
        }
    }
    printf("%d", c+1);
    return 0;
}