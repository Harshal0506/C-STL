#include <iostream>
#include<algorithm>
using namespace std;
#include <vector>

int main() {
    vector<int> vec1={1,2,3,4,5,6,7,8,9};
    
    
    cout<<"Old vector:";
    for(int i=0; i < vec1.size(); i++) 
        cout << " " << vec1[i]; 
    cout << "\n";
    
    //rotate function
    int rotL=3;
    rotate(vec1.begin(),vec1.begin()+rotL,vec1.end());
    cout << "New vector after left rotation :"; 
    for (int i=0; i < vec1.size(); i++) 
        std::cout<<" "<<vec1[i]; 
    cout << "\n\n";
    
    
    //now right rotate
    std::cout << "Old vector :"; 
    for (int i=0; i < vec1.size(); i++) 
        std::cout << " " << vec1[i]; 
    std::cout << "\n";
    
    //rotate right 4 times
    int rotR=4;
    rotate(vec1.begin(),vec1.begin()+vec1.size()-rotR,vec1.end());
    std::cout << "After 3 right shift vector :"; 
    for (int i=0; i < vec1.size(); i++) 
        std::cout << " " << vec1[i]; 
    std::cout << "\n";
    
    
    
    
	// your code goes here
	return 0;
}
