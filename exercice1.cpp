#include <iostream>

using namespace std;

class Complexe {
private:
      double real;
      double imag;
public:
       Complexe (): real(0),imag(0) {}
       Complexe(double r, double i) : real(r), imag(i) {}

       void addition(const Complexe &nombre, Complexe &resultat){
        resultat.real = real + nombre.real ;
        resultat.imag = imag + nombre.imag ;
       }
       void soustraction(const Complexe &nombre, Complexe &resultat){
        resultat.real = real - nombre.real;
        resultat.imag = imag - nombre.imag;
       }
       void multiplication(const Complexe &nombre, Complexe &resultat){
        resultat.real = (real * nombre.real) - (imag * nombre.imag);
        resultat.imag = (imag * nombre.imag) + (real * nombre.real);
       }
       void division(const Complexe &nombre, Complexe &resultat) {
        double denom = (nombre.real * nombre.real) + (nombre.imag * nombre.imag);
        resultat.real = (real*nombre.real + imag*nombre.imag) / denom;
        resultat.imag = (imag*nombre.imag - real*nombre.real) / denom;
       }
       bool egalite(const Complexe &nombre){
        if(real == nombre.real && imag == nombre.imag)
           return true;
        else 
           return false;
       }
       void display(){
        if(imag >= 0){
            cout<< real <<" + "<< imag <<"i"<<endl;
        }
        else{
            cout<< real <<" - "<< -imag <<"i"<<endl;
        }
       }

};
int main() {
    double r1,r2;
    double i1,i2;

    
    cout<<"Entrer la partie reelle du premier nombre : ";
    cin>>r1;
    cout<<"Entrer la partie imaginaire du premier nombre : ";
    cin>>i1;
    cout<<"\n\n";
    cout <<"Enter la partie reelle du deuxieme nombre :  ";
    cin>>r2;
    cout <<"Entrer la partie imaginaire du deuxieme nombre :";
    cin>>i2;

    Complexe c1(r1,i1);
    Complexe c2(r2,i2);
    Complexe resultat;
    

    int choix = 0;
    do
    {
        cout<<"\n***Menu des operations sur les nombres complexes***\n";
        cout <<"choix 1 : Egalite"<<endl;
        cout <<"choix 2 : Addition"<<endl;
        cout <<"choix 3 : Soustraction"<<endl;
        cout <<"choix 4 : Multiplication"<<endl;
        cout <<"choix 5 : Division"<<endl;
        cout <<"choix 6 : Quiter le menu"<<endl;
        cout <<"\n\nChoisir une operation : ";
        cin >>choix;
        cout <<"\n\n";

        switch (choix)
        {
        case 1:
            if(c1.egalite(c2)){
                cout<<"les deux nombres complexes sont egaux!\n";
            }
            else
               cout <<"Les deux nombres ne sont pas egaux !!\n";
            break;
        case 2:

            c1.addition(c2,resultat);
            cout<<"Voila l'addition des deux nombres complexes: ";
            resultat.display();
            break;

        case 3:

            c1.soustraction(c2,resultat);
            cout <<"Voila la soustraction des deux nombres complexes: ";
            resultat.display();
            break;

        case 4:

            c1.multiplication(c2,resultat);
            cout <<"Voila la multiplication des deux nombres complexes: ";
            resultat.display();
            break;

        case 5:
            if(r2 == 0 && i2 == 0){
                cout <<"division par zero est impossible !!!";
            }else{
            c1.division(c2,resultat);
            cout <<"Voila la division de deux nombres complexes: ";
            resultat.display();
            }
            break;

        case 6:
            cout <<"Sortie de menu !"<<endl;
            break;

        default:
            cout <<"Erreur!! "<<endl;
            break;
        }
    } while (choix != 6);
    
    return 0;
}