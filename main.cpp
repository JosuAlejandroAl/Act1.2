#include <iostream>
using namespace std;

int main(){
    int N[1000], n;
    cout<<"digita el numero de elemntos:"<<endl;
    cin>>n;

    for(int i=0; i<n ; i++){
        cin>>N[i]; 
    }

    for(int i=0; i<n ; i++){
        cout<<"\n"<<N[i]<<endl;
    }

}