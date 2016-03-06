#include<iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t, n, x, y, ans, i;
	cin >> t;
	while(t--)
	{
		cin >> n;
		ans = 0;
		for(i=1; i<=n; i++)
		{
			cin >> x >> y;
			ans^=i;
		}
		cout<<ans<<endl;
	}
}
