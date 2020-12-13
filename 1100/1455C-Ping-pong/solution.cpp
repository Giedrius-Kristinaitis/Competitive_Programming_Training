#include <iostream>
 
using namespace std;
 
void solve(int a, int b) {
    cout << a - 1 << " " << b << endl;
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