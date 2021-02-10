#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	vector<int>a;
	vector<int>b(5,10);//five int with value 10 - init a vector of zeros(n,0)
	vector<int>c(b.begin(),b.end());
	vector<int>d{1,2,3,10,14};
	vector<int>v(10);  //vector of size 10 and all are 0's
	
	
	//look at how we can itterate over the vector
	for(int i=0;i<c.size();i++){
	    cout<<c[i]<<",";
	}
	
	cout<<endl;
	
	for(auto it=b.begin();it !=b.end();it++){
	    cout<<(*it)<<",";
	}
	cout<<endl;
	
	//for each loop
	for(int x:d){
	    cout<<x<<",";
	}
	cout<<endl;
	
	
	//discuss more functions
	vector<int>V;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int no;
	    cin>>no;
	    V.push_back(no);
	}
	
	for(int x:V){
	    cout<<x<<",";
	}
	cout<<endl;
	//understand at memory level ,what are the differences in the two
	cout<<V.size()<<endl;
	cout<<V.capacity()<<endl; //size of underlying array
	cout<<V.max_size()<<endl; //maximum no of elements a vector can hold in the memory available in the system 
	
	cout<<endl;
	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl; //size of the underlying array
	cout<<d.max_size()<<endl; //maximum no of elements a vector can hold in worst case
	
	
	
	
	
	return 0;
}
