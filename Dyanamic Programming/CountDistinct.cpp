#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> countDistinct(int arr[], int n, int k){
    unordered_map<int, int> freq;
    vector<int> result;

    // First window
    for(int i = 0; i < k; i++) {
        freq[arr[i]]++;
    }

    result.push_back(freq.size());

    // Sliding window
    for(int i = k; i < n; i++){
        int left = arr[i - k];

        freq[left]--;
        if(freq[left] == 0){
            freq.erase(left);
        }

        freq[arr[i]]++;
        result.push_back(freq.size());
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 1, 3, 4, 2, 3};
    int n = 7, k = 4;

    vector<int> res = countDistinct(arr, n, k);

    for(int x : res) {
        cout << x << " ";
    }

    return 0;
}
