#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0;
    if(n == 0) return 1;
    while(n > 0){
        count++;
        n /= 10;
    }
    return count;
}

bool isArmstrong(int num){
    if(num < 0) return false;

    int k = countDigits(num);
    int sum = 0;
    int n = num;

    while(n > 0){
        int lastDigit = n % 10;
        sum += pow(lastDigit, k);
        n /= 10;
    }

    return sum == num;
}

int main(){
    int number;
    cin >> number;

    if(isArmstrong(number)){
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
