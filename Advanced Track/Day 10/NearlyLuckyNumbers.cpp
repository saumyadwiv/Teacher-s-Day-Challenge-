#include<iostream>
#include<string>
using namespace std;

bool isLucky(int x) {
    // Checks if a number is lucky (i.e., composed only of 4 and 7)
    if(x==0){
        return false;
    }
    while (x > 0) {
        int digit = x % 10;
        if (digit != 4 && digit != 7)
            return false;
        x /= 10;
    }
    return true;
}

int main(){
    string n;
    cin >> n; // Use string to safely handle large numbers

    int count = 0;

    // Count lucky digits (4 or 7)
    for (char ch : n) {
        if (ch == '4' || ch == '7') {
            count++;
        }
    }

    // Check if the count itself is a lucky number
    if (isLucky(count)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
