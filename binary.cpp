#include <iostream>

using namespace std;


int main(){
    int n;
    cin >> n;
    int binaryNum[20];
    int index = 0;
    while(n > 0) {
        int remainder = n%2;
        n = n/2;
        binaryNum[index] = remainder;
        index++;
    }

    int count = 0;
    int max_count = 0;
    for (int i = 19; i >= 0; i--) {
        if (binaryNum[i] == 1) {
            count++;
            if (count > max_count){
                 max_count = count;
            }
        } else {
            count = 0;
        }
    }
    cout << max_count;
    return 0;
}
