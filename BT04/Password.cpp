#include <bits/stdc++.h>

using namespace std;

bool check(string s1,string s2){
    int count=0;
    int n=s1.size();
    int m=s2.size();
    if(n!=m)
    {
        return false;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s1[i]==s2[j])
                {
                   count ++;
                }
            }
        }
        if(count==n)
            return true;
    }
}

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    string s;
    string reverse;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            for(int k = arr[i].size()-1; k >= 0; k--)
            {
                reverse.push_back(arr[i][k]);
            }
            if(check(arr[j],reverse)==true)
               {
                   s=arr[i];
               }
        }
    }
    int m=s.size();
    cout << m << ' ' << s[m/2];
}
