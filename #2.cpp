#include <iostream>

using namespace std;

int main()
{
    int l, n;
    cin >> l >> n;
    cout << endl;
    int a[n], b[n], k = 0;
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
    }
    for(int j = 0; j<n; j += 1)
    {
        int count = 1, e = j;
        while(a[e]==a[e+1] && e<n)
        {
            count += 1;
            e += 1;
        }
        if(count<=l)
        {
            e = j;
            for(int q = 0; q<count; q += 1)
            {
                b[k] = a[e];
                e += 1;
                k += 1;
            }
        }
        else
        {
            b[k] = 0;
            k += 1;
        }
        j += count-1;
    }
    for(int i = 0; i<k; i += 1)
    {
        cout << b[i] << " ";
    }
}
