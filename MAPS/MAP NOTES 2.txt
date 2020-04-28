#include<bits/stdc++.h>

using namespace std;

int main()
{

	// empty map container
	map<int, int > mp;

	// insert elements form user
	int n,a,b;
	cin>>n;
	for(int i=1;i<=n;i++){
        cin>>a>>b;
        mp.insert(make_pair(a,b));
	}

	// printing map mp
	map<int, int>::iterator itr;
	cout << "\nThe map mp is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// assigning the elements from mp to mp2
	map<int, int> mp2(mp.begin(), mp.end());
     // print all elements of the map mp2
	cout << "\nThe map mp2 after"
		<< " assign from mp is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = mp2.begin(); itr != mp2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;
    int x;
    cout<<"Remove upto key = ";
    cin>>x;
	// remove all elements up to
	// element with key=3 in mp2
	cout << "\nmp2 after removal of"
			" elements less than key="<<x<<" : \n";
	cout << "\tKEY\tELEMENT\n";
	mp2.erase(mp2.begin(), mp2.find(x));
	for (itr = mp2.begin(); itr != mp2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	// remove all elements with key = x
	int num;
	cout<<"Remove all elements with key = ";
	cin>>x;
	num = mp2.erase(x);
	cout << "\nmp2.erase("<<x<<") : ";
	cout << num << " removed \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = mp2.begin(); itr != mp2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	cout << endl;

	// lower bound and upper bound for map mp key = x
	cout<<"lower bound and upper bound for map mp key = ";
	cin>>x;
	cout << " mp.lower_bound("<<x<<") : "
		<< "\tKEY = ";
	cout << mp.lower_bound(x)->first << '\t';
	cout << "\tELEMENT = "
		<< mp.lower_bound(x)->second << endl;
	cout << "mp.upper_bound("<<x<<") : "
		<< "\tKEY = ";
	cout << mp.upper_bound(x)->first << '\t';
	cout << "\tELEMENT = "
		<< mp.upper_bound(x)->second << endl;

	return 0;
}
