#include "std_lib_facilities.h"

using namespace std;

double f(double x) {
    return (x-1)*3 -27;
}

#define ToleranceError 0.0001
using namespace std;

double expression_solution(double x) {
    return (x-1)*3 -27;
}

int secant(){
    float x0, x1, x2, tolerable_error,f0, f1, f2;
    int step = 1, N;

    /* Setting precision and writing floating point values in fixed-point notation. */
    cout<< setprecision(8)<< fixed;

    x0=1;
    x1=20;
    tolerable_error=0.01;

    /* Implementing Secant Method */

    cout<<"Secant Method"<< endl;

    while(fabs(f2)>=tolerable_error)
    {
        f0 = f(x0);
        f1 = f(x1);
        if(f0 == f1)
        {
            cout<<"Error.";
            return 1;
        }

        x2 = x1 - (x1 - x0) * f1/(f1-f0);
        f2 = f(x2);
        x0 = x1;
        f0 = f1;
        x1 = x2;
        f1 = f2;

        step = step + 1;

        if(step > N)
        {
            cout<<"Not Convergent.";
            exit(0);
        }
    };

    cout<<"Root of equation (Secant function): "<<x2;
    return x2;
}

void bisection(double lb, double ub) {
    if (expression_solution(lb) * expression_solution(ub) >= 0) {
        cout << "lower bound and upper bound assumed not equals root";
        return;
    }
    double result = lb;
    while ((ub-lb) >= ToleranceError) {
        // finds a point closer to root
        result = (lb+ub)/2;
        // Check if middle point is root
        if (expression_solution(result) == 0.0)
            break;
            // checks which side to move ahead to get nearer to zero
        else if (expression_solution(result)*expression_solution(lb) < 0)
            ub = result;
        else
            lb = result;
    }
    cout << "\nvalue of root (Bisection function): " << result;
}

int main() {
    secant();

    double lb =1, ub = 20;
    bisection(lb, ub);
    return 0;
}
