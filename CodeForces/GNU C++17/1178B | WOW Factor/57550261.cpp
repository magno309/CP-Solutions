#include<cstdio>
#include<string.h>
 
int main(){
    char s[1000005];
    long long w=0, o=0, c=0;
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='o'){
            o+=w;
        }
        else if(i > 0 and s[i-1] == 'v'){
            w++;
            c+=o;
        }
    }
    printf("%lld", c);
    return 0;
}