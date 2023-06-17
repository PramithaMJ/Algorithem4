#include <iostream>
#include <algorithm>
#include <array>
#include <unordered_map>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    array<int, 3> arr = { a, b, c };
    sort(arr.begin(), arr.end());
    unordered_map<char, int> map;
    map['A'] = arr[0];
    map['B'] = arr[1];
    map['C'] = arr[2];
    
    for (int i = 0; i < 3; i++) { 
        char order;
        cin >> order;
        if (i != 0) {
            cout << " ";
        }
        cout << map[order];
    }
    cout << endl;

    return 0;
}