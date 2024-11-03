#include <iostream>

using namespace std;


class Fichier
{
private:
    char *P;
    size_t longueur;
public:
    Fichier() : P(nullptr), longueur(0){}
    
    void Creation(size_t taille){
       longueur = taille;
       P = new char[longueur];
    }
    void Remplit() {
        if (P != nullptr) {
            for (size_t i = 0; i < longueur; ++i) {
                P[i] = 'A' + (i % 26);
            }
        }
    }
    void Affiche() const {
        if (P != nullptr) {
            cout << "Contenu du fichier : ";
            for (size_t i = 0; i < longueur; ++i) {
                cout << P[i]; 
            }
            cout << endl;
        }
    }
    ~Fichier(){
        delete[] P;
    }
};

int main() {

    Fichier* fichier = new Fichier();

    fichier->Creation(30);

    fichier->Remplit();

    fichier->Affiche();

    delete fichier; 

    return 0;
}
