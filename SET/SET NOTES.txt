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
	set < int > s; // Ascending order set
	set < int , greater < int > > ss; //Descending order set
	set < int >::iterator x,y;
	int n,a,dif;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		s.insert(a);
	}
	for(x= s.begin(); x != s.end() ; x++){
		cout<<*x<<" ";
	}
	cout<<endl;
	cin>>a;
	x=s.find(a);
	if(x==s.end()) cout<<a<<" is not present in the set list\n";
	else cout<<a<<" is present at "<<distance(s.begin(),x)<<" th position\n";
	cin>>a;
	x=s.lower_bound(a); //First element which will be greater or equal to a
	cout<<"Lower bound of "<<a<<" is "<<*x<<endl;
	x=s.upper_bound(a); //First element which will be greater to a
	cout<<"Upper bound of "<<a<<" is "<<*x<<endl;
	cin>>a;
	if(s.erase(a)){
		cout<<a<<" has been removed from the set list\n";
	}
	else cout<<a<<" is not present in the list\n";
	for(x= s.begin(); x != s.end() ; x++){
		cout<<*x<<" ";
	}
	cout<<endl;
	cin>>a;
	cout<<"Removing up to "<<a<<endl;
	s.erase(s.begin(),s.find(a)); // removes elements up to a (but not a)
	for(x= s.begin(); x != s.end() ; x++){
		cout<<*x<<" ";
	}
	s.clear(); // Clears the whole set
	cout<<"\nSize after clearing the whole set :: "<<s.size()<<endl;
	return 0;
}

