#include <bits/stdc++.h>
using namespace std;

int main() {
	string word;
	while(cin >> word)
	{
		string ans = "";
		for(int i = 0; i < word.size(); ++i)
		{
			char ch = word[i];
			int p  = ans.size()-1;
			if(p >= 1 && ch == ans[p] && ch == ans[p-1])
				continue;
			if(p >= 2 && ch == ans[p] && ans[p-1] == ans[p-2])
				continue;
			ans += ch;			
		}
		cout << ans << endl;
	}
	return 0;
}