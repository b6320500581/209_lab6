#include<stdio.h>
int main()
{
    int n,i,j,r=0,t=0,k,p,a[10],b[10];
    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        a[i]=k%10;
        k=k/10;
        b[i]=p%10;
        p=p/10;
    }
    for(j=0;j<n;j++)
    {
        if(a[j]==b[j])
        {
            r++;
        }
        else
        {
            t++;
        }
    }
    printf("%d %d",r,t);
}
