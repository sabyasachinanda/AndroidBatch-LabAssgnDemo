#include <iostream>
#include <stdio.h>
using namespace std;

int add_elements(int a[],int n)
{
    int temp=0;
    for (int i = 0; i < n; i++)
    {
        temp=temp+a[i];
    }

    return temp;
}

// int display()
// {
//     int ans;
//     ans=add_elements(a,n);
// }

int main()
{
    int a[100];
    int n;

    cout << "enter the length of array";
    cin >> n;
    cout << "enter the elements of the array";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans;
    ans=add_elements(a,n);

    cout<<"answer ="<<ans;


}