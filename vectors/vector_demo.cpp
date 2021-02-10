#include <iostream>

template <class T>
class Vector{
  int cs;
  int ms;
  T* arr;
  
  public:
  Vector(){
      cs=0;
      ms=1;
      arr=new T[ms];
  }
  
  void push_back(const T d){
      if(cs==ms){
          //Array is full
          T *oldArr=arr;
          arr=new T[2*ms];
          ms=2*ms;
          for(int i=0;i<cs;i++){
              arr[i]=oldArr[i];
          }
          delete[] oldArr;
      }
      
      arr[cs]=d;
      cs++;
  }
  
  void pop_back(){
      cs--;
  }
  T front() const{
      return arr[0];
  }
  
  T back() const{
      return arr[cs-1];
  }
  
  bool empty() const {
      return cs==0;
  }
  
  int capacity() const{
      return ms;
  }
  
  T at(const int i){
      return arr[i];
  }
  
  int size()const {
      return cs;
  }
  
  T operator[](const int i){
      return arr[i];
  }
};
using namespace std;

int main() {
	// your code goes here
	Vector<char> v;
	v.push_back(71);
	v.push_back(72);
	v.push_back(73);
	v.push_back(74);
	v.pop_back();
	v.push_back(76);
	v.push_back(80);
	
	cout << "Capacity " << v.capacity() << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout<<endl;
	cout<<v.at(4)<<endl;
	cout<<v[4]<<endl;
	return 0;
}
