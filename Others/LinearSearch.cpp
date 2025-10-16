#include <iostream>
#include <vector>  // If using vectors
using namespace std;

int main()
{
    int n,count;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int ele;
    cin >> ele;

    for(int i=0;i<n;i++)
    {
        if(arr[i]=ele){
        count=1;
        }
    }
    if(count=1)
    cout <<  "Element Found" << endl;
    else 
    cout << "Element not found" << endl;
}