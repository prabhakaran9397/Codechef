#include<bits/stdc++.h>
using namespace std;

int main(void)
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		cout << (n/2)*((n/2)-1)/2 << endl;
	}
        return 0;
}
