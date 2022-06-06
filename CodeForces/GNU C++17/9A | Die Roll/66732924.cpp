#include <cstdio>
 
int mayor(int a, int b){
    return (a>b)?a:b;
}
 
int main() {
    int y, w;
    scanf("%d%d", &y, &w);
    if(mayor(y,w) == 6){
        printf("1/6");
    }else if(mayor(y,w) == 5){
        printf("1/3");
    }else if(mayor(y,w) == 4){
        printf("1/2");
    }else if(mayor(y,w) == 3){
        printf("2/3");
    }else if(mayor(y,w) == 2){
        printf("5/6");
    }else if(mayor(y,w) == 1){
        printf("1/1");
    }
    return 0;
}