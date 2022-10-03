#include<stdio.h>
void bubblesort(int *b,int n)
{
    int i,j,temp,c;
    for(i=0;i<n-1;i++)
    {
        c=0;
        for(j=0;j<n-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=b[j];
                c++;
            }
        }
        if(c==0)
        {
            return;
        }
    }
}
void insertionsort(int *b,int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k=b[i];
        j=i-1;
        while(j>=0 && b[j]>k)
        {
            b[j+1]=b[j];
            j--;
        }
        b[j+1]=k;
    }
}
int main()
{
    int n,i,a[100],ch,c=0,x,y;
    char choice,select;
    printf("This is ");
    do
    {   x:
        if(c==0)
        {
            printf("Enter the no of elements\n");
            scanf("%d",&n);
            printf("Enter the elements\n");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            c++;
        }
        else
        {
            printf("Do you want to use previous array?\n");
            printf("Enter 'Y' or 'y' for yes and any other key for no\n");
            scanf("%d",&select);
            if(select=='Y'||select=='y')
            {
                c=0;
                goto x;
            }
            else
            {
                c++;
            }
        }
        printf("Enter\n1.Bubble sort\n2.Insertion sort\n3.Selection sort\n4.Quick sort\n");
        printf("5.Merge sort\n6.Count sort\n7.Heap sort\n8.Radix sort\n9.Shell sort\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Bubble sort\n");
                    bubblesort(a,n);
               break;
            case 2: printf("Insertion sort\n");
                    insertionsort(a,n);
               break;
            default : printf("Wrong choice\n");
                      goto y;
        }
        printf("Sorted list of array\n");
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]," ");
        }
        y:
        printf("\n\nDo you want to countinue?\n");
        printf("Enter 'Y' or 'y' for yes and any other key for no\n");
        scanf("%c",&choice);
    }while(choice=='Y'||choice=='y');
    printf("Thanking for using \n");
    return 0;
}