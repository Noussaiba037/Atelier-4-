#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
     string nom;
     int age;
public:
     void set_value(string n, int a){
        nom = n;
        age = a;
        cout<<"Animal : "<<nom<<" Age: "<<age<<endl;
     }
};

class Zebra : public Animal{
public:
    void set_value(string n , int a){
      Animal:: set_value(n,a);
      cout<<"Lieu d'origine: Afrique , Classe : herbivore"<<endl;
    }
      
};

class Dolphin : public Animal{
public:
    void set_value(string n ,int a){
    Animal:: set_value(n,a);
    cout<<"Lieu d'origine: Ocean , Classe : piscivore"<<endl;
    }

};

int main () {
   Zebra zebra1;
   Dolphin dolphin1;

   zebra1.set_value("Zorro" , 5);
   dolphin1.set_value("Ouranos",3);

   return 0;
}
 
