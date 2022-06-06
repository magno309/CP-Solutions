#include <cstdio>
#include <string.h>
char s[210];
 
int main(){
    int b=1;
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        //printf("%d\n", i);
        if(s[i] == 'W' and s[i+1] == 'U' and s[i+2] == 'B'){
            i+=2;
            if(!b){
                printf(" ");
            }
        }else{
            b = 0;
            printf("%c", s[i]);
        }
    }
    return 0;
}
 