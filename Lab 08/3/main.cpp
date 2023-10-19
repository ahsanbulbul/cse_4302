#include "Employee"
#include "DerivedClasses"
#include "implementations.cpp"

int main(){
    Employee batman("Batman", "B001", 10000, true);

    batman.present.setAddress("Batcave", "Gotham City", "Gotham", 12345, "Central", "USA");
    batman.permanent.setAddress("Bruce Wayne Manor", "Gotham City", "Gotham", 54321, "West", "USA");
    batman.personal.setContactInfo("123-456-7890", "987-654-3210", "batman@batnet.com");
    batman.emergency.setContactInfo("986-912-1234", "Alfred Pennyworth", "alfred@secret.tor");

}