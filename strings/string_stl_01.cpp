#include <iostream>
#include<string>

using namespace std;

int main() {
	// your code goes here
	string s0;
	string s1("Hello");
	
	string s2="Hello World!";
	string s3(s2);
	string s4=s3;
	
	
	char a[]={'a','b','c','\0'};
	string s5(a);
	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;
	
	if(s0.empty()){
	    cout<<"S0 is an empty string"<<endl;
	}
	
	s0.append("I love c++");
	cout<<s0<<endl;
	s0+=" and python";
	cout<<s0<<endl;
	
	
	//remove
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;
	
	//compare
	s0="Apple";
	s1="Mango";
	cout<<s1.compare(s0)<<endl; //returns an integer ==0 equal,>0,<0
	
	
	//overload Operator strings 
	if(s1>s0){
	    cout<<"Mango is lexi greater than apple "<<endl;
	}
	cout<<s1[0]<<endl;
	
	
	//find Substrings
	string s = "I want to have apple juice";
	string word ="apple";
	int idx=s.find(word);
	cout<<idx<<endl;
	
	
	//remove a word from the string
	
	
	int len=word.length();
	cout<<s<<endl;
	s.erase(idx,len+1);
	cout<<s<<endl;
	
	
	//iterate over all the characters in the string
	for(int i=0;i<s1.length();i++){
	    cout<<s1[i]<<":";
	}
	cout<<endl;
	
	//iterators
	
	for(string::iterator it=s1.begin();it!=s1.end();it++){
	    cout<<(*it)<<",";
	}
	cout<<endl;
	
	//for each loop
	for(char c:s1){
	    cout<<c<<".";
	}
	cout<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
