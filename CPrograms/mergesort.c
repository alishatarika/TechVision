#include <stdio.h>
void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;                                //7 4 9 2 5 
                                            //7 4 9   2 5
                                            // 7  4 9   2 5          
    j = mid + 1;                            //  7  4  9  2  5  
    k = low;                                                 //k= 4 7 2 9 5 
                                                                 //k= 2 4 7 5 9 
                                                                 //k=  2 4 5 7 9 
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void mergeSort(int A[], int low, int high){
    int mid; 
    if(low<high){
        mid = (low + high) /2;
        mergeSort(A, low, mid);
        mergeSort(A, mid+1, high);
        merge(A, mid, low, high);
    }
}

    int main()
{
int A[30];
int n,i;
printf("Enter no of elements:");
scanf("%d",&n);
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
mergeSort(A,0,n-1);
printf("\nSorted array is :");
for(i=0;i<n;i++)
printf("%d ",A[i]);
return 0;
}
    
    