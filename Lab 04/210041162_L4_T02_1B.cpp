#include <iostream>
#include <string>
using namespace std;

class Aircraft{
    private: 
        int flight_no;
        string destination;
        float distance, maxFuelCap;

        double calFuel(){
            if(distance<=1000)
                return 500;
            else if (distance<=2000)
                return 1100;
            else return 2200;
        }
    public:
        void FeedInfo(){
            float val;
            string str;

            cout<<"\nFlight Info System: Pilot Input\n==============================="<<endl;
                cout<<"Flight No:";
                cin>>val;
                flight_no=int(val);

                cout<<"Destination:";
                cin>>str;
                destination=str;

                cout<<"Distance:";
                cin>>val;
                distance=val;

                cout<<"Max Fuel Capacity:";
                cin>>val;
                maxFuelCap=val;
        }
        void ShowInfo(){
            cout<<"\nFlight Info System\n====================="<<endl;
            cout<<"Flight No:\t"<<flight_no<<endl;
            cout<<"Destination:\t"<<destination<<endl;
            cout<<"Distance:\t"<<distance<<endl;
            cout<<"Max Fuel Capacity:\t"<<maxFuelCap<<endl;
            cout<<calFuel();
            if(calFuel()<=maxFuelCap){
                cout<<"Fuel Capacity is fit for this flight distance"<<endl;
            }
            else cout<<"Not sufficient Fuel Capacity for this flight"<<endl;
        }
        
};
int main(){
    Aircraft mockbird;
    // mockbird.ShowInfo();
    mockbird.FeedInfo();
    mockbird.ShowInfo();
}