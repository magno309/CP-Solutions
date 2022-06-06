#include <cstdio>
#include <string.h>
 
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char s[1005];
        scanf("%s", s);
        if(strlen(s)>=2){
            if(s[strlen(s) - 2] == 'p' and s[strlen(s) - 1] == 'o'){
                printf("FILIPINO\n");
            }
        }
        if(strlen(s)>=4){
            if((s[strlen(s) - 4] == 'd' or s[strlen(s) - 4] == 'm') and (s[strlen(s) - 3] == 'e' or s[strlen(s) - 3] == 'a') and s[strlen(s) - 2] == 's' and s[strlen(s) - 1] == 'u'){
                printf("JAPANESE\n");
            }
        }
        if(strlen(s)>=5){
            if(s[strlen(s) - 5] == 'm' and s[strlen(s) - 4] == 'n' and s[strlen(s) - 3] == 'i' and s[strlen(s) - 2] == 'd' and s[strlen(s) - 1] == 'a'){
                printf("KOREAN\n");
            }
        }
    }
    return 0;
}