#include<cstdio>
#include<string.h>
int cubeta[2];
int main(){
    char s[101];
    scanf("%s", s);
    int l=strlen(s);
    for(int i=0; i<l;i++){
        if(s[i]>=65 & s[i]<=90){
            cubeta[0]++;
        }else{
            cubeta[1]++;
        }
    }
    if(cubeta[0]>cubeta[1]){
        for(int i=0;i<l;i++){
            if(s[i]>=97 & s[i]<=122){
                s[i]-=32;
            }
        }
    }else{
        for(int i=0;i<l;i++){
            if(s[i]>=65 & s[i]<=90){
                s[i]+=32;
            }
        }
    }
    printf("%s", s);
    return 0;
}