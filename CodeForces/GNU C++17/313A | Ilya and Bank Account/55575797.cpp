#include<cstdio>
#include<algorithm>
 
int main(){
 int n;
 scanf("%d", &n);
 if(n>0){
  printf("%d", n);
 }else{
  printf("%d", std::max(n / 10 , (n % 10) + (n / 100)*10));
 }
 return 0;
}
 