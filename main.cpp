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
  float arr[5] = {45.7, 80.9, 94.2, 89.6, 82.4};
  for (int i = 0; i < Adam->g_len; i++)
  {
    *(Adam->grade + i) = arr[i];
  }
  Adam->set_height(53);
  Adam->set_weight(170);

  Student *Eva;
  Eva = new Student(49, 165);
  strcpy_s(Eva->name, sizeof(Eva->name), "Eva");
  Eva->id = 11125172;
  strcpy_s(Eva->class_name, sizeof(Eva->class_name), "BME_freshmen_B");
  Eva->g_len = 5;
  float arr[5] = {60.7, 87.9, 78.2, 66.6, 97.4};
  for (int i = 0; i < Eva->g_len; i++)
  {
    Eva->grade[i] = arr[i];
  }

  float arr[5] = {60.7, 87.9, 78.2, 66.6, 97.4};
  Student Olive(arr, 5);
  strcpy_s(Olive.name, sizeof(Olive.name), "Olive");
  Olive.id = 11125131;
  strcpy_s(Olive.class_name, sizeof(Olive.class_name), "BME_freshmen_A");
  Olive.set_height(59);
  Olive.set_weight(172);


  Student Molly(70,160);
  strcpy_s(Molly.name, sizeof(Molly.name), "Molly");
  Molly.id = 11125156;
  strcpy_s(Molly.class_name, sizeof(Molly.class_name), "BME_freshmen_B");
  Molly.g_len = 5;
  float arr[5] = {70.6, 60.8, 87.2, 55.5, 79.4};
  for (int i = 0; i < Molly.g_len; i++)
  {
    Molly.grade[i] = arr[i];
  }

  ofstream ofile("student5.dat", ios::binary);
  ofile.write((char *)&Amy, sizeof(Amy));
  ofile.write((char *)Adam, sizeof(*Adam));
  ofile.write((char *)Eva, sizeof(*Eva));
  ofile.write((char *)&Olive, sizeof(Olive));
  ofile.write((char *)&Molly, sizeof(Molly));
  ofile.close();

  cout << "\n=======the file is written=======\n";

  ifstream ifile("student5.dat", ios::binary);
  ifile.read((char *)&Amy, sizeof(Amy));
  ifile.read((char *)Adam, sizeof(*Adam));
  ifile.read((char *)Eva, sizeof(*Eva));
  ifile.read((char *)&Olive, sizeof(Olive));
  ifile.read((char *)&Molly, sizeof(Molly));
  ifile.close();

  Amy.show_public_info();
  Adam->show_public_info();
  Eva->show_public_info();
  Olive.show_public_info();
  Molly.show_public_info();

  delete Adam;
  Adam = NULL;
  delete Eva;
  Eva = NULL;

}