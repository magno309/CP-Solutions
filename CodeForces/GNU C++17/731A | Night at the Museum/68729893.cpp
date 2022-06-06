#include<cstdio>
#include<string.h>
 
int menor(int a, int b){
    return a<b?a:b;
}
 
int abs(int a){
    return a<=0?a*-1:a;
}
 
char s[105];
 
int main(){
    int pos='a', r=0;
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        r+=menor(abs(pos - s[i]), 26 - abs(pos - s[i]));
        pos = s[i];
    }
    printf("%d", r);
    return 0;
}