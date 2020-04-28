#include<iostream>
#include<cmath>
#include<set>
#include<cstdio>
using namespace std;

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}
int main() {
	set < pair < int, int > > pset;
	int n, a, b, mx=-9999999;
	cout << "Enter the number of pairs :: ";
	cin >> n;
	while (n--) {
		cin >> a >> b;
		mx = max(mx,max(a, b));
		pset.insert(make_pair(a, b));
	}

	cout << "The Maximum is :: " << mx << endl;
	set < pair < int, int > >::iterator x=pset.begin();
	for (;x!=pset.end();x++) {
			cout<<"\t"<<x->first<<"\t"<<x->second<<endl;
	}

	return 0;
}

