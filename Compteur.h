//
// Created by Emmanuel ADEKPLOVI on 10/11/20.
//

#ifndef PROJET10_COMPTEUR_H
#define PROJET10_COMPTEUR_H


class Compteur {
private:
    double value = 0;

    void set_value(double value){
        this->value  =value;
    }

    double get_value(){
        return this->value;
    }


public:
    Compteur(int value){
        this->set_value(value);
    }

   void incrementCompteur(){
        cout << "Ceci est le compteur :"<<endl;
        double old_value = this->get_value();
        for (int i=0; i++ , i<= 10;){
            old_value +=1;
            cout<<old_value<< endl;
        }
        cout << this->get_value() <<endl;
    }

    void decrementCompteur(){
        cout << "Ceci est le décompteur :"<<endl;
        double old_value = this->get_value();
        for (int i=20; i-- , i>= 0;){
            old_value -=1;
            cout<<old_value<< endl;
        }
        cout << this->get_value() <<endl;
    }
};


#endif //PROJET10_COMPTEUR_H
