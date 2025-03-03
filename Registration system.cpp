#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int siz=0;
    set<string>st;

    while(t--)
    {
        string x;
        cin >> x;
        st.insert(x);

        if(siz != 0)
        {
            cout << "OK" << endl;
            siz++;
        }
        else
        {   int i=1;
            cout << x << i << endl;
                i++;
            }
        }

    }
}
