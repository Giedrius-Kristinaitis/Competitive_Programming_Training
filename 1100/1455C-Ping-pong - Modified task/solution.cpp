#include <iostream>
 
using namespace std;
 
void solve(int a, int b)
{
    if (a == b) {
        cout << "0 1" << endl; 
        return;
    }
    
    if (a > b) {
        cout << a - b << " " << (a - b == 1 ? 1 : 0) << endl;
        return;
    }
    
    cout << "0 " << b - a + 1 << endl;
}
 
int main()
{
    int n, a, b;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        solve(a, b);
    }
 
    return 0;
}
