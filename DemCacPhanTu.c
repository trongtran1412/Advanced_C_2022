#include <stdio.h>
#include <stdint.h> 
void nhapMang(int **ptr,int *length)
{
    printf("Nhap kich thuoc mang: ");
    scanf("%d", length);
    *ptr = (int*)malloc(*length * sizeof(int));

    for(int i =0; i< *length; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d", (*ptr +i));
    }

}
void MangVuaNhap(int arr[], int length)
{
    printf("Mang vua nhap: ");
    for(int i = 0; i < length; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
void Swap(int arr[],int length) // Pointer to Pointer
{  
    for(int i = 0; i < length; i++)
    {
         for(int j=i+1;j<length;j++)
        {
                            
            if(arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }

        }
    }
}
void demPhanTu(int arr[],int length)
{   Swap(arr,length);
    for(int i=0;i<length;i++)
    {   int count = 1;
        int b = i;
            for(int j=i+1;j<length;j++)
            {   
                if(arr[j]==arr[i])
                {   
                    count++;
                    b++;
                }
            }
        printf("Phan tu: %d xuat hien: %d lan\n",arr[i],count);
        i=b;
    }
}

int main(int argc, char const *argv[])
{   
    int *arr;

    int length;

    nhapMang(&arr,&length);

    MangVuaNhap(arr,length);

    demPhanTu(arr,length);

    return 0;
}