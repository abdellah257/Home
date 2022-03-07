#include <random>
#include <iostream>
#include <vector>


using namespace std;

class Particule {
    public :
        double position;
        double vitesse;
        double masse;
        double id;
        string categorie;
        double force;
        void initialize(){

        }
};

int main(){
    vector<Particule> particleList;
    auto it = particleList.begin();
    for (int i = 0; i< 5; i++){
        random_device rd;
        mt19937 mt(rd());
        uniform_real_distribution<double> dist(0.0, 1.0);
        Particule x;
        cout << i << " " << dist(mt) << endl;
        x.position = dist(mt);
        x.vitesse = dist(mt);
        x.masse = dist(mt);
        x.id = i;
        x.categorie = i;
        x.force = dist(mt);
        particleList.insert(it, x);
    }

}