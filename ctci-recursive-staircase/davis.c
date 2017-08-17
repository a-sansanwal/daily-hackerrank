#include<iostream>
using namespace std;
int steps(int s)
{
if(s==0)
	return 1;
if(s<0)
	return 0;
return steps(s-1) + steps(s-2) + steps(s-3);
}

int main() {
	int s;
	cin>>s;
	while(s--){
	int t;
	cin>>t;
	cout<<steps(t)<<endl;
	}
}

