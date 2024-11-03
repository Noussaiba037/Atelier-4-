#include <iostream>
#include <vector>

using namespace std;

class  Traitement
{
private:
    vector<int> entiers;
public:
    void Initialise(){
        int num;
        for(int i=1; i<= 15; i++){
            while(true) {
                cout<<"Entrer un nombre entier pair et non nul : "<< i <<" : " ;
                cin>> num;
                if(num == 0 || num % 2 != 0){
                    cout<<"ereur ! veuillez entrer un nombre entier pair et non nul !!"<<endl;
                }
                else{
                    entiers.push_back(num);
                    break;
                }
            }
        }
    }
    void show(int temp = 0){
        if(temp < entiers.size()){
            cout<<entiers.at(temp)<< " ";
            show(temp + 1);
        }
    }
    friend double moyenne(Traitement vec){
        if(vec.entiers.empty()){return 0;}

        double somme = 0;
        for(int val : vec.entiers){
            somme += val;
        }
        return somme / vec.entiers.size();

    }
    friend double median(Traitement vec){
        if(vec.entiers.empty()){return 0;}

        size_t taille = vec.entiers.size();
        if(taille % 2 == 0){
            return (vec.entiers.at(taille/2-1) + vec.entiers.at(taille/2))/2;
        }else{
            return(vec.entiers.at(taille/2));
        }

    }
  
};
int main(){
    Traitement trait;
    trait.Initialise();
    cout<<"voila les entiers declares : "<<endl;
    trait.show();

    cout<<"\n\nLa moyenne est : "<<moyenne(trait)<<endl;
    cout <<"Le median est : "<<median(trait)<<endl;

    return 0;
}
 