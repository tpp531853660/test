#include<stdio.h>
#define N  100
int k=0;
int bigest(int a[],int length)
{
    int i;
    int j;
    int b[1000];
    if(length==0||a==NULL)
    {
        printf("��������Ϊ�գ�");
        return 0;
    }
    for(i=1;i<=length;i++)
    {
        b[k]=a[i-1];
        for(j=i;j<=length;j++)
        {    k++;
             b[k]=b[k-1]+a[j];
            
        }
    }
    printf("��������ĺ�Ϊ��\n");
    for(i=0;i<k-1;i++)
    {    
        printf("%d ",b[i]);
    }
    int max=b[0];
   for(i=0;i<k-1;i++)
    {
        if(b[i]>max)
        {max=b[i];
        }
    }
    return max;
    
}    
int main()
{    
    int i;
    int max;
    int length;
    int a[N];
    printf("����������Ԫ�ظ�����");
    scanf("%d",&length);
    printf("����������Ԫ�أ�\n");
    for(i=0;i<length;i++)
        scanf("%d",&a[i]);
    max=bigest(a,length);
          printf("\n����������Ϊ%d ",max);
    return 0;
}