#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
	    string s ;
	    int n ;
	    string s1 = "1";
	    string s2 = "0";
	    string result ;
	    cin>> n ;
	    if(n%2 != 0){
	        cout<< "-1" <<endl;
	    }
	    else{
	    for(int i =0 ; i<n/2 ; i++){
	        s = s +s1 ;
	    }
	    for(int i =0 ; i<n/2 ; i++){
	        s = s +s2 ;
	    }
	    cout<<s << endl;
	    }
     
    }

return 0;
}