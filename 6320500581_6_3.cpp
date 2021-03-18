#include<stdio.h>
int main()
{
    int a,b,i,j,r=0,max;
    scanf("%d %d\n",&a,&b);
    long int k[a],p[a];
    char x;
    long int y,m,n;
    for(i=0;i<a;i++)
    {
        k[i]=0;
        p[i]=0;
    }
    for(i=0;i<b;i++)
    {
        scanf("%c %ld %ld\n",&x,&m,&n);
        if(x=='U')
            k[m] = n;
        if(x=='P')
        {
            max = k[m];
            for(j=m;j<=n;j++)
            {
                if(k[j]>max)
                {
                    max = k[j];
                    max = p[r];
                }
            }
            r++;
        }
    }
    for(i=0;i<r;i++)
        printf("%ld\n",p[i]);
    return 0;
}
