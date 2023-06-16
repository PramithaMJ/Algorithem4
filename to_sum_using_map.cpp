#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        auto node = m.find(target - t);

        if (node == m.end())
        {
            // if not found
            m[t] = i;
        }
        else
        {
            cout << node->second << " " << i << endl;
        }
    }
}