#include <iostream>
// #include 

using namespace std;

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << "is: " << factorial(n);
}

//Solves for the factorial of any input (n)
int factorial(int n)
{
    //Recursion case
    if(n > 1)
    {
        //Recursion happens here
        return n * factorial(n-1);
    }
    //Base case
    else
        return 1;
}