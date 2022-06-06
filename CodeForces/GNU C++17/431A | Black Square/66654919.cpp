#include<cstdio>
#include<string.h>
 
int main(){
    int cal[5], sum=0;
    char s[100005];
    for(int i=0;i<4;i++){
        scanf("%d", &cal[i]);
    }
    scanf("%s", s);
    for(int i=0;i<strlen(s);i++){
        sum += cal[(s[i] - '0') - 1];
    }
    printf("%d", sum);
    return 0;
}