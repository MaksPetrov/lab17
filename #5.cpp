#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    float x[n], y[n];
    for(int i = 0; i<n; i += 1)
    {
        cin >> x[i];
        cin >> y[i];
    }
    float pmax = 0;
    int max1, max2, max3;
    for(int i = 0; i<n; i += 1)
    {
        for(int j = i+1; j<n; j += 1)
        {
            for(int k = j+1; k<n; k += 1)
            {
                float c1 = sqrt(pow(x[i]-x[j], 2)+pow(y[i]-y[j], 2));
                float c2 = sqrt(pow(x[i]-x[k], 2)+pow(y[i]-y[k], 2));
                float c3 = sqrt(pow(x[k]-x[j], 2)+pow(y[k]-y[j], 2));
                if(c1+c2+c3>pmax)
                {
                    pmax = c1+c2+c3;
                    max1 = i;
                    max2 = j;
                    max3 = k;
                }
            }
        }
    }
    if(pmax>0)
    {
        cout << "P = " << pmax << endl << "(" << x[max1] << ";" << y[max1] << ") " << "(" << x[max2] << ";" << y[max2] << ") " << "(" << x[max3] << ";" << y[max3] << ")";
    }
}
