
#ifndef STUDENT_MANAGER_H
#define STUDENT_MANAGER_H

#include <string>
#include <vector>
#include <algorithm>

class StudentManager {
    private:
    std::vector<std::string> students;
    static StudentManager* instance;

    StudentManager() {}

public:
    
    StudentManager(const StudentManager&) = delete;
    StudentManager& operator=(const StudentManager&) = delete;

   
    static StudentManager* getInstance() {
        if (!instance) {
            instance = new StudentManager();
        }
        return instance;
    }

    void addStudent(const std::string& name) {
        students.push_back(name);
    }

    void removeStudent(const std::string& name) {
        students.erase(std::remove(students.begin(), students.end(), name), students.end());
    }

    std::vector<std::string> getStudents() const {
        return students;
    }

    void clearAll() {
        students.clear(); 
    }


};

#endif 
