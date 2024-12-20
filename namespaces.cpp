#include <iostream>

namespace first{
    int x = 1;
}

namespace second {
    int x = 2;
}

int main (){
    using namespace first;
    //Namespace = Provides a solution for preventing name conflicts
    //            in large projects. Each entity needs a unique name.
    //            A namespace allows for identically named entities
    //            as long as the namespaces are different.

    
    std::cout << x << '\n';
    std::cout << second::x;


    return 0;
}