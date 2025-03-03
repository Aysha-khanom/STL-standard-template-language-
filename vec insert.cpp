#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> vec={3,8,7,6,9,0};

    vec.insert(vec.begin()+3,2);   //insert
    vec.erase(vec.end()-2);   //erase/delete

    cout << vec.size() << endl;

    for(int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << " ";
    }




}
