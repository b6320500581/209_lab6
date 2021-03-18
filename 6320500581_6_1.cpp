#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,p;
    scanf("%d",&n);
    char s[n][100],sum[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    for(k=0;k<n;k++)
    {
        for(j=k+1;j<n;j++)
        {
        if(strcmp(s[k],s[j])>0)
        {
            strcpy(sum,s[k]);
            strcpy(s[k],s[j]);
            strcpy(s[j],sum);
        }
        }
    }
    for(p=0;p<n;p++)
    {
       printf("%s\n",s[p]);
    }
    return 0;
}
