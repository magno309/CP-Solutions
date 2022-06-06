#include<stdio.h>
int main(){
    int x,h,m,c=0;
    scanf("%d", &x);
    scanf("%d%d", &h,&m);
    while(true){
        if(m==7 or m==17 or m==27 or m==37 or m==47 or m==57 or h==7 or h==17){
            break;
        }else{
            m-=x;
            c++;
            if(m<0){
                h--;
                m=60+m;
                if(h<0 and m==60){
                    h=24;
                }else if(h<0 and m<60){
                    h=23;
                }
            }
        }
        //printf("%d %d\n", h,m);
    }
 
    printf("%d", c);
    return 0;
}