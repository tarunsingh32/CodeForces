#include <iostream>
using namespace std;

int main() {
    long long n; 
    cin >> n;
    string str = to_string(n);
    for (int i = 0; i < str.size(); i++) {
        int digit = str[i] - '0'; 
        if (i == 0 && digit == 9) {
            continue;  
        }
        if (digit > 4)
            str[i] = (9 - digit) + '0';  
    }
    cout << str << endl;  
    return 0;
}

