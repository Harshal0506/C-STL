#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main() {
	// your code goes here
	unordered_map<string,int>m;
	
	//its unordered means not in assending order
	pair<string,int>p;
	p.first="Apple";
	p.second=120;
	
	m.insert(p);
	
	m.insert(make_pair("Mango",100));
	
	m["Banana"]=20;
	
	
// 	for(auto i:m){
// 	    cout<<i.first<<" "<<i.second<<" ,"<<endl;   
// 	}

    //2. search
    
    string fruit;
    cin>>fruit;
    
    m[fruit]+=22;
    
    auto it=m.find(fruit);
    
    if(it!=m.end()){
        cout<<" Price of "<<fruit<<" is "<<m[fruit]<<endl;
    }else{
        cout<<"fruit is not present"<<endl;
    }
    
    m["Litchi"]=60;
    m["Pineapple"]=80;
    
    
    //iterate over all the key value pairs
    
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" : "<<it->second<<endl;
    }
    
    //for each loop 
    m.erase(m.begin());
    for(auto p:m){
        cout<<p.first<<" , "<<p.second<<endl;
    }
	return 0;
}
