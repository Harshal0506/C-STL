#include <iostream>
#include<algorithm>
using namespace std;

void show(int a[], int array_size)
{
    for (int i = 0; i < array_size; ++i)
        cout << a[i] << " ";
    cout<<endl;
}

bool asscending(int a,int b){
    return a<b;
}

bool descending(int a,int b){
    return a>b;
}

int main() {
	// your code goes here
	int a[]={1,5,8,9,7,3,2,4,0,6};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n,asscending);
	show(a,n);
	sort(a,a+n,descending);
	show(a,n);
	
	return 0;
}
