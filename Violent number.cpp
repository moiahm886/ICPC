#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
typedef long long ll;
int main()
{
	int cases = 0;
	cin >> cases;
	int Day=0, Month=0;
	ll Year=0;
	while (cases--)
	{
		vector<int>vect;
		stringstream ss;
		int count = 0, E = 0, esum = 0, Z = 0, cnt = 0,osum=0;
		cin >> Day >> Month >> Year;
		vect.push_back(Day);
		vect.push_back(Month);
		vect.push_back(Year);
		for (auto x : vect)
		{
			ss << x;
		}
		ll D = 0;
		ss >> D;
		ll temp = D;
		vect.clear();
		while (true)
		{
			vect.insert(vect.begin(), temp % 10);
			temp /= 10;
			if (temp == 0)break;
		}
		for (auto x : vect)
		{
			x % 2 == 0 ? esum += x : osum += x;
		}
		for (ll y = 1; y <= D; y++)
		{
			bool upper = false, lower = false;
			cnt = 0; E = 0; Z = 0;
			for (int i = 1; i <= y; i++)
			{
				i % 2 == 0 ? E += i : Z += i;
			}
			if (E > 0 && esum>0&&E % esum == 0)
			{
				upper = true;
			}
			for (int i = 2; i < Z; i++)
			{
				if (Z % i == 0)cnt++;
			}
			if (cnt >= 5 && Z % osum == 0)
			{
				lower = true;
			}
			if (upper && lower)count++;
		}
		count >= Day ? cout << "TERROSIST FOUND\n" : cout << "PEACE\n";
	}
}