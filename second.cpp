#include<iostream>
using namespace std;
 int main(){
    int M,N,O;
    cout<<"enter the number:\n";
    cin>>M>>N>>O;

    if(M>N && M>O){
    cout<<"first greatest number="<<M<<endl;
    } else if (N>O&& N>M){
        cout<<"second greatest number="<<N<<endl;
    } else{
        cout<< "third greatest number="<<O<<endl;
      
    }
     cout<<endl;
       return 0;
 }