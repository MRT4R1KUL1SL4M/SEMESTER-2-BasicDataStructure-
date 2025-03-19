#include<bits/stdc++.h>
using namespace std;

int main(){
    list<string> addresses;
    unordered_map<string, list<string>::iterator> addressMap;
    string address;
    while(cin>>address&&address!="end"){
        addresses.push_back(address);
        addressMap[address]=--addresses.end();
    }
    int q;
    cin>>q;
    string command,direction;
    auto current=addresses.begin();
    for(int i=0;i<q;i++){
        cin>>command;
        if(command=="visit"){
            cin>>direction;
            if(addressMap.find(direction)!=addressMap.end()){
                current=addressMap[direction];
                cout<<*current<<endl;
            }else{
                cout<<"Not Available"<<endl;
            }
        }else if(command=="next"){
            if(current!=addresses.end()&&next(current)!=addresses.end()){
                current++;
                cout<<*current<<endl;
            }else{
                cout<<"Not Available"<<endl;
            }
        }else if(command=="prev"){
            if(current!=addresses.begin()){
                current--;
                cout<<*current<<endl;
            }else{
                cout<<"Not Available"<<endl;
            }
        }
    }
    return 0;
}