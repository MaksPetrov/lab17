#include <iostream>

using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;
    cout << endl;
    int a[n], b[n], l = 1, c = 1, j = 0, q = n-1, lenk = 0, lenl = 1;
    for(int i = 0; i<n; i += 1)
    {
        cin >> a[i];
        if(a[i]!=a[i-1] && i>0)
        {
            l += 1;
        }
        if(l==k)
        {
            lenk += 1;
        }
    }
    while(a[q]==a[q-1] && q>=0)
    {
        lenl += 1;
        q -= 1;
    }
    for(int i = 0; i<n; i += 1)
    {
        int w, count = 1, t = i+1;
        if(a[i]!=a[i-1] && i>0)
        {
            c += 1;
        }
        while(a[t]==a[t-1] && t<n)
        {
            count += 1;
            t += 1;
        }
        if(c==k)
        {
            w = i;
            for(int r = 0; r<lenl; r += 1)
            {
                b[j] = a[n-1];
                j += 1;
            }
        }
        else if(c==l)
        {
            for(int r = 0; r<lenk; r += 1)
            {
                b[j] = a[w];
                j += 1;
            }
        }
        else
        {
            for(int r = 0; r<count; r += 1)
            {
                b[j] = a[i];
                j += 1;
            }
        }
        i += count-1;
    }
    for(int i = 0; i<n; i += 1)
    {
        cout << b[i] << " ";
    }
}
