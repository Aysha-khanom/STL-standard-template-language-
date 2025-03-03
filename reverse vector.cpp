#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vc = {2,3,4,6};

    reverse(vc.begin(),vc.end());

    for(int i=0; i<vc.size(); i++)
    {
        cout << vc[i] << " ";
    }

    cout << endl;

}
