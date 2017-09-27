#include <math.h>

using namespace std;

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

string operator+(string a, string b) {
    string ans = "";
    while (a.length() < b.length()) a = "0" + a;
    while (b.length() < a.length()) b = "0" + b;
    int carry = 0, rem;
    for (int i = a.length() - 1; i >= 0; --i) {
        rem = (a[i] - '0' + b[i] - '0') + carry;
        ans = (char(rem % 10 + '0')) + ans;
        carry = rem / 10;
    }
    if (carry > 0) ans = "1" + ans;
    return ans;
}

string operator-(string a, string b) {
    string ans = "";
    bool neg = 0;
    while (a.length() < b.length()) a = "0" + a;
    while (b.length() < a.length()) b = "0" + b;
    if (a < b) swap(a, b), neg = 1;
    int carry = 0, rem;
    for (int i = a.length() - 1; i >= 0; --i) {
        rem = a[i] - b[i] - carry;
        carry = 0;
        while (rem < 0) {
            ++ carry;
            rem += 10;
        }
        ans = (char(rem % 10 + '0')) + ans;
    }
    while (ans.length() > 1 && ans[0] == '0') ans.erase(0, 1);
    if (neg) ans = "-" + ans;
    return ans;
}

string operator* (string a, string b) {
    long long sav[2050];
    for (int i = 0; i < 2050; i++)
        sav[i] = 0;
    string ans = "";
    int carry = 0, rem;
    a = "0" + a;
    b = "0" + b;
    for (int i = a.length() - 1; i >= 0; --i)
        for (int j = b.length() - 1; j >= 0; -- j)
            sav[i + j] += ((a[i] - '0') * (b[j] - '0'));
    for (int i = a.length() + b.length() - 2; i >= 0; --i) {
        rem = sav[i] + carry;
        carry = rem / 10;
        ans = char(rem % 10 + '0') + ans;
    }
    while (ans.length() > 1 && ans[0] == '0') ans.erase(0, 1);
    return ans;
}
