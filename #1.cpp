#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int a[n], k = 1;
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
        if(i>0 && a[i-1]!=a[i])
        {
            k += 1;
        }
    }
    int b[k], c[k], j = 0;
    for(int i = 1; i<n; i += 1)
    {
        if(a[i]!=a[i-1])
        {
            if(j==0)
            {
                c[j] = a[i-1];
                j += 1;
            }
            c[j] = a[i];
            j += 1;
        }
    }
    int count = 1;
    j = 0;
    for(int i = 1; i<n; i += 1)
    {
        if(a[i]!=a[i-1])
        {
            b[j] = count;
            j += 1;
            count = 1;
        }
        else
        {
            count += 1;
        }
    }
    b[j] = count;
    cout << "b[ ";
    for(int i = 0; i<k; i += 1)
    {
        cout << b[i] << " ";
    }
    cout << "]" <<  endl;
    cout << "c[ ";
    for(int i = 0; i<k; i += 1)
    {
        cout << c[i] << " ";
    }
    cout << "]";
}
