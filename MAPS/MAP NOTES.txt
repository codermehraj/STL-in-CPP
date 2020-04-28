//Bismillahir Rahmanir Rahim
//codermehraj@gmail.com
//Ctrl+b to Build the code
//Ctrl+Alt+r to Run

#include<bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	map < char , int > mp;
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		mp[s[i]]++;
	}
	map < char , int >::iterator it=mp.begin();
	for(;it!=mp.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	char c;
	cin>>c;
	it=mp.find(c);
	if(it==mp.end()) cout<<c<<" is not present at this map list\n";
	else cout<<c<<" is present at "<<distance(mp.begin(),it)<<" th position\n";
	cin>>c;
	mp.erase(c);
	cout<<"Condition of the map after removing "<<c<<" from the map list\n";
	for(it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	mp.clear();
	cout<<"Size of the map list after clearing :: "<<mp.size();
	return 0;
}
