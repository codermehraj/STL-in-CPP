// Press F9 to run
// F2 to kill the terminal
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1;
    cout<<"Enter any string s :: ";
    cin>>s;
    cout<<"The String you entered is :: "<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<"Strind after reversing :: "<<s<<endl;
    reverse(s.begin(),s.end());
    int i,x;
    cout<<"Enter the index where you want to replace :: ";
    cin>>i;
    cout<<"Enter how many charecter you want to replace :: ";
    cin>>x;
    cout<<"Enter What you want to replace there :: ";
    cin>>s1;
    s.replace(i,x,s1);
    cout<<"Condition of the string after this operation :: "<<s<<endl;
    cout<<"Enter what do you want to find in the string :: ";
    cin>>s1;
    if(s.find(s1)<s.size() && s.find(s1)>=0) cout<<s1<<" is at "<<s.find(s1)<<" index\n";
    else cout<<s1<<" is not present in "<<s<<endl;
    return 0;
}