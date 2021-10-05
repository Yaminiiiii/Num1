#include <iostream>
#include <math.h>
#include<string>
using namespace std;
int main()
{
    double a, sum = 0, c[100], d[100]; string b;
    const double Pi = 3.14159265;
    int n, i = 0; cout << "How many nammbers? = "; cin >> n;
    cout << "Enter "<<n<<" Numbers: ";
    while (i<n) {
        cin >> a;
        c[i] = a;
        i++;
    }
    cout << "Enter your choice (+ / - * rad sin cos tan cot fact): ";
    cin >> b;
    if (b == "+") {
        i = 0;
        while (i < n) {
            sum += c[i];
            i++;
        }
        cout << "Result: " << sum;
    }
    if (b == "-") {
        i = 0;
        while (i < n) {
            sum -= c[i];
            i++;
        }
        cout << "Result: " << sum;
    }
    float mul = 1;
    if (b == "*") {
        i = 0;
        while (i < n) {
            mul *= c[i];
            i++;
        }
        cout << "Result: " << mul;
    }
    if (b == "/")
    {
        i = 0;
        if (c[i]!= 0) {
            while (i < n) {
                mul /= c[i];
                i++;
            }
            cout << "Result: " << mul;
        }
        else
            cout << "Error!";
    }
    if (b == "rad") {
        i = 0;
        while (i < n) {
            if (c[i] > 0) {
                d[i] = sqrt(c[i]);
                i++;
            }
            else
                cout << "Error!";
        }
        cout << "Result: ";
        i = 0;
        while (i < n) {
            cout << d[i] << '\t';
            i++;
        }
    }
    if (b == "cos")
    {
        i = 0;
        while (i < n) {
            d[i] = cos((c[i] * Pi) / 180);
            i++;
        }
        cout << "Result: ";
            i = 0;
            while (i < n) {
                cout << d[i] << '\t';
                i++;
            }
    }
    if (b == "sin")
    {
            i = 0;
            while (i < n) {
                d[i] = sin((c[i] * Pi) / 180);
                i++;
            }
            cout << "Result: ";
            i = 0;
            while (i < n) {
                cout << d[i] << '\t';
                i++;
            }
            i++;
    }
    if (b == "tan")
    {
        i = 0;
            while (i < n) {
                d[i] = tan((c[i] * Pi) / 180.0);
                i++;
            }
            cout << "Result: ";
            i = 0;
            while (i < n) {
                cout << d[i] << '\t';
                i++;
            }
    }
    if (b == "cot") {
        i = 0;
        if (sin(c[i]) > 0) {
            while (i < n) {
                d[i] = tan((c[i] * Pi) / 180);
                i++;
            }
            cout << "Result: ";
            i = 0;
            while (i < n) {
                cout << 1 / d[i] << '\t';
                i++;
            }
        }
        cout << "Error!";
    }
    if (b == "fact")
    {
        i = 0;
        int fact = 1;
        int j = 1;
        while (i < n) {
            while (j <= c[i]) {
                fact *= j;
                j++;
           }
            d[i] = fact;
            i++;
        }
        cout << "Result: ";
        i = 0;
        while (i < n) {
            cout << d[i] << '\t';
            i++;
        }
    }
    return 0;
}