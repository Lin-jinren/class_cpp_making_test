#include "io_class.h"

Student::Student()
{
    name = "";
    id = 0;
    class_name = "";
    bmi = 0;
    for (int i = 0; i < 5; i++) {
        grade[i] = 0.0;
    }
}

Student::~Student()
{

}

Student::Student(float g[], int len){
    
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

void Student::set_public_info(){

}

void Student::print_grade(){

}