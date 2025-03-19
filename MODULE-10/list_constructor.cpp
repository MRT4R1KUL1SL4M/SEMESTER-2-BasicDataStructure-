#include <bits/stdc++.h>
using namespace std;
int main() {
    // list<int> myList;

    //list<int> myList(10,5);
    list<int> myList2={1,2,3,4,5};
    list<int>myList(myList2);

    for (auto it = myList.begin();it != myList.end();it++)
    {
        cout<<*it<<endl;
    }


    return 0;
}