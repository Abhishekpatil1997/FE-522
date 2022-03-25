#include "std_lib_facilities.h"
bool isExactPowerOfTwo(int num){
    if (num == 0)
        return false;
    while (num != 1)
    {
        if (num%2 != 0)
            return 0;
        num = num/2;
    }
    return true;
}

int main()
{
    int num = 0;
    cout << "Input an Integer: \n";
    cin >> num;
    if (isExactPowerOfTwo(num)) {
        cout << " The input is indeed a power of 2!\n";
    }
    else{
     cout << "The input is not a power of 2! \n";
        }
    keep_window_open();
    return 0;
}
