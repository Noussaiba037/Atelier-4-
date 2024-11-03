#include <iostream>

using namespace std;

struct Element
{
    int val;
    struct Element *suivant;
    Element (int valeur): val(valeur), suivant(nullptr) {}
};

class Liste
{
private:
    Element *debut;
public:
    Liste(): debut(nullptr) {}
    void ajouter(int val);
    void supprimer();
    void afficher() const;
    ~Liste
();
};

void Liste::ajouter(int val){
    Element *nouveau_elm = new Element(val);
    nouveau_elm->suivant = debut;
    debut = nouveau_elm;
}
void Liste::supprimer(){
    Element *temp;
    if(debut != nullptr){
        temp = debut;
        debut = temp->suivant;
        delete temp;
    }
 
}
void Liste::afficher() const{
    Element *temp =debut;
    while(temp != nullptr){
        cout<< temp->val <<" --> ";
        temp = temp->suivant;
    }
    cout<<"\n";
}
Liste::~Liste()
{
    while (debut != nullptr)
    {
        supprimer();
    }  
}
int main (){
    Liste myListe;

    myListe.ajouter(15);
    myListe.ajouter(8);
    myListe.ajouter(23);
    myListe.ajouter(3);

    cout <<"Affichage : "<<endl;
    myListe.afficher();
    
    myListe.supprimer();

    cout<<"Affichage apres la supression : "<<endl;
    myListe.afficher();

    return 0;
}
