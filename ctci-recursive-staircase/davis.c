#include<iostream>
using namespace std;

int memoize[37];

int steps(int s)
{
if(s==0)
	return 1;
if(s<0)
	return 0;
if(memoize[s]!=-1)
	return memoize[s];
memoize[s] = steps(s-1) + steps(s-2) + steps(s-3);
return memoize[s];
}

int main() {
	int s;
	cin>>s;
	for(int i=0;i<37;i++) memoize[i]= -1;
	while(s--){
	int t;
	cin>>t;
	cout<<steps(t)<<endl;
	}
}

