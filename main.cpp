#include <iostream>
#include "io_class.h"

using namespace std;

int main()
{
  Student Amy;

  ifstream ifile("student_amy.dat", ios::binary);
  ifile.read((char *)&Amy, sizeof(Amy));
  ifile.close();
  Amy.show_public_info();

  Student *Adam;
  Adam = new Student;
  strcpy_s(Adam->name, sizeof(Adam->name), "Adam");
  Adam->id = 11125171;
  strcpy_s(Adam->class_name, sizeof(Adam->class_name), "BME_freshmen_A");
  Adam->g_len = 5;
  float arr_1[5] = {45.7, 80.9, 94.2, 89.6, 82.4};
  for (int i = 0; i < Adam->g_len; i++)
  {
    *(Adam->grade + i) = arr_1[i];
  }
  Adam->set_height();
  Adam->set_weight();

  Student *Eva;
  Eva = new Student;

  Student Olive;

  Student Molly;
}
// 解決問題: 1. 解構元 2. 使用原版 不使用函數