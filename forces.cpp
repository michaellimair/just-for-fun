/*
PHY1201 Experiment 1
By: Michael & Luka
City University of Hong Kong
*/

#include <iostream>
#include <cmath>

using namespace std;

double KineticEnergy(double mass, double velocity) {
    return 0.5 * mass * pow(velocity, 2);
}

double PotentialEnergy(double mass, double height) {
    return mass * 9.81 * height;
}

int main() {
    cout << "Mass of object: ";
    double mass;
    cin >> mass;

    cout << "Final height: ";
    double heightf;
    cin >> heightf;
    cout << "Initial height: ";
    double heighti;
    cin >> heighti;

    double height = heightf - heighti;

    cout << "Velocity: ";
    double velocity;
    cin >> velocity;

    double Ener_Pot = PotentialEnergy(mass, height);
    double Ener_Kin = KineticEnergy(mass, velocity);

    cout << "The potential energy is " << Ener_Pot << " Joules." << endl;
    cout << "The kinetic energy is " << Ener_Kin << " Joules." << endl;

    double err = abs((Ener_Pot-Ener_Kin)/Ener_Pot) * 100;

    cout << "The error of this experiment is " << err << "%." << endl;

    return 0;
}
