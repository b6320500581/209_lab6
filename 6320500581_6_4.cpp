#include <stdio.h>
int main()
{
    int m,i,max,min,k,p;
    scanf("%d",&m);
    int a[m],b[2][m];
    for(i=0;i<m;i++)
    {
        a[i]=0;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&b[0][i],&b[1][i]);
        a[b[0][i]]++;
        a[b[1][i]]++;
    }
    max = a[0];
    for(i=0;i<m;i++)
    {
        if(a[i]>max)
        {
            k = i;
            max = a[i];
        }
    }
    if(a[b[0][k]-1]<a[b[0][k]-1])
        p = b[0][k]-1;
    else if(a[b[0][k]-1]>a[b[0][k]-1])
        p= b[1][k]-1;
    else
    {
        if(b[0][k]<b[1][k])
            p = b[0][k]-1;
        else
            p = b[1][k]-1;
    }
    printf("%d %d",k,p+3);
    return 0;
}
