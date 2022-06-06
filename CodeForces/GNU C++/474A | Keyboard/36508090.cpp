#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;
char sn[101];
int main(){
    /*char teclado[] = {'q','w','e','r','t','y','u','i','o','p',
                    'a','s','d','f','g','h','j','k','l',
                    ';','z','x','c','v','b','n','m',',','.','/'};*/
    string teclado = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char s[101], d[2];
    scanf("%s", d);
    scanf("%s", s);
    for(int i=0; i<teclado.size(); i++){
        for(int j=0; j<strlen(s); j++){
            if(d[0]=='R'){
                if(teclado[i]==s[j]){
                    sn[j] = teclado[i-1];
                }
            }
            if(d[0]=='L'){
                if(teclado[i]==s[j]){
                    sn[j] = teclado[i+1];
                }
            }
        }
    }
    for(int j=0; j<strlen(s); j++){
        printf("%c", sn[j]);
    }
    return 0;
}