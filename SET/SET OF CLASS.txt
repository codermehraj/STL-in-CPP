//Bismillahir Rahmanir Rahim
//codermehraj@gmail.com
//Ctrl+b to Build the code
//Ctrl+Alt+r to Run

#include<bits/stdc++.h>

using namespace std;

class Person {
public:
	float age;
	string name;
	bool operator < (const Person& rhs) const { return age < rhs.age; }
	bool operator > (const Person& rhs) const { return age > rhs.age; }
};

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	set < Person , std::less< Person > > a; // ascending
	set < Person , std::less< Person > >::iterator A;
	set < Person , std::greater< Person > > b; // descending
    set < Person , std::greater< Person > >::iterator B;

	int n;
	float x;
	string s;
	pair < int , string > p;
	cin>>n;
	while(n--){
            cin>>x>>s;
            //p=make_pair(x,s);
            a.insert({x,s});
            b.insert({x,s});
		}
    for(A=a.begin();A!=a.end();A++){
        cout<<(*A).age<<" "<<(*A).name<<endl;
    }
    for(B=b.begin();B!=b.end();B++){
        cout<<(*B).age<<" "<<(*B).name<<endl;
    }
	return 0;
}

