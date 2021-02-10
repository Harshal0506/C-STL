#include <iostream>
#include<unordered_map>
using namespace std;

class Node{
    public:
        char data;
        unordered_map<char,Node*>children;
        bool terminal;
        
        Node(char d){
            data=d;
            terminal=false;
        }
};

class Trie{
    Node * root;
    int cnt;
    
    public:
        Trie(){
            root=new Node('\0');
            cnt=0;
        }
        
        void insert(char *w){
            Node *temp=root;
            for(int i=0;w[i]!='\0';i++){
                char ch=w[i];
                if(temp->children.count(ch)){
                    temp=temp->children[ch];
                }else{
                    Node *n=new Node(ch);
                    temp->children[ch]=n;
                    temp=n;
                }
            }
            temp->terminal=true;
        }
        
        bool find(char *w){
            Node *temp=root;
            for(int i=0;w[i]!='\0';i++){
                char ch=w[i];
                if(temp->children.count(ch)==0){
                    return false;
                }else{
                    temp=temp->children[ch];
                }
            }
            return temp->terminal;
        }
};

//Note that hashmap is good for small number of words
//else Trie datastructure acts the best

int main() {
    Trie t;
    char words[][10]= {"a","hello","not","news","apple"};
    char w[10];
    cin>>w;
    
    for(int i=0;i<5;i++){
        t.insert(words[i]);
    }
    
    if(t.find(w)){
        cout<<"Present"<<endl;
    }else{
        cout<<"Absent"<<endl;
    }
    //one main benifit of unordered_map is that we can set our own hast function functor
    //note user defined data type must have == operator overloaded
    //hashing occurs based on our hash function functor and comparison is done with help of == operator overloaded in our own defined class
    //its O{1} in avg but can take O(N) in particular case
    
	return 0;
}
