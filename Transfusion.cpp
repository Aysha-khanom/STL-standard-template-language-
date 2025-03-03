#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0;
        cin >> n;
        int div = n;
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
            sum+=a;
        }
        if(sum%div != 0)
            cout << "NO" << endl;
        else
        {
            int target = sum/n,surplus=0,deficit=0;
            for(int i=0; i<n; i++)
            {
                if(vec[i] > target)
                {
                    int beshi = vec[i] - target;
                    surplus+=beshi;
                }
                else
                {
                    int b = target - vec[i];
                    deficit+=b;
                }
            }
              if(surplus >= deficit)
                cout << "YES" << endl;
              else
                cout << "NO" << endl;



        }
    }
}
