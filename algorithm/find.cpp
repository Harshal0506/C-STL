#include<algorithm>
#include <iostream>
using namespace std;



int main() {
	// your code goes here
	int arr[]={1,10,11,9,100};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	//search --->find
	
	int key;
	cin>>key;
	auto it=find(arr,arr+n,key);
	int index=it-arr;
	if(index==n){
	    cout<<key<<" Not Present";
	}else{
	    cout<<key<<" is found at "<<index;
	}
	
	return 0;
}
