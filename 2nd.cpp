#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    string s;
    cin>> s;
    vector <int> v;
    v.push_back(x);
    v.push_back(x);
    v.push_back(x);

    sort(v.begin(),v.end());


    map<char ,int> m;
    m['A']=v[0];
    m['B'] = v[1];
    m['C'] = v[2];
 
    cout<< m[s[0]] <<" "<<m[s[1]]<<" "<<m[s[3]]<<endl;
    
    return 0;
}
