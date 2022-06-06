#include<cstdio>
 
int main(){
    double h,l;
    scanf("%lf%lf", &h,&l);
    printf("%.13lf", (l*l-h*h)/(2*h));
}