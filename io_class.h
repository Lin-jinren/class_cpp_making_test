#include <fstream>
#include <iostream>
#include <cstdlib>

class Student // 定義學生模板，私有屬性身高以及體重
{
private:
  float weight = 50;
  float height = 170;

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

  void set_weight(float w){weight=w;}
  void set_height(float h){height=h;}
  void show_public_info();
  void print_grade();

  Student();
  ~Student(){};
  Student(float g[], int len);
  Student(float w, float h) : weight(w), height(h) { g_len = 0, id = 0; }
};