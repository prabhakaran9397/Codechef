#include<bits/stdc++.h>
using namespace std;

int main(void)
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
	int t, l, n, i;
	string a;
	cin >> t;
	while(t--)
	{
		cin >> a;
		l = a.size();
		n = 0;
		for(i=0; i<l; i++)
		{
			if(a[i]=='4')
			{
				n++;
			}
		}
		cout << n << endl;
	}
        return 0;
}
