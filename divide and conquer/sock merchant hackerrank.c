#include<stdio.h>
int main()
{
    int n,i,j,count=0,pairs;
    scanf("%d",&n);
    int a[n],temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            } }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
                printf("%d\t", i);
                printf("\n");
            i++;
                printf("%d\t", i);
                printf("\nend");
        }

    }
    if(count%2==0)
    {
        pairs=count/2;
    }
    else{
     pairs=(count+1)/2;
    }
  //  printf("%d",count);
    return 0;

}
