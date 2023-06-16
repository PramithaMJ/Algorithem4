#include<iostream>
#include<map>
#include<string>

using namespace std;
int main() {   

    map<string, string> myDictonary;
    //to add element to map
    myDictonary.insert(pair<string,string>("apple","der afel"));
    myDictonary.insert(pair<string,string>("banana","die banane"));
    myDictonary.insert(pair<string,string>("orange","dodam, thabili"));
    myDictonary.insert(pair<string,string>("strawberry","stobery"));

    //replace the added element
    myDictonary["strawberry"] = "stbery";
    
    //delete added element
    myDictonary.erase("banana");

    //clear all element
    myDictonary.clear();

    //To show the size of map
    cout<< myDictonary.size() << endl;
    for (auto pair: myDictonary){
        cout<<pair.first<<" - "<<pair.second<<endl;    }
    return 0;
}
