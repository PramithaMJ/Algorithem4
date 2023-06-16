#include <iostream>
#include <vector>

using namespace std;
class twosum
{
};
int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int t;
    cin >> t;

    for (int i = 0; i < v.size(); i++)
    {
        // cout<<v[i];
        for (int j = i + 1; j < v.size(); j++)
        {
            if (v[i] + v[j] == t)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
}