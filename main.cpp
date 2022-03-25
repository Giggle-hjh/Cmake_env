#include <iostream>
#include <map>
#include "add.h"

using namespace std;

int main(int, char**) 
{
    multimap<int, string> Astar 
    {
        pair<int, string>(1, "hjh"),
        pair<int, string>(2, "cxm") 
    };
    
    Astar.insert(pair<int, string>(1, "hff"));
    Astar.insert(multimap<int,string>::value_type(4, "zb"));
    Astar.insert(make_pair(5,"ctt"));
    cout << Astar.size() << endl;

    /* multimap<int, string>::iterator iter;
    iter = Astar.find(1);
    Astar.erase(iter); */

    Astar.erase(1);
    Astar.erase(2);

    cout << Astar.size() << endl;
    for(auto i:Astar)
        cout<< i.first << " " << i.second << endl;
    cout << "All has been printed!" << endl;

    add(4, 5);
    
    return 0;

}
