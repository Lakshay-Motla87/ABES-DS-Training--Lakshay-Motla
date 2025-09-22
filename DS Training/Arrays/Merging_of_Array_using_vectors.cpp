#include <bits/stdc++.h>
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
    vector<int> merged;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
    }
    printf("Merged array:\n");
    for (int x = 0; x < merged.size(); x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");
    return 0;
}