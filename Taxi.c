#include <stdio.h>
#include <stdint.h>

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
}