#include <iostream>
#include <string>

using namespace std;

int main(){
    string date_heure;

    cout<<"Entrer la date et l'heure sous la forme suivante JJMMAAAAHHNN : ";
    cin >> date_heure;

    if(date_heure.length() != 12){
        cout<<"Erreur entrer 12 caracteres sous la forme JJMMAAAAHHNN "<<endl;
        return 1;
    }

    string jour = date_heure.substr(0,2);
    string mois = date_heure.substr(2,2);
    string annee = date_heure.substr(4,4);
    string heure = date_heure.substr(8,2);
    string minute = date_heure.substr(10,2);

    cout<<jour<<"/"<<mois<<"/"<<annee;
    cout<<" A l'Heure: "<<heure<<":"<<minute<<endl;

    return 0;
}