#include <math.h>

bool isPrime(long long n){
    if (n<2 || (n%2==0 && n>2)) return false;
    else {
        bool boo = true;
        long long m = sqrt(n);
        for(long long i = 3;i <= m; i += 2){
            boo=(n%i!=0);
            if (!boo) break;
        }
        return boo;
    }
}

long long UCLN(long long a, long long b){
    return (b == 0 ? a : UCLN(a, b));
}

long long BCNN(long long a, long long b){
    return a / UCLN(a,b) * b;
}

bool isInt(double x){
    return x == (long long)x;
}

bool isPSqr(long long x){
    return isInt(sqrt(x));
}

bool isFibb(long long x){
    long long n = x*x*5;
    return (isPSqr(n+4) || isPSqr(n-4));
}
