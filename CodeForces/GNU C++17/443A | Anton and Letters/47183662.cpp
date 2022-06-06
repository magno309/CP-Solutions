#include<cstdio>
#include<string.h>
 
int cub[1001];
 
int main(){
    char s[1001];
    int ini = 'a';
    int fin = 'z';
    int c=0;
    fgets(s, 1001, stdin);
    for(int i=0;i<strlen(s);i++){
        if(s[i] >= ini and s[i] <= fin){
            if(cub[s[i]] != 1){
                cub[s[i]]++;;
            }
        }
    }
    for(int i=ini;i<fin+1;i++){
        if(cub[i] == 1){
            c++;
        }
        //printf("%d ", cub[i]);
    }
    printf("%d", c);
}