#include<bits/stdc++.h>

using namespace std;

int main()
{
    list < int > l1,l2;
    int n,x;
    cout<<"Enter the size of the list :: ";
    cin>>n;
    while(n--) {
        cin>>x;
        l1.push_front(x);
    }
    l2=l1;
    cout<<"Assigning List 1 into list 2...\n";
    list < int >::iterator it=l1.begin();
    cout<<"List 1 :: ";
    for(;it!=l1.end();it++) cout<<*it<<" ";
    cout<<endl<<"List 2 :: ";
    for(it=l2.begin();it!=l2.end();it++) cout<<*it<<" ";
    l1.sort();
    cout<<"\nList 1 After Sorting :: ";
    for(it=l1.begin();it!=l1.end();it++) cout<<*it<<" ";
    l1.merge(l2); // List 2 attached after List 1
    cout<<"\nList 1 After list1.merge(list2); :: ";
    for(it=l1.begin();it!=l1.end();it++) cout<<*it<<" ";
    //l1.splice(l1.begin(),l2); // List 2 will be moved at l1.begin
    l1.unique(); //will remove  consequtive or adjacent repetation
    // So to find real uniques first sort the list
    cout<<"\nList 1 After l1.unique() :: ";
    for(it=l1.begin();it!=l1.end();it++) cout<<*it<<" ";
    
    
    return 0;
}