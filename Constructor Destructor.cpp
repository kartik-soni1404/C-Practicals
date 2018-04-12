#include <iostream>
using namespace std;

class Test{
    private:
    int a,b,c;
    char x;
    public:
    //Default constructor
    Test(){
        
        cout<<"\n Inside default constructor ";
    }
    //Parameterized constructor
    Test(char A){
        
        cout<<"\n Inside parameterized  constructor ";
    }
    //Destructor 
    ~Test(){
        
        cout<<"\n Inside destructor ";
    }
    
};
int main()
{
    
    //creating a new object of class Test
    Test x;
    //calls parameterized constructor
    Test y('A');

    return 0;
}
