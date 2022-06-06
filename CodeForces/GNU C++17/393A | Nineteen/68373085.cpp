#include <cstdio>
#include <string.h>
 
char s[105];
 
int menor(int a, int b){
    return (a<b)?a:b;
}
 
int main() {
    int n=0,i=0,e=0,t=0;
    scanf("%s",s);
    for(int j=0;j<strlen(s);j++){
        if(s[j] == 'n'){n++;}
        if(s[j] == 'i'){i++;}
        if(s[j] == 'e'){e++;}
        if(s[j] == 't'){t++;}
    }
    printf("%d", menor( e/3, menor( i, menor( e/3 ,menor( (n-1)/2,t)))));
    return 0;
}