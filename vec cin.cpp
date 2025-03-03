#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec(5);

    cout << vec.size() << endl;

    for(int i=0; i<5; i++)
    {
        cin >> vec[i];
    }

     for(int i=0; i<5; i++)
    {
        cout << vec[i] << " ";
    }

    cout << endl;
}
