#include<iostream>
using namespace std;


int main() {
    int element; 
    int arr[100]={23,36,45,54,59,67,78,89,90};
    int count=0;
	cout << "Enter the element to be searched: ";
	cin >> element;
    int low = 23;
    int high = 90;
    int mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==element){
            cout << "Element found" << endl;
            count=1;
            return 0;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=(low+high)/2;


    }
    if(count==0){
        cout << "Element not found" << endl;
    }
	
}
