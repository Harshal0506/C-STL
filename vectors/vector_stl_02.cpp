#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	
	vector<int>d{1,2,3,10,14};
	//push back 0(1) for most of the time
	d.push_back(16);
	
	//pop back/Removes the last element O(1)
	d.pop_back();
	
	//insert some elements in the middle O(N)
	d.insert(d.begin()+3,4,100);
	
	
	//erase some elements in middle
	d.erase(d.begin()+2);
	for(int i=0;i<d.size();i++){
	    cout<<d[i]<<" ";
	}
	cout<<endl;
	d.erase(d.begin()+2,d.begin()+5);
	
	for(int i=0;i<d.size();i++){
	    cout<<d[i]<<" ";
	}
	cout<<endl;
	//size
	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;
	
	//we avoid the shrink
	d.resize(18); //if the size is increasing then more memory will be alloced
	cout<<d.capacity()<<endl;
	
	//remove all elements of the vector ,doesnt delete the memory occupied by the array ;
	d.clear();
	cout<<d.size()<<endl;
	
	for(int x:d){
	    cout<<x<<",";
	}
	
	cout<<endl;
	d.push_back(10);
	d.push_back(11);
	d.push_back(12);
	
	
	cout<<d.front()<<endl;
	cout<<d.back()<<endl;
	
	//reserve
	int n;
	cin>>n;
	vector<int>v;
	v.reserve(1000);
	for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Changing capacity "<<v.capacity()<<endl;
    }
    cout<<"Capacity "<<v.capacity()<<endl;
    for(int x:v){
        cout<<x<<",";
    }
    
	
	
	
	return 0;
}
