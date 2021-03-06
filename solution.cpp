#include <iostream>
using namespace std;
int sum(int *a, int n);
void comb(int *a, int size, int c, int index);
void print(int *a, int n);
int main()
{
    int n, c;
    cout << "enter the value of number of terms(n):";
    cin >> n;
    cout << "enter the sum(c):";
    cin >> c;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    cout<<"the possible solution are"<<endl;
    comb(arr, n, c, 0);
    return 0;
}
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << "\n";
}
int sum(int *a, int n)
{
    int i = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
void comb(int *a, int size, int c, int index)
{
    int i = 0;
    if (index < size - 1)
    {
        while (i <= c)
        {
            a[index] = i;
            comb(a, size, c, index + 1);
            i++;
        }
    }
    else
    {
        int i = 0;
        while (i <= c)
        {
            a[index] = i;
            if (sum(a, size) == c)
            {
                print(a, size);
            }
            i++;
        }
    }
}