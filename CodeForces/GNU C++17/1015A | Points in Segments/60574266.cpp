#include <cstdio>
 
int arr[105];
int main(){
 int n,m,c=0;
 scanf("%d%d", &n,&m);
 for(int i=0;i<n;i++){
  int l,r;
  scanf("%d%d", &l,&r);
  arr[l]++;
  arr[r+1]--;
 }
 for(int i=1;i<=m;i++){
  arr[i]+=arr[i-1];
 }
 int res[105];
 for(int i=1;i<=m;i++){
  if(arr[i] == 0){
   res[c++]=i;
  }
 }
 printf("%d\n", c);
 for(int i=0;i<c;i++){
  printf("%d ", res[i]);
 }
 return 0;
}