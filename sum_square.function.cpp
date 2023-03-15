#include <iostream>
#include <math.h>
using namespace std;

//Function Sum of pow value
int sum_of_squared(int sum, int n) {
    sum = 0;
    for(int i=1; i-1<n; i++){
        sum = sum + pow(i,2);
    }
    return sum;
}

int main() {
    int n, sum;
    cout << "Input n: ";
    cin >> n;
    sum = sum_of_squared(sum,n);
    cout << "Sum from 1 squared to "<<n<< " squared is: "<< sum << endl;
    return 0;
}