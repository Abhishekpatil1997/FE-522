#include "std_lib_facilities.h"
void productarys(int num, int a[],int b[],int c[])
{
    int i;
    for(i=0; i < num; i++)
    {
        c[i] = a[i] * b[i];
    }
}
int main()
{
    int i;
    int iary1[4] = {1,2,3,4};
    int iary2[4] = { 1,2,3,4};
    int iary3[4];

    productarys(4, iary1, iary2, iary3);
    for( i=0 ; i < 4; i++)
    {
        cout << "iary3["<< i <<"]:";
        cout <<iary3[i]<<endl;
    }


    keep_window_open();
    return 0;
}
