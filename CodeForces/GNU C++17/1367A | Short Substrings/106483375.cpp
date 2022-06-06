#include <cstdio>
#include <string.h>
 
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        char s[105];
        scanf("%s", s);
        for(int i=0;i<strlen(s);i+=2){
            printf("%c", s[i]);
        }
        printf("%c\n", s[strlen(s)-1]);
    }
    return 0;
}