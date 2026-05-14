#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[100];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int current_sum = 0;
    int max_profit = 0;

    for(int i = 0; i < N; i++) {
        current_sum += arr[i];

        if(current_sum < 0) {
            current_sum = 0;
        }

        if(current_sum > max_profit) {
            max_profit = current_sum;
        }
    }

    cout << max_profit << endl;

    return 0;
}