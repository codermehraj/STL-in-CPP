//Bismillahir Rahmanir Rahim
//codermehraj@gmail.com
//Ctrl+b to Build the code
//Ctrl+Alt+r to Run

#include<bits/stdc++.h>

using namespace std;

bool func(int a , int b){
	return a>b; // for any i th value ( i th value > (i+1) the value )
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,sum=0;
	cin>>n;
	vector < int > A(n,0); //Initializing vector A of n size
	for(int i=0;i<n;i++){
		cin>>A[i]; // Taking input of i th index of vector A
		sum+=A[i]; // Calculating the sum
	}
	sort(A.begin(),A.end()); // Sorting vector A from its begin to end
	for(int i=0;i<n ;i++) cout<<A[i]<<" "; // Printing the vector A
	cout<<endl<<"SUM = "<<sum<<endl;
	int x;
	cin>>x;
	bool present= binary_search(A.begin(),A.end(),x); // true if x is found in A using binary search
	if (present) cout<<x<<" is present in the vector list\n";
	else cout<<x<<" is not present in the vector list\n";

	vector < int >::iterator it; // declaring a vector integer pointer
	cin>>x;
	it = lower_bound(A.begin(),A.end(),x); //gives iterator to the first occurance of x in A (*it>=x)
	cout<<"Lower Bound of "<<x<<" is "<<*it<<" at position of "<<it-A.begin()<<endl;
	it = upper_bound(A.begin(),A.end(),x); // givs iterator to the first value after x (*it>x)
	if(it!=A.end())
	cout<<"Upper Bound of "<<x<<" is "<<*it<<" at position of "<<it-A.begin()<<endl;

	sort(A.begin(), A.end(), func); // here func controls the sorting criteria
	for(int i=0;i<n ;i++) cout<<A[i]<<" ";
	cout<<endl;

    cout<<"After reversing the whole vector list :: \n";
    reverse(A.begin(),A.end());
	for(int i=0;i<n ;i++) cout<<A[i]<<" ";
	cout<<endl;

	return 0;
}
