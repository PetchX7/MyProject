#include <iostream>
#include <string>
using namespace std;

struct Address {
    int houseNumber;
    int villageNumber;
    string alley;
    string road;
    string province;
    string district;
    string subDistrict;
    string postalCode;
};

struct Student {
    string idCard;
    string title;
    string firstName;
    string lastName;
    string mobile;
    string homePhone;
    string email;
    string grade;
    string school;
    Address address;
};

struct Guardian {
    string title;
    string firstName;
    string lastName;
    string mobile;
    string homePhone;
    string relation;
};

struct StudentInfo {
    Student student;
    Guardian guardian;
};

int main() {
    StudentInfo studentInfo;

    cout << "Enter information for student " << endl;
    cout << "ID: ";
    cin >> studentInfo.student.idCard;
    cout << "Title: ";
    cin >> studentInfo.student.title;
    cout << "First Name: ";
    cin >> studentInfo.student.firstName;
    cout << "Last Name: ";
    cin >> studentInfo.student.lastName;
    cout << "Mobile: ";
    cin >> studentInfo.student.mobile;
    cout << "Home Phone: ";
    cin >> studentInfo.student.homePhone;
    cout << "Email: ";
    cin >> studentInfo.student.email;
    cout << "Grade: ";
    cin >> studentInfo.student.grade;
    cout << "School: ";
    cin >> studentInfo.student.school;

    cout << "Enter address information" << endl;
    cout << "House Number: ";
    cin >> studentInfo.student.address.houseNumber;
    cout << "Village Number: ";
    cin >> studentInfo.student.address.villageNumber;
    cout << "Alley: ";
    cin.ignore();
    getline(cin, studentInfo.student.address.alley);
    cout << "Road: ";
    getline(cin, studentInfo.student.address.road);
    cout << "Province: ";
    getline(cin, studentInfo.student.address.province);
    cout << "District: ";
    getline(cin, studentInfo.student.address.district);
    cout << "SubDistrict: ";
    getline(cin, studentInfo.student.address.subDistrict);
    cout << "Postal Code: ";
    cin >> studentInfo.student.address.postalCode;

    cout << "Enter information for guardian " << endl;
    cout << "Title: ";
    cin >> studentInfo.guardian.title;
    cout << "First Name: ";
    cin >> studentInfo.guardian.firstName;
    cout << "Last Name: ";
    cin >> studentInfo.guardian.lastName;
    cout << "Mobile: ";
    cin >> studentInfo.guardian.mobile;
    cout << "Home Phone: ";
    cin >> studentInfo.guardian.homePhone;
    cout << "Relation: ";
    cin.ignore();
    getline(cin, studentInfo.guardian.relation);

    cout << "\nStudent Information:" << endl;
    cout << "ID: " << studentInfo.student.idCard << endl;
    cout << "Name: " << studentInfo.student.title << " " << studentInfo.student.firstName << " " << studentInfo.student.lastName << endl;
    cout << "Mobile: " << studentInfo.student.mobile << endl;
    cout << "Home Phone: " << studentInfo.student.homePhone << endl;
    cout << "Email: " << studentInfo.student.email << endl;
    cout << "Grade: " << studentInfo.student.grade << endl;
    cout << "School: " << studentInfo.student.school << endl;

    cout << "\nAddress Information:" << endl;
    cout << "House Number: " << studentInfo.student.address.houseNumber << endl;
    cout << "Village Number: " << studentInfo.student.address.villageNumber << endl;
    cout << "Alley: " << studentInfo.student.address.alley << endl;
    cout << "Road: " << studentInfo.student.address.road << endl;
    cout << "Province: " << studentInfo.student.address.province << endl;
    cout << "District: " << studentInfo.student.address.district << endl;
    cout << "SubDistrict: " << studentInfo.student.address.subDistrict << endl;
    cout << "Postal Code: " << studentInfo.student.address.postalCode << endl;

    cout << "\nGuardian Information:" << endl;
    cout << "Name: " << studentInfo.guardian.title << " " << studentInfo.guardian.firstName << " " << studentInfo.guardian.lastName << endl;
    cout << "Mobile: " << studentInfo.guardian.mobile << endl;
    cout << "Home Phone: " << studentInfo.guardian.homePhone << endl;
    cout << "Relation: " << studentInfo.guardian.relation << endl;

    return 0;
}