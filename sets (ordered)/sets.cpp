#include<set>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	//set can be used as a tool for taking unique value and in sorting array
	set<int>s1;
	s1.insert(40);
	s1.insert(30);
	s1.insert(60);
	s1.insert(20);
	s1.insert(50);
	
	//log N and only one 50 will be added
	s1.insert(50);
	s1.insert(10);
	
	
	// printing set s1
	
	set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++) 
    {
        cout << *itr<<" ";
    }
    cout << endl;
    
    //also pair ke liye bhi andar hi define h comparison
    set<int> s2(s1.begin(),s1.end());
    for (itr = s2.begin(); itr != s2.end(); itr++) 
    {
        cout << *itr<<" ";
    }
    cout<<endl;
    
    s2.erase(50);
    auto it=s2.find(30);
    s2.erase(it);
    
    for (itr = s2.begin(); itr != s2.end(); itr++) 
    {
        cout << *itr<<" ";
    }
    cout<<endl;
    
    auto it2=s2.lower_bound(20);
    auto it3=s2.upper_bound(20);
    it3++;
    for(;it2!=it3;it2++){
        cout<<(*it2)<<" ";
    }
    cout<<endl;
    
    
    cout << endl;
    
	
	
	
	return 0;
}
