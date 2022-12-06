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

void TangDan(int arr[], int length) //Trái <nhỏ hơn> phải
{   printf("Tang Dan:");
    for(int i =0; i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        printf(" %d",arr[i]);
    }
    printf("\n");
}
void GiamDan(int arr[], int length) //
{   printf("Giam Dan:");
    for(int i =0; i<length;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        printf(" %d",arr[i]);
        
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int *arr;

    int length;

    nhapMang(&arr,&length);

    MangVuaNhap(arr,length);

    GiamDan(arr,length);

    TangDan(arr,length);
    return 0;
}
