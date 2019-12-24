/******************************************************************************/
/*  NAME: TheLuminousCoder                                                    */
/*  FILE: DistanceTraveled.cpp                                                */
/*  DATE: Dec 23rd 2019                                                       */
/*  GOAL: Calculate and print the distance a vehicle has traveled based on    */
/*        its speed in mph and the hour(s) it has traveled.                   */     
/******************************************************************************/

//Preprocessor directives
#include <iostream>
using namespace std;

//Main functions
int main()
{
    //Variable declarations
    int vehicleSpeed, hoursTraveled, hour, distanceTraveled;
    
    //Input
    cout << "What is the speed of the vehicle in mph? ";
    cin >> vehicleSpeed;
    while(vehicleSpeed < 0){
        cout << "Please enter a speed greater than or equal to zero. ";
        cin >> vehicleSpeed;
    }
    cout << "How many hours has it traveled? ";
    cin >> hoursTraveled;
    while(hoursTraveled < 1){
        cout << "Please enter an hour greater than zero. ";
        cin >> hoursTraveled;
    }
    
    cout << "\nHour \t\tDistance Traveled (Miles)" << endl;
    cout << "------------------------------" << endl;
    
    for (hour = 1; hour <= hoursTraveled; hour++){
        //Process 
        distanceTraveled = (vehicleSpeed * hour);
        //Output
        cout << hour << "\t\t" << distanceTraveled << endl;
    }
    return 0;
}
