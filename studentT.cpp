
#include <gtest/gtest.h>
#include "studentManager.cpp"

TEST(StudentTest, AddNameTest) {
    Student student;
    student.add_name("Alice");
    student.add_name("Bob");

    std::vector<std::string> expected = {"Alice", "Bob"};
    EXPECT_EQ(student.get_names(), expected);
}

TEST(StudentTest, RemoveExistingNameTest) {
    Student student;
    student.add_name("Alice");
    student.add_name("Bob");

    student.remove_name("Alice");

    std::vector<std::string> expected = {"Bob"};
    EXPECT_EQ(student.get_names(), expected);
}




