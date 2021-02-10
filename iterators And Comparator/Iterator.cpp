#include <iostream>
using namespace std;

template<class T>
int search(T arr[],int n,T key){
    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
    
    //return n  if element not found
    return n;
}


//with help of iterator 
template<class T,class I>
I search(I start,I end,T key){
    while(start!=end){
        if(*start==key)
            return start;
        start++;
            
    }
    return start;
}
int main() {
	// your code goes here
	int arr[]={1,2,3,4,5,17};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<search(arr,n,17)<<endl;
	auto I=search(arr,arr+n,17);
	cout<<*I;
	return 0;
}
