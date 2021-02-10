#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int arr[]={1,2,3};
	
	cout<<"The 3! possible permutations with 3 elements:\n";
	
	do{
	    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<"\n";
	}while(next_permutation(arr,arr+3));
	
	cout<<"After loop: "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<"\n";
	
	//understand when it return false when it encounters next_permutation tp be lowest possible
	//but kaam hamesha karta hi h
	
	
	
	
	//note some other methods such as min max swap reverse also exist in algorithm
	return 0;
}
