#include "io_class.h"
using namespace std;

Student::Student()
{
    name[20];
    id;
    class_name[20];
    bmi;
    grade[5];
}

Student::Student(float g[], int len){
    name[20];
    id;
    class_name[20];
    bmi;
    grade[len];
}

float Student::turn_cm_to_m(float){
    
}

float Student::get_BMI(){

}

float Student::get_BMI(float, float){

}

float Student::get_grade_avg(){

}

void Student::set_weight(float){

}

void Student::set_height(float){

}

void Student::show_public_info(){
    cout << "student name:" <<this->name << endl;
    cout << "student id:" << this->id << endl;
    cout << "student class:"<< this->class_name << endl;
    cout << "student bmi:"<< this->bmi << endl;
    print_grade();

}

void Student::print_grade(){
    for(int i; i < 5 ;i++){
        i == 4 ? cout<< this->grade[i] << endl : cout << this->grade[i] << "," ; 
    }
}