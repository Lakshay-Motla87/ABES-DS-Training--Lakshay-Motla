#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    cout<<"size of the vector 1:"<<v.size()<< endl;
    cout<<"capacity of water:"<<v.capacity()<< endl;

    for(int i=0;i<v.size();i++)
    //cout<<v(i)<<("  ");
    cout<<v.at(i)<<("  ");
    cout<<endl;

}