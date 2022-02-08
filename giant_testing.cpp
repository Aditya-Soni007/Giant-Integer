#include <bits/stdc++.h>
#include "giantint.h"
using namespace std;
int main()
{
    string a, b;
    a = "200";
    b = "100";
    giantint x(a);
    giantint y(b);

    //1.add operation
    giantint c = x + y;
    cout << "Addition is: " << c << endl;

    //2.Subtract operation
    c = x - y;
    cout << "Subtraction is: " << c << endl;

    //3.Divide operation
    c = x / y;
    cout << "Division is: " << c << endl;

    //4.Multply operation
    c = x * y;
    cout << "Multiplication is: " << c << endl;

    //5.pow operation
    c = giant_pow(x, y);
    cout << "Power is: " << c << endl;

    //6. Factorial operation
    c = giant_fact(x);
    cout << "Factorial of " << x << " :" << c << endl;

    //7. Square_root operation

    c = giant_sqrt(x);
    cout << "Square root of" << x << ": " << c << endl;

    //8.Maximum of two Number
    c = giant_max(x, y);

    cout << "MAX of " << x << " , " << y << " : " << c << endl;

    //9.Minimum of two Number
    c = giant_min(x, y);

    cout << "MIN of " << x << " , " << y << " : " << c << endl;

    //10. ISPrime
    giantint temp("7");
    cout << temp << " is prime or not?->" << giant_isPrime(temp) << endl;
    cout << x << " is prime or not?->" << giant_isPrime(x) << endl;

    //11. ISPalindrome
    //giantint temp("7");
    cout << temp << " is palindrome or not?->" << giant_isPalindrome(temp) << endl;
    cout << x << " is palindrome or not?->" << giant_isPalindrome(x) << endl;

    //12. GCD
    c = giant_gcd(x, y);
    cout << " GCD of " << x << "," << y << " : " << c << endl;

    //13. LCM
    c = giant_lcm(x, y);
    cout << " LCM of " << x << "," << y << " : " << c << endl;

    //14. SWAP TWO GIANTInt
    cout << " BEFORE SWAPPING :" << x << "," << y << endl;
    giant_swap(x, y);
    cout << " AFTER SWAPPING :" << x << "," << y << endl;

    return 0;
}
