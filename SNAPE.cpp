#include<bits/stdc++.h>
using namespace std;

int main(void)
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int t;
	int B, LS;
	double RS_max,  RS_min;
        cin >> t;
        while(t--)
        {
		cin >> B >> LS;
		RS_max = sqrt(LS*LS + B*B);
		RS_min = sqrt(LS*LS - B*B);
		cout << RS_min << " " << RS_max << endl;		
        }
        return 0;
}
