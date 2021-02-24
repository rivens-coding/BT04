#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int sumr=0;
    int suml=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        int b[a[i]];
        for(int j=0;j<a[i];j++)
        {
            cin >> b[j];
        }
        for(int k=0;k<a[i];k++)
        {
            for(int h=0;h<k;h++)
            {
                suml+=b[h];
                for(int g=a[i]-1;g>k;g--)
                {
                    sumr+=b[g];
                }
            }
        }
        cout << suml << ' ' << sumr << endl;
        if(sumr==suml)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
