#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, a[100005];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int l=0, r=n-1;
    for(int i=0; i<n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            l = i;
            break;
        }
    }
    for(int i=l; i<n-1; i++)
    {
        if(a[i] < a[i+1])
        {
            r = i;
            break;
        }
    }
    reverse(a+l, a+r+1);
    /*printf("%d %d\n", l+1, r+1);
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }*/
    for(int i=0; i<n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            printf("no");
            return 0;
        }
    }
    printf("yes\n%d %d", l+1, r+1);
    return 0;
}