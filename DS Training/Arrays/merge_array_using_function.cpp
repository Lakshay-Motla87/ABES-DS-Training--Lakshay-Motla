#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1;
    vector<int> arr2;
    cout << "Enter elements of first sorted array and -1 to stop:" << endl;
    while (true) {
        int x;
        cin >> x;
        if (x == -1) {
            break;
        }
        arr1.push_back(x);
    }
    cout << "Enter elements of second sorted array and -1 to stop:" << endl;
    while (true) {
        int x;
        cin >> x;
        if (x == -1) {
            break;
        }
        arr2.push_back(x);
    }
    vector<int> merged_arr3(arr1.size() + arr2.size());
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), merged_arr3.begin());
    printf("Merged array:\n");
    for (int x = 0; x < merged_arr3.size(); x++) {
        printf("%d ", merged_arr3[x]);
    }
}