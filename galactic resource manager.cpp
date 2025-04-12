#include <iostream>
using namespace std;
//Resource Input :
//Ask the player to input the empire’s monthly production and consumption for :
   // Minerals
   // Energy
   // Alloys
   // Net Resource Calculation :
//For each resource, calculate the net production(production minus consumption).
//Display the net values.
//Resource Growth Over Time :
//Based on the net production, calculate total resources accumulated after 6 months and 12 months.
//Alloy Conversion :
//Use 50 units of Minerals to produce 10 units of Alloys.
//Calculate how many additional Alloys can be produced from surplus Minerals after 6 and 12 months.
int main()

{
    double minerals, mineralsConsumtion;
    double energy, energyConsumtion;
    double alloys, alloysConsumtion;
    cout << (" Welcome to Galactic Resource Manager! ");
    cout << " Enter your monthly production of minerals: ";
    cin >> minerals;
    cout << " Enter your monthly prodcution of energy: ";
    cin >> energy;
    cout << " Enter your monthly production of alloys: ";
    cin >> alloys;

    cout << " Enter your monthly consumption of minerals: ";
    cin >> mineralsConsumtion;
    cout << " Enter your monthly consumption of energy: ";
    cin >> energyConsumtion;
    cout << " Enter your monthly consumption of alloys: ";
    cin >> alloysConsumtion;


    double netMinerals = minerals - mineralsConsumtion;
    double netEnergy = energy - energyConsumtion;
    double netAlloys = alloys - alloysConsumtion;
    cout << " Net minerals: " << netMinerals << endl;
    cout << " Net energy: " << netEnergy << endl;
    cout << " Net alloys: " << netAlloys << endl;

    double totalMinerals = netMinerals * 6;
    double totalEnergy = netEnergy * 6;
    double totalAlloys = netAlloys * 6;


    cout << " Total energy after 6 months: " << totalEnergy << endl;
    cout << " Total minerals after 6 months: " << netMinerals * 6 << endl;
    cout << " Total alloys after 6 months: " << netAlloys * 6 << endl;
    cout << " Total energy after 12 months: " << totalEnergy * 12 << endl;
    cout << " Total minerals after 12 months: " << netMinerals * 12 << endl;
    cout << " Total alloys after 12 months: " << netAlloys * 12 << endl;
    cout << " You can produce " << (netMinerals / 50) * 10 << " Alloys from minerals" << endl;
    cout << " You can produce " << (netMinerals / 50) * 10 * 6 << " Alloys from minerals after 6 months" << endl;
    cout << " You can produce " << (netMinerals / 50) * 10 * 12 << " Alloys from minerals after 12 months" << endl;

    return 0;



}