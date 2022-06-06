#include<cstdio>
#include<string.h>
 
int cub[5];
 
int main(){
    char s[101];
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        if(s[i] == 'h' and cub[0] == 0){
            cub[0] = 1;
        }
        if(s[i] == 'e' and cub[1] == 0 and cub[0] == 1){
            cub[1] = 1;
        }
        if(s[i] == 'l' and cub[2] < 2 and cub[1] == 1 and cub[0] == 1){
            cub[2]++;
        }
        if(s[i] == 'o' and cub[3] == 0 and cub[2] == 2 and cub[1] == 1 and cub[0] == 1){
            cub[3] = 1;
        }
    }
    /*for(int i=0;i<5;i++){
        printf("%d ", cub[i]);
    }*/
    //printf("\n");
    if(cub[0] == 1 and cub[1] == 1 and cub[2] == 2 and cub[3] == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}