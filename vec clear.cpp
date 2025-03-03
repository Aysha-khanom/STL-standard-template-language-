#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vc = {2,3,4,6};

    vc.clear();

    cout << vc.size() << endl;

    for(int i=0; i<vc.size(); i++)
    {
        cout << vc[i] << " ";     /// eta use krle sob element zero hoye jay "cout << vc.empty() << " ";
    }

    cout << endl;

}
