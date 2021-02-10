#include <iostream>
#include <map>
#include <cstring>
using namespace std;



int main() {
	// your code goes here
	multimap<char ,string>m;
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
	    char ch;
	    string s;
	    cin>>ch>>s;
	    m.insert(make_pair(ch,s));
	}
	
	for(auto p:m){
	    cout<<p.first<<" "<<p.second<<endl;
	}
	auto it=m.begin();
	m.erase(it);
	
// 	for(auto p:m){
// 	    cout<<p.first<<" "<<p.second<<endl;
// 	}

    //its ordered multimap
    //use of upper_bound and lower_bound property is quite interesting
    
    cout<<"-----------bonds output------------------"<<endl;
    auto it2=m.lower_bound('a');
    auto it3=m.upper_bound('c');
    
    for(auto it4=it2;it4!=it3;it4++){
        cout<<it4->second<<" ,";
    }
    cout<<endl;
    
    
    cout<<"Searching in multimap"<<endl;
    //search for hardik
    auto f=m.find('h');
    if(f->second=="hardik"){
        m.erase(f);
    }else{
        cout<<(*f).second<<endl;
    }
    cout<<endl;
    
    for(auto i:m){
        cout<<i.first<<" ->"<<i.second<<endl;
    }
	return 0;
}
