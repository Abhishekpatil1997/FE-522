#include "std_lib_facilities.h"

/* Program structure 

The prgram should ask user input of an integer number n:

if the number n > 10, print out an error message: The n value is too large.

if the number n < 1, print out an error message: The n value should take larger value.

if the number 0 <= n <= 10, print out n rows of "#", where each row has exactly n "#".


Example0:

Please provide an integer number: -1
The n value is too large.

Example1:
Please provide an integer number: -1
The n value should take larger value.

Example2:
Please provide an integer number: 3
#
##
###

Example3:
Please provide an integer number: 5
#
##
###
####
#####
*/


int main()
{
	/*.........Write your code between dot lines..............*/
    cout << "Please provide an integer number:";
    int n;
    cin >> n;
    if (n > 10) {
        cout << "The n value is too large.\n";
    }
    else if (n < 1) {
        cout << "The n value should take larger value.\n";
    }
    else if (0 <= n <= 10) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++)
            {
                cout << '#';}

            cout << endl;}
    }

	/*........................................................*/
    keep_window_open();
    return 0;
}
