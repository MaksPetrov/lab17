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
    float xmax = 0, ymax = 0, smax = 0;
    for(int i = 0; i<n; i += 1)
    {
        if(x[i]<0 && y[i]>0)
        {
            float s = sqrt(x[i]*x[i]+y[i]*y[i]);
            if(s>smax)
            {
                smax = s;
                xmax = x[i];
                ymax = y[i];
            }
        }
    }
    cout << "(" << xmax << ";" << ymax << ")";
}
