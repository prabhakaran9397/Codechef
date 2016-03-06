#include<bits/stdc++.h>
using namespace std;

int main(void)
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
	int t, a, b, i;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		i = a%b;
		cout << i << endl;
	}
        return 0;
}
