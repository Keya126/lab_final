#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    std::vector<std::string> names;

public:
    Student(std::string name){}
   void add_name(std::string name){
    names.push_back(name);
   }
    void remove_name(const std::string& name) {
        // Remove the first occurrence of the name
        for (auto it = names.begin(); it != names.end(); ++it) {
            if (*it == name) {
                names.erase(it);
                std::cout << "Removed: " << name << std::endl;
                return;
            }
        }
        std::cout << "Name not found: " << name << std::endl;
    }
   
};





