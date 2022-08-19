#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string password, secret;
	cin >> password >> secret;
	vector<int>vect;
	vector<bool>hello(secret.size(), false);
	for (int i = 0; i < password.size(); i++)
	{
		for (int j = 0; j < secret.size(); j++)
		{
			if (password[i] == secret[j]&&hello[j]==false)
			{
				vect.push_back(j);
				hello[j] = true;
				break;
			}
		}
	}
	is_sorted(vect.begin(), vect.end()) && vect.size() == password.size() ? cout << "PASS\n" : cout << "FAIL\n";
}