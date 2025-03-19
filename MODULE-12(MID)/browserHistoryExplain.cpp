#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declaring a list to store addresses and an unordered_map for quick lookup of iterators
    list<string> addresses;  // stores the addresses
    unordered_map<string, list<string>::iterator> addressMap;  // maps addresses to iterators

    string address;
    // Reading addresses until "end" is encountered
    while(cin >> address && address != "end"){
        addresses.push_back(address);  // adding address to the list
        addressMap[address] = --addresses.end();  // storing the iterator to the address in the map
    }

    int q;
    cin >> q;  // number of queries
    string command, direction;
    auto current = addresses.begin();  // iterator to track current position

    // Processing each query
    for(int i = 0; i < q; i++){
        cin >> command;  // reading command
        if(command == "visit"){
            cin >> direction;  // reading direction/address to visit
            // Checking if the address exists in the map
            if(addressMap.find(direction) != addressMap.end()){
                current = addressMap[direction];  // updating current iterator
                cout << *current << endl;  // printing the current address
            }else{
                cout << "Not Available" << endl;  // address not found
            }
        }else if(command == "next"){
            // Moving to the next address if possible
            if(current != addresses.end() && next(current) != addresses.end()){
                current++;  // moving iterator to next address
                cout << *current << endl;  // printing the current address
            }else{
                cout << "Not Available" << endl;  // next address not available
            }
        }else if(command == "prev"){
            // Moving to the previous address if possible
            if(current != addresses.begin()){
                current--;  // moving iterator to previous address
                cout << *current << endl;  // printing the current address
            }else{
                cout << "Not Available" << endl;  // previous address not available
            }
        }
    }
    return 0;
}
