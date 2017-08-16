#include<iostream>
#include<map>
using namespace std;
int main() {
map<string, int> hash;
int n,m;
string s;

cin>>m>>n;
for(int i=0;i<m;i++) {
cin>>s;	
if(hash.find(s) == hash.end())
	hash[s]=1;
else
	hash[s]++;
}
for(int i=0;i<n;i++) {
	cin>>s;
	if(hash.find(s) == hash.end() || hash[s] == 0) {
		cout<<"No";
		return 0;
	}
	else
		hash[s]--;
}
cout<<"Yes";
return 0;
}
