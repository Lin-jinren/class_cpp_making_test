#include <iostream>
#include "io_class.h"

using namespace std;

int main(){
    Student Amy;

    ifstream file("student_amy.dat",ios::binary);
    file.read((char*)&Amy, sizeof(Amy));
    Amy.show_public_info();
    file.close();
    
}