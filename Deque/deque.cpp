#include <iostream>
#include <queue>
using namespace std;

//deque is also not continuous in application 
//but support indexing [] internally it does the calculation
//so we can say deque gives us benifit of both vector and list combined;

void showdq(deque<int> d){
    for(auto it=d.begin();it!=d.end();it++){
        cout<<'\t'<<*it;
        
    }
    cout<<endl;
}


int main() {
	// your code goes here
	
	deque <int>d;
	d.push_back(10);
	d.push_front(20);
	d.push_back(30);
	d.push_front(15);
	
	cout<<" The deque d is:";
	showdq(d);
	
	
	cout<<d.size()<<endl;
	cout<<d.max_size()<<endl;
	cout<<d[2]<<endl; //even if not continuous it support
	cout<<d.front()<<endl;
	cout<<d.back()<<endl;
	d.pop_front();
	d.pop_back();
	showdq(d);
	
	
	return 0;
}
