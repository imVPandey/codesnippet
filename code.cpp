#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
	int flag = 0;
   int sqr = sqrt(n);
   for (int i = 2; i <= sqr; ++i)
   {
   	if(n%i==0){
   		flag++;
   		break;
   	}
   }
   if(flag == 0){
   	return true;
   }else{
   	return false;
   }
}
vector<int> find(int n){
	vector<int>v;
	for (int i = 2; i <= n; ++i)
	{
		
		if(isprime(i)){
			for(int j=2;j*i<=sqrt(n);j++){
				v[i*j] == 0;
			}
			v.push_back(i);
		}
	}
	return v;
}
vector<int> fact(int n){
	vector<int>v;
	for(int i = 1;i <= sqrt(n); i++){
		if(n % i == 0){
			v.push_back(i);
			v.push_back(n/i);
		}
	}
	sort(v.begin(),v.end());
	return v;
}

int main(){
	int n;
	cin >> n;
	vector<int>nge  = fact(n);
	for (int i = 0; i < nge.size(); ++i)
	{
		cout << nge[i] << " ";
	}
}