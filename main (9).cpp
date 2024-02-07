// polymorphism (compile time)
// compile time-> function overloading(number of func. with same name but perform differently acc. to the arguments passed)(args. paased can be differnt type or number of args)
// function name is same--> add and arguments passed are different.
// now here sum is a userdefined datatype
#include <iostream>

using namespace std;

class Sum{
    
    public:
    void add(int x,int y){
        int sum=x+y;
        cout<<sum<<endl;
    }
    void add(int x,int y,int z){
        int sum=x+y+z;
        cout<<sum<<endl;
    }
    void add(float x,float y){
        float sum=x+y;
        cout<<sum<<endl;
    }
};
int main()
{
    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float(2.4),float(3.3));

    return 0;
}
