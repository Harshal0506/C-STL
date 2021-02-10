#include<cstring>
#include <iostream>
using namespace std;

class Fun{
    public:
        void operator()(string s){
            cout<<"Having fun with "<<s<<endl;
        }
};



int main() {
	// your code goes here
	
	Fun F; //constructor
	F("india"); //overloaded () operator =Functional call where f is an object
	return 0;
}

//note that Function + class ====functor
// sort algorithm provide us a ease of passing a Function but most of them need a functor instead 
