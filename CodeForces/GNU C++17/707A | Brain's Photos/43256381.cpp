#include<cstdio>
using namespace std;
int main(){
    int n,m,t;
    bool color=false;
    scanf("%d%d", &n,&m);
    t =n*m;
    char s[2];
    for(int i=0;i<t;i++){
        //for(int j=0;j<m;j++){
            scanf(" %c", s);
            if(s[0] == 'C' or s[0] == 'M' or s[0] == 'Y'){
                color = true;
            }
        //}
    }
    if(color){
        printf("#Color");
    }else{
        printf("#Black&White");
    }
    return 0;
}