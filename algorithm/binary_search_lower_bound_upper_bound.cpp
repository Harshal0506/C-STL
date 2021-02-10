#include <iostream>
#include<algorithm>
using namespace std;



int main() {
    int arr[]={20,30,40,40,40,50,100,1100};
    int n=sizeof(arr)/sizeof(arr[0]);
    //it is already sorted
    //so we can think of applying binary_search,lower_bound,upper_bound
    
    
    int key;
    cin>>key;
    
    bool present=binary_search(arr,arr+n,key); //logN
    if(present){
        cout<<"Present"<<endl;
    }else{
        cout<<"Absent"<<endl;
    }
    
    
    //find returns iterator
    //binary_search returns bool (there or not)
    
    //Two More Things
    //lower_bound(s,e,key) and upper_bound(s,e,key)
    
    
    //lower bound method >=num ka position
    
    auto lb=lower_bound(arr,arr+n,40);
    cout<<endl<<"Lower bound of 40  is "<<(lb-arr)<<endl;
    
    
    //upper bound method >num ka position
    
    auto ub=upper_bound(arr,arr+n,40);
    cout<<endl<<"Upper bound of 40 is "<<(ub-arr)<<endl;
    
    
    
    cout<<"Occ Freq of 40 is"<<(ub-lb)<<endl;
    
    
    
    
    
	
	return 0;
}
