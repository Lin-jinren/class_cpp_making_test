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

Student::Student(float g[], int len)
{
  name[20];
  id;
  class_name[20];
  bmi;
  grade[len];
}

float Student::turn_cm_to_m(float cm)
{
  cm = cm / 100.0;
  return cm;
}

float Student::get_BMI()
{
  float h = this->height;
  float w = this->weight;
  bmi = get_BMI(h, w);
  return bmi;
}

float Student::get_BMI(float h, float w)
{
  h = turn_cm_to_m(h);
  bmi = w/(h*h);
  return bmi;
}

float Student::get_grade_avg()
{
  float temp = 0.0;
  for(int i = 0; i < g_len; i++){
    temp += grade[i];
  }
  temp = temp / g_len;
  return temp;
}

void Student::show_public_info()
{
  cout << "student name:" << this->name << endl;
  cout << "student id:" << this->id << endl;
  cout << "student class:" << this->class_name << endl;
  cout << "student bmi:" << this->bmi << endl;
  print_grade();
}

void Student::print_grade()
{
  for (int i; i < g_len; i++)
  {
    i == g_len-1 ? cout << this->grade[i] << endl : cout << this->grade[i] << ",";
  }
}