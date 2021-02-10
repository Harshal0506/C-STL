//as sort removes the repeated one and sort in lexo order

//permut was giving all n! permut we need to take the case when repeated char occurs in string
//sort in lex order
  
#include <iostream>
#include<set>
#include<string>
using namespace std;

void permute(char a[],int i,set<string> &s){
    if(a[i]=='\0'){
        //cout<<a<<endl;
        string t(a);
        s.insert(t);
        return;
    }
    //recursive case
    for(int j=i;a[j]!='\0';j++){
        swap(a[i],a[j]);
        permute(a,i+1,s);
        swap(a[i],a[j]);
    }
}

int main() {
    
    char a[100];
    cin>>a;
    set<string> s;
    permute(a,0,s);
    // s contains only unique and lex sorted items
    //yaha insert ka concept h stack queue deque ya pq thodi na hai
    //map me insert tha yaad karo
    //erase bhi h element ya position pass karo kuch bhi chalega

    //loop over the s
    for(auto str:s){
        cout<<str<<",";
    }
}