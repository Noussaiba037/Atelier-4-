#include <iostream>


using namespace std;
class Test
{
private:
    static int temp;
public:
    void call(){
        temp++;
        cout<<"La fontion call a ete appelee "<<temp<<" fois!"<<endl;
    }
};

int Test::temp=0;

int main(){
    Test myTest;

    myTest.call();
    myTest.call();
    myTest.call();
    myTest.call();

    return 0;
}
