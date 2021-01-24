
#include<bits/stdc++.h>
using namespace std;




class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    int i = 2;
	    vector<int> v;
	    while( i <= sqrt(N)){
	        
	        if(N % i != 0){
	            i = i+1;
	        } else {
	            N = N/i;
	           if(v.size() == 0){
	               v.push_back(i);
	           } else {
	               if(v[v.size() - 1] != i){
	                   v.push_back(i);
	               }
	           }
	            
	        }
	    }
	    if(N > 1){
	        if(v.size()==0){
	            v.push_back(N);
	        } else {
	            if(v[v.size() - 1] != N){
	                   v.push_back(N);
	               }
	        }
	    }
	    return v;
	}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
} 
