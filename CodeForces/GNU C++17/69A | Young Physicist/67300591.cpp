#include <cstdio>
 
int main(){
    int n;
    int a,b,c;
    int x=0,y=0,z=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&c);
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0 and y==0 and z==0){
        printf("YES");
    }else{
        printf("NO");
    }
}