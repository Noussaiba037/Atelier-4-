#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Vecteur3d {
private:
      float x;
      float y;
      float z;
public:
      Vecteur3d (): x(0), y(0), z(0) {}
      Vecteur3d (float xVal, float yVal, float zVal) : x(xVal), y(yVal), z(zVal) {}

//********************************************************//
          // affichage par valeur
      void affichage() const {
            cout<<"( "<<x<<" , "<<y<<" , "<<z<<" )"<<endl;
      }
          // affichage par adresse
      void affichage(const Vecteur3d *vecteur) const{
            cout<<"( "<<vecteur->x<<" , "<<vecteur->y<<" , "<<vecteur->z<<" )"<<endl;
      }
          // affichage par reference
      void affichage(const Vecteur3d &vecteur) const{
            cout<<"( "<<vecteur.x<<" , "<<vecteur.y<<" , "<<vecteur.z<<" )"<<endl;
      }
//********************************************************//
          // par valeur
      Vecteur3d somme(const Vecteur3d &vec) const {
            Vecteur3d vec3(x + vec.x, y + vec.y, z + vec.z);
            return vec3; 
      }
          // par addresse
      void somme(const Vecteur3d &vec, Vecteur3d *resultat) const{
            resultat->x = x + vec.x;
            resultat->y = y + vec.y;
            resultat->z = z + vec.z;
      }
         // par reference
      void somme(const Vecteur3d &vec, Vecteur3d &resultat){
            resultat.x = x + vec.x;
            resultat.y = y + vec.y;
            resultat.z = z + vec.z;
      }
//********************************************************//
         //par valeur
      float produitScalaire(const Vecteur3d &vec) const {
            float vec3 = (x * vec.x) + (y * vec.y) + (z * vec.z);
            return vec3;
      }
        //par adresse
      void produitScalaire(const Vecteur3d *vec, float *resultat){
            *resultat = (x * vec->x) + (y * vec->y) + (z * vec->z);
      }
        //par reference 
      void produitScalaire(const Vecteur3d &vec, float &resultat) const{
            resultat = (x * vec.x) + (y * vec.y) + (z * vec.z);
      }
//********************************************************//
        //par valeur
      bool coincide(Vecteur3d vec) const {
           return (x == vec.x && y == vec.y && z == vec.z);  
      }
        // par adresse
      bool coincide(Vecteur3d *vec) const{
            return (x == vec->x && y == vec->y && z == vec->z);
      }
        // par reference
      bool coincide(const Vecteur3d &vec) const {
            return (x == vec.x && y == vec.y && z == vec.z);
      }
//********************************************************//
        // par valeur
      float norme() const {
            return sqrt(x*x + y*y + z*z);
      }
        // par adresse 
      void norme(float *resultat) const {
            *resultat = sqrt (x*x + y*y + z*z);
      }
        // par reference
      void norme(float &resultat )const {
            resultat = sqrt (x*x + y*y + z*z);
      }
//********************************************************//
        // par valeur
      Vecteur3d normaux(const Vecteur3d &vec1, const Vecteur3d &vec2) {
            return ( vec1.norme() > vec2.norme()) ? vec1 : vec2 ;
      }
        // par adresse
      void normaux(Vecteur3d *vec1,Vecteur3d *vec2, Vecteur3d **resultat) const{
            *resultat = ( vec1->norme() > vec2->norme()) ? vec1 : vec2 ;
      }
        // par reference
      void normaux(const Vecteur3d &vec1, const Vecteur3d &vec2, Vecteur3d &resultat) const{
            resultat = (vec1.norme() > vec2.norme()) ? vec1 : vec2;
      }
};

int main () {
      Vecteur3d v1(4,5,9);
      Vecteur3d v2(8,5,6);
       
      v1.affichage();
      v2.affichage();

      Vecteur3d somme = v1.somme(v2);
      cout <<"La somme de deux vecteur est  : ";
      somme.affichage();


      float pS= v1.produitScalaire(v2);
      cout <<"Produit scalaire de deux vecteur est : " <<pS<<endl;

      cout <<"les deux vecteurs coincident :"<<(v1.coincide(&v2) ? "Oui" : "Non")<<endl;

      float norme;
      v1.norme(norme);
      cout<<"Norme de v1 : "<<norme<<endl;

      Vecteur3d resultat;
      v1.normaux(v1,v2,resultat);
      cout << "Le vecteur avec la plus grande norme est: ";
      resultat.affichage();

      return 0;
}
