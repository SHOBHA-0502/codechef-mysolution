#include<bits/stdc++.h>
using namespace std;

int main(){
       char *arr = new char(2);
	 for(int x = 0; x < 2; x++) {
		cin >> arr[x];
	}
       if(arr[0]==arr[1]){
           cout<<arr[1]<< endl;
           
       }
       else if(arr[0]=='R'|| arr[1]=='R'){
           cout<<'R'<<endl;
          
       }
       else if(arr[0]=='B'|| arr[1]=='B'){
           cout<<'B'<<endl;
       }
       else {
           cout<<"G"<<endl;
           
       
    }

return 0;
}