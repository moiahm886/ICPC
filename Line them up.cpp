#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool decreasing(vector<string>vect)
{
	vector<string>hello = vect;
	sort(hello.begin(), hello.end(), greater<string>());
	return hello == vect ? true : false;
}
bool increasing(vector<string>vect)
{
	vector<string>hello = vect;
	sort(hello.begin(), hello.end());
	return hello == vect ? true : false;
}
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	int cases;
	cin >> cases;
	vector<string>vect;
	while (cases--)
	{
		string str;
		cin >> str;
		vect.push_back(str);
	}
	if (increasing(vect))cout << "INCREASING\n";
	else if (decreasing(vect))cout << "DECREASING\n";
	else cout << "NEITHER\n";
	return 0;
}