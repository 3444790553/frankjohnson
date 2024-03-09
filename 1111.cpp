/*#include<iostream>
using namespace std;
int main(){
	int  a=2023;
	int s=0;
	
	for(int i=1;i<=2023;i++){
		if(2023%i==0){
			s++;
			
		}
	}
	cout<<s;
	
	
	return 0;
	
} */
#include<iostream>
#include<string>

using namespace std;
int main(){
	string s;
	cin>>s;
	int cns=0;
	int i;
	for(i=0;i<s.size();i++){
		int k=s[i]-'0';
	if(k%2!=0)
	cns++;
	
	}
	
	cout<<cns<<endl;
	
	return 0;
	
}


