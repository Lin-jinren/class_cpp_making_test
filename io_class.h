#include <fstream>
#include <iostream>
#include <string.h>

class Student // 定義學生模板，私有屬性身高以及體重
{
public:
  char name[20];
  int id;
  char class_name[20];
  float grade[5];
  int g_len;

  float turn_cm_to_m(float cm){return cm / 100.0;}
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
  Student(float h, float w) : weight(w), height(h) { g_len = 0, id = 0; }

private:
  float weight = 50;
  float height = 170;
};