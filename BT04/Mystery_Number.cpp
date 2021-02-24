#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count=0;
    int mystery_number;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int b[n+1];
    for(int i=0;i<=n;i++)
        cin >> b[i];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]!=a[j])
                count ++;
        }
        cout << count << endl;
        if(count!=n)
        count=0;
        else
            mystery_number=b[i];
    }
    cout << mystery_number;
}
