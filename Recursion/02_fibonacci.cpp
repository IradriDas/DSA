#include <iostream>
using namespace std;

int fibonacci(int n)
{
    // if (n == 1 || n == 0) // 0 based indexing
    if (n == 1 || n == 2) // 1 based indexing
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << fibonacci(5);
    return 0;
}
