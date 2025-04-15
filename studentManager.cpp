#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    std::vector<std::string> Name;

public:
    Student(std::string name){}
   void add_name(std::string name){
    Name.push_back(name);
   }
   void remove_name(std::string name){
    Name.pop_back();
   }
   
   

};




