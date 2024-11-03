#include <iostream>
#include <vector>


using namespace std;

class  Pile
{
public:
  vector<int> valeur;

  Pile(){}
  void push(int val){
    valeur.push_back(val);
  }
  int pop(){
    if(valeur.empty()){
        cout<<"La pile est vide "<<endl;
        return -1;
    }
    int val = valeur.back();
    valeur.pop_back();
    return val;
  }

};

int main(){
    Pile p1;
    Pile p2;

    p1.push(5);
    p1.push(6);
    p1.push(21);

    p2.push(9);
    p2.push(17);
    p2.push(15);

    cout<<"Depiler la pile p1 : ";
    while(!p1.valeur.empty()){
        cout<<p1.pop()<<" ";
    }

    cout<<"\n\nDepilage de la pile p2: ";
    while(! p2.valeur.empty()){
        cout<<p2.pop()<<" ";
    }

    return 0;
}
