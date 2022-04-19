#include <fstream>
#include <iostream>
#include "DataRead.h"


void DataRead::readRec(string filename, int uavNums) {
 //   filename = path + filename;
    ifstream in(path+filename);
    string line;
    if(in) // 有该文件
    {
        getline (in, line);
        while (getline (in, line)) // line中不包括每行的换行符
        {
            std::cout << line << endl;
        }
    }
    in.close();
}