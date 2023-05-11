#include <iostream>
#include "io_class.h"

using namespace std;

int main(){
    Student Amy;

    ifstream file("student_amy.dat",ios::binary);
    file.read((char*)&Amy, sizeof(Amy));
    file.close();
    Amy.show_public_info();
    
}
//解決問題: 1. 解構元 2. 使用原版 不使用函數