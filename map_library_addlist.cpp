#include<iostream>
#include<map>
#include<string>
#include<list>

using namespace std;

int main() {   
    map<string,list<string>> pokedex;

    list<string> pikachuAttacts {"thunder shock","tail whip","quick attact"};
    list<string> charmanderAttacts {"flame thrower","scary face"};
    list<string> chikoritaAttacts {"razor leaf","poison powder"};

    pokedex.insert(pair<string,list<string>>("Pikkuchu",pikachuAttacts));
    pokedex.insert(pair<string,list<string>>("charmander",charmanderAttacts));
    pokedex.insert(pair<string,list<string>>("chikorita",chikoritaAttacts));

    for(auto pair :pokedex){
        cout<<pair.first<<" - ";

        for(auto attact : pair.second)
            cout<<attact<<", ";
    
        cout<<endl;
    }
}
