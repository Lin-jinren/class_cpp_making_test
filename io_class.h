#include <fstream>
#include <iostream>
#include <cstdlib>

class Student //定義學生模板，私有屬性身高以及體重
{
private:
    float weight;
    float height;
public:
    char name[20];
    int id;
    char class_name[20];
    float grade[5];
    int g_len;

    float turn_cm_to_m(float);
    float get_BMI();
    float get_BMI(float, float);
    float get_grade_avg();

    void set_weight(float);
    void set_height(float);
    void set_public_info();
    void print_grade();

    Student();
    ~Student();
    Student(float g[], int len);
    Student(float w, float h) :weight(w), height(h) {g_len = 0, id = 0;}
    
};