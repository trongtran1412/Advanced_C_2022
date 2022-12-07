#include <stdio.h>
#include <stdint.h>
#include <string.h>
/*uint8_t mang[] = {1,2,3,4}; // MANG
                //0 1 2 3 
uint8_t temp; // 0->255
int8_t port; // -128 -> 127
uint8_t *ptr; //CON TRO LUU DIA CHI
int main(int argc, char const * agrv[])
{   ptr = mang;
    printf ("ptr = %d\n", *(ptr));
    printf ("ptr = %d\n", *(ptr+1));
    printf ("ptr = %d\n", *(ptr+2));
    printf ("ptr = %d\n", *(ptr+3));

    printf ("mang[2] = %d\n", *mang);
   return 0;
}*/ //MANG va BIEN


/*uint8_t PORTA = 0b0000000; // THAO TAC BIT
void SETBIT (uint8_t pin)
{
    PORTA |= (0x80>>pin);
}
void DecToBin (uint8_t port)
{
    printf("0b");
    for(uint8_t i =0; i<0; i++)
    {
        if((PORTA & 0x80) == 0){
            printf("0");
        }else{
            printf("1");
        };
        PORTA = PORTA<<1;

    }    
}

int main(int argc, char const * agrv[])
{
    DectoBin(PORTA);
    
    SETBIT(4);

    return 0;
}*/ //THAO TAC BIT

/*const int i = 10; // PHAN VUNG TEXT duoc luu vao TEXT (READ ONLY)

int main(int argc, char const *argv[])
{
   //i = i; = 2;
    printf ("i = %d", i);
    return 0;
}*/ 

/*int a = 10; // 

int c; // bien khong khoi tao duoc luu vao BSS

static int i = 10; // BIEN STATIC toan cuc duoc luu vao DATA (HAM` nao su dung cung dc)

void test () {
    a = a +1;
    static int b = 1; // bien static khong toan cuc couple duoc luu vao DATA ( Chi xai trong ham` test)
}

void tong(int d, int e)//input parameter // int a = 10; (0x01), int b = 15; (0x02)
{
    int f;//bien cuc bo //0x03
    f= d+e;
    printf("tong d va e: %d\n", f);
}*/

/*char name[20] = "Nguyen Van A";

void test()
{

}

int main(int argc, char const *argv[])
{   test ();
   //i = i; = 2;
    printf ("a = %d", a);

   // tong(10,15); // HAM NAY LA PHAN VUNG STACK DUNG DE READ AND WRITE
    uint16_t *ptr;

    ptr = malloc(8);

    ptr = (uint16_t*)malloc(4* sizeof(uint16_t));

    ptr[0] = 12;
    
    ptr[1] = 25;
    
    ptr[2] = 40;

    printf("ptr[1] = %d\n",ptr[1]);

    printf("dia chi array PTR[0] = %p\n",&(ptr[0]));

    printf("dia chi array PTR[2] = %p\n",&(ptr[1]));

    printf("dia chi array PTR[1] = %p\n",&(ptr[2]));

    return 0;

}*/

//stack pointer ()
//progam counter (bộ đếm của chương trình)


/*typedef enum{
    ThuHai,
    ThuBa,
    ThuTu,
    ThuNam = 10,
    ThuSau,
    ThuBay,
    ChuNhat
}Tuan; //Đơn giản hơn cho người dùng
typedef int TypeInt; //k    
int main(int argc, char const *argv[])
{
    
    Tuan tuan;
    tuan = ThuHai;
    printf("Tuan = %d\n",tuan);
    return 0;
}*/

/* Static
int *ptr;
void dem()
{   static int i = 0;
    ptr= &i;
    printf("dia chi: %p, i = %d\n",i);
    i++;
}

int main(int argc, char const *argv[])
{
    dem();
    dem();
    dem();

    return 0;
}*/
/*typedef struct 
{
    int chieudai;//Đỉa chỉ đầu tiên cũng là địa chỉ của của struct HinhChuNhat, giá trị sử dụng độc lập
    int chieurong;
}HinhChuNhat;

int main(int argc, char const *argv[])
{   //int *ptr;
    HinhChuNhat hcn;
    hcn.chieudai = 5;
    hcn.chieurong = 10;
    HinhChuNhat *ptr;
    ptr = &hcn;

    ptr->chieudai=20;  
    ptr->chieurong = 30;

    printf("HCN.chieudai: %d\n",hcn.chieudai);
    printf("HCN.chieurong: %d\n",hcn.chieurong);

    HinhChuNhat hinh[3];
    hinh[0].chieudai =5;
    hinh[0].chieurong = 5;

    hinh[0].chieudai = 6;
    hinh[0].chieurong = 6;

    HinhChuNhat test = {.chieudai = 10, .chieurong = 5};
    printf("test.chieudai = %d, test.chieurong = %d", test.chieudai,test.chieurong);
    printf("diachi hcn: %p\n",&hcn);
    printf("diachi hcn.chieudai: %p\n",&hcn.chieudai);
    printf("diachi hcn.chieurong: %p\n",&hcn.chieurong);
    return 0;

}*/

/*union HinhVuong // Tất cả sử dụng chung 1 địa chỉ của nhau (giá trị sau chèn lên giá trị trước)
{
    int chieudai;
    int chieurong;
};
int main(int argc, char const *argv[])
{   union HinhVuong hv;
    hv.chieudai = 30;
    hv.chieurong = 20;
    printf("diachi hv: %p\n",&hv);
    printf("diachi hv.chieudai: %p\n",&hv.chieudai);
    printf("diachi hv.chieurong: %p\n",&hv.chieurong);
    
    printf("chieudai %d, chieurong %d",hv.chieudai,hv.chieurong);

    return 0;

}*/

/*typedef union {
    int DuongBo;
    int DuongHangKhong;
    int DuongThuy;
}PhuongTienVanTai;

typedef union 
{   
    int xeDap;
    int diBo;    
    int xeMay;
    int xeDo;
}DuongBo;

typedef union 
{
    int mayBay;
    int du;
    int tructhang;
}DuongHangKhong;

typedef union 
{
    int tau;
    int cano;
}DuongThuy;

typedef union {
    DuongBo duongBo;
    DuongHangKhong duongHangKhong;
    DuongThuy duongThuy;
}PhuongTienVantai;
//Union được chọn 1 trong các danh sách trên
//Struct có thể chọn được nhiều hơn 1 trong các danh sách trên
int main(int argc, char const *argv[])
{
    PhuongTienVantai ptvt;
    ptvt.duongBo.diBo = 4;
    return 0;
}*/
/*struct typeData //=> Kích thước chung của tất cả member + thêm bộ nhớ đệm = 24 byte 
{ 
    uint64_t ten;//8 byte (Quet da het)
    uint32_t tuoi;//4>2 =>4 byte - 2 byte - byte
    uint16_t lop;//0 byte
    uint32_t mssv;//4 byte - 4 byte
};

union main //kích thước của member lớn nhất => 5 byte (Sử dụng địa chỉ chung nên khi địa chỉ thay đổi thì cả địa chỉ thay đổi hết)
{  
   uint8_t lop[2];
   uint8_t tuoi[5];
   uint8_t mssv[3]; 
};

int main(int argc, char const *argv[])
{
    union main data;
    printf("Size: %d\n", sizeof(data));
    return 0;
}*/
/*
void tong(int a,int b)// Con trỏ Hàm
{
    printf("Chuong trinh tinh tong!!!\n");
    printf("tong %d va %d = %d\n", a, b, a+b);
    
}
void hieu(int a,int b)
{
    printf("Chuong trinh tinh hieu!!!\n");
    printf("hieu %d va %d = %d\n", a, b, a-b);
    
}
void thuong(int a,int b)
{
    printf("Chuong trinh tinh thuong!!!\n");
    printf("Thuong %d va %d = %d\n", a, b,(double)a/b);
    
}
void tich(int a,int b)
{
    printf("Chuong trinh tinh tich!!!\n");
    printf("tich %d va %d = %d\n", a, b, a*b);
    tt(a,b);
}
void Tinhtoan(void(*tt)(int, int), int a,int b)
{
    printf("Chuon trinh tinh toan!!\n");

}
int main(int argc, char const *argv[])
{
    void(*ptr)(int,int);// Con trỏ hàm
    (int*)0x00; //Ép kiểu integer
    ptr = &hieu;

    ptr(10,20);

}*/
/*
void Taxi(float km)
{   float tongtien;
    if(km <= 1 )
    {   
        tongtien = km*5000;
    }
    else if (km<=30 &&km>1)
    {
        tongtien = 5000 +4000*(km-1);
    }
    else if (km>30)
    {
        tongtien = 5000 + 4000*(km-1) + (km-30)*3000;
    }
        printf("So Tien Taxi = %.f VND\n",tongtien);
}
int main(int argc, char const *argv[])
{
    Taxi(32);
    return 0;
}*/

typedef uint8_t bool;
#define true 1
#define false 0

/*bool isEqual(char s1[],char s2[])
{
    if (s1 == s2)
    {
        return true;
    }else{
        return false;
    }
}*/

/*int  strle(char arr[])
{   int i=0;
    while(arr[i] != '\0') {
      i++;
   }
   return i;
}
bool isEqual(char s1[],char s2[])
{
    if(strle(s1)==strle(s2))
    {
        if(int i=0;i<strle(s1);i++)
        {
            if(s1[i]!=s2[i])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
    
}
bool isEqual(char s1[],char s2[])
{
    int i = 0;
    while(s1[i] == s2[i])
    {   
        if(s1[i]==0){
            return true;
        }
        i++;
    }
    return false;
}
int main(int argc, char const *argv[])
{   
    char s1[] = "Pham B";
    char s2[] = "Pham B";
    for (int i = 0; i<15;i++)
    {
        printf("%x\n", s1[i]);
    }
    printf("Test: %d\n",isEqual(s1,s2));
    return 0;
}*/

//Pointer to Pointer
/*void swap (int *a, int *b)
{
    int temp;
    temp = *a; //*0x01 = 10
    *a = *b ;  //*0x02 = 
    *b = temp;
}*/

/*int *arr(){// Mảng bao gồm những địa chỉ liền kề với nhau
    static int a = 10;
    int *ptr = &a;
    return ptr;
}*/
/*
int *arr(){
    int *ptr;
    ptr = (int*)malloc(4*sizeof(int));
    for(int i = 0; i<4;i++)
    {
        ptr[i] = 2*i;
    }
    return ptr;
}

int main(int argc, char const *argv[])
{
    int a = 10, b =15;

    swap(&a,&b);
    int *ptr;
    ptr = arr();

    printf("ptr = %d\n", ptr);

    return 0;
}*/

//cho 1 mang ngau nhien
//vdụ int arr[7] = {1,4,6,4,4,1,6};
// 1 xuất hiện 2 lần
// 4 xuất hiện 3 lần
// 6 xuất hiện 2 lần
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
void GTXuatHienNN(int arr[], int length)
{   Swap(arr,length);
    int maxValue = 0;
    int xuathien=arr[0];
    int b = 0;
    int x = 0;
    printf("vi tri xuat hien: \n");
    for(int i=0;i<length;i++)
    {   int count = 1;
        b=i;
            for(int j=i+1;j<length;j++)
            {   
                if(arr[j]==arr[i])
                {   
                    count++;
                    b++;
                    if(count>maxValue)
                    {
                        maxValue=count;
                        xuathien=arr[i];
                    }
                }
            }
        i=b;
    }  
    printf("Phan tu xuat hien nhieu nhat: %d\n",xuathien);
}
/*int MaxElement(int a[], int n){
    int maxValue = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > maxValue){
            maxValue = a[i];
        }
    }
    return maxValue;
}
 
void GetMaxPosition(int arr[], int length){
    int maxValue = GTXuatHienNN(arr, length);
    printf("\nVi tri cua phan tu lon nhat: ");
    for(int i = 0; i < length; i++){
        if(arr[i] == maxValue){
            printf("%5d", i + 1);
        }
    }
}*/
int main(int argc, char const *argv[])
{   
    int *arr;

    int length;

    nhapMang(&arr,&length);

    MangVuaNhap(arr,length);

    GTXuatHienNN(arr,length);
    //GetMaxPosition(arr,length);
    demPhanTu(arr,length);

    GiamDan(arr,length);

    TangDan(arr,length);
    return 0;
} //Bài tập 

/*int main(int argc, char const *argv[])
{
    int a =10;
    int *intptr = &a;
    char *charptr;
    double *dptr;
    //0x0000005270bff9f4 // - 8 byte (2 số = 1 byte)
    // Kích thước của con trỏ phụ thuộc vào vi xử lý
    //0b10000000
    //0x80 //Hexa
    printf("dia chi: %p\n",intptr);
    return 0;
}*/
/*
#define MAX 10

#ifdef MAX
int a
#endif
#define SUM(a,b) (a+b)

int a = 10 ;
#define TYPE(type,name) TYPE A##_name;\
TYPE B##_name;\
TYPE C##_name;\

int tong(int a,int b){
    return a+b;
}
int main(int argc, char const *argv[])
{
    printf("MAX = %d\n",MAX);
    printf("Tong a va b = %d\n",SUM(10,15));

    printf("a= %d\n",a);
    printf("Tong a va b = %d\n",tong(5,10));
    return 0;
}*/

