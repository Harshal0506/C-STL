#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	
	//pair
	pair<int,char> p1;
	p1.first=10;
	p1.second='B';
	
	pair<int,char>p2=p1;
	pair<int,char>p3(p1);
	
	pair<int,char>p4={1,'C'};
	cout<<p4.first<<" "<<p4.second<<endl;
	
	pair<int,char>p5=make_pair(1,'a');
	cout<<p5.first<<" "<<p5.second<<endl;
	
	
	
	return 0;
}
