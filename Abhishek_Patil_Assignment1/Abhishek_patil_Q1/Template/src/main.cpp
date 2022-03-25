#include "std_lib_facilities.h"
std::default_random_engine generator;
std::normal_distribution<double> distribution(5.0,2.0);

double option_price_call_european_simulate(const double &S, // current value of stock
                                           const double &K, // exercise price
                                           const double &r, // interest rate
                                           const double &sigma, // volatility
                                           const double &time, // time to final date
                                           const int &no_sims) { //number of simulations
    double R = (r - 0.5*pow(sigma,2))*time;
    double SD = sigma*sqrt(time);
    double sum_payoffs = 0.0;
    for (int n=1; n<=no_sims; n++) {
        double tmp= distribution(generator);;
        double S_T = S*exp(R + SD*tmp);
        sum_payoffs += max(0.0, S_T-K);
    };
    return exp( -r*time )*(sum_payoffs/double(no_sims));
//return sum_payoffs;
};

int main(int argc, char **argv)
{
    double res1=option_price_call_european_simulate(100,95,0.02,0.05,10,1000);
    double res2=option_price_call_european_simulate(100,100,0.02,0.05,10,1000);
    double res3=option_price_call_european_simulate(100,105,0.02,0.05,10,1000);
//    double res = res1 + res3 - 2 * res2;
    printf("%.2f, %.2f, %.2f, %.2f\n",res1, res2, res3, res1 + res3 - 2 * res2);
    return 0;
}

