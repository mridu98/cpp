#include<iostream>
#include<vector>
#include<list>

using namespace std;
int main(){
list<int> v;
cout<<v.size()<<"  "<<"\n";
v={1,2,7,5};
cout<< v.size()<<"  "<<"\n";
v.push_back(3);
v.push_back(4);
list<int> :: iterator it;

v.push_back(8);
cout<<endl;
list<int> ::iterator i=v.begin();
for( ;i!=v.end();i++){
    cout<<*i<<" ";
}


return 0;
}