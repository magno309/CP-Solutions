#include <cstdio>
 
int n;
char s[105];
 
int main(){
    int c=0, u=0;
    scanf("%d", &n);
    scanf("%s", s);
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            c++;
        }else{
            u++;
        }
    }
    if(c==u){
        printf("2\n%c ", s[0]);
        for(int i=1;i<n;i++){
            printf("%c",s[i]);
        }
    }else{
        printf("1\n");
        printf("%s", s);
    }
    return 0;
}