#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Enter elements into the vector and -1 to stop"<<endl;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        v.push_back(x);
    }
    cout<<"Enter the element to be searched"<<endl;
    int element;
    cin>>element;
    if(binary_search(v.begin(),v.end(),element))
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
}
