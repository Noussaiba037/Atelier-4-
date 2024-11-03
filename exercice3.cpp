#include <iostream>
#include <string>

using namespace std;

class  Personne
{
private:
    string nom;
    string prenom;
    string date_naissance;
public:
  Personne(string xn, string xpr, string xdate) : nom(xn), prenom(xpr), date_naissance(xdate) {}
  void afficher(){
    cout<<"Nom : "<<nom<<" , Prenom: "<<prenom<<" , Date de naissance : "<<date_naissance<<endl;
  }
};

class Employe : public Personne
{
private:
       double salaire;
public:
       Employe(string xn, string xpr, string xdate, double xsal)
              : Personne(xn, xpr, xdate), salaire(xsal) {}
       void afficher(){
        Personne::afficher();
        cout<<"Salaire : "<<salaire<<endl;
       }     
};

class Chef : public Employe
{
private:
    string service;
public:
    Chef(string xn, string xpr, string xdate, double xsal, string xser)
        : Employe(xn, xpr, xdate, xsal), service(xser) {}
    void afficher(){
        Employe::afficher();
        cout<<"Service : "<<service<<endl;
    }
    
};

class Directeur : public Chef
{
private:
    string societe;
public:
    Directeur(string xn, string xpr, string xdate, double xsal, string xser, string xsoc)
            :Chef(xn, xpr, xdate, xsal, xser), societe(xsoc){}
    void afficher(){
        Chef::afficher();
        cout<<"Societe : "<<societe<<endl;
    }
};

int main(){
    Personne p("El","Sara","06/05/1990");
    p.afficher();

    Employe e("al","Ahmed","09/04/1989",50000);
    e.afficher();

    Chef c("Il","Marwa","03/07/1986",100000,"Design");
    c.afficher();

    Directeur d("Bl","Ilyas","10/03/1981",500000,"Dev","Lenovo");
    d.afficher();

    return 0;
}






