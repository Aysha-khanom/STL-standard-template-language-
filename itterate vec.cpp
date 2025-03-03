#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec = {2,4,6,8,10};

    auto iterate =find(vec.begin(),vec.end(),8);

    cout << "element found at index:" << distance(vec.begin(),iterate) << endl << "element is: " <<*iterate << endl;


}
