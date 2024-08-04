#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a;
    cout<<"Enter String to reverse "<<endl;
    cin>>a;
    reverse(a.begin(),a.end());
    cout<<a;
}
