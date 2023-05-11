#include "io_class.h"
using namespace std;

Student::Student()
{
  name;
  id;
  class_name;
  grade;
  g_len;
}

Student::Student(float g[], int len)
{
  name;
  id;
  class_name;
  grade;
  g_len;
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
  return get_BMI(h, w);
}

float Student::get_BMI(float h, float w)
{
  h = turn_cm_to_m(h);
  return w/(h*h);
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
  cout << "student bmi:" << this->get_BMI() << endl;
  cout << "student grade:";
  print_grade();
}

void Student::print_grade()
{
  for (int i; i < g_len; i++)
  {
    i == g_len-1 ? cout << this->grade[i] << endl : cout << this->grade[i] << ",";
  }
}