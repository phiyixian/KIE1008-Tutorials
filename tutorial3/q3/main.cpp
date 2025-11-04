// Online C++ compiler to run C++ program online
/*
(Friend and Proxy Classes) Write a program to keep students’ information for a university
a) Create a proxy class student, which contains the following data members: name, age
and gender, and the necessary (get and display) functions.
b) Create a class undergrad, which uses proxy class student.
c) Create a class postgrad, which uses proxy class student.
d) Create a friend function to modify the age of the undergrad and postgrad students.
Demonstrate your program. */

#include <iostream>

class student {
    private:
        std::string name;
        int age;
        std::string gender;
    public:
        // Constructor function
        student(std::string n, int a, std::string g):
        name(n), age(a), gender(g) {}
        
        // GET functions
        std::string getName() {
            return name;
        }
        
        int getAge() {
            return age;
        }
        
        std::string getGender() {
            return gender;
        }
        
        // Display function
        void displayStudent() {
            std::cout << "Student Name is " << name << std::endl;
            std::cout << "Age is " << age << std::endl;
            std::cout << "Gender is " << gender << std::endl;
        }
        
        friend void modifyAge(student &s, int newAge);
};

void modifyAge(student &s, int newAge) {
    s.age = newAge;
}

class undergrad {
    private:
        student studentInfo;
        std::string major;
    public:
        undergrad(std::string n, int a, std::string g, std::string m):
        studentInfo(n, a, g), major(m) {}
        
        void displayUndergrad() {
            studentInfo.displayStudent();
            std::cout << "Major is " << major << std::endl;
            std::cout << std::endl;
        }
        
        friend void modifyAge(undergrad &u, int newAge);
};

void modifyAge(undergrad &u, int newAge) {
    modifyAge(u.studentInfo, newAge);
};

int main() {
    // Write C++ code here
    undergrad alice("Alice", 21, "Female", "Engineering");
    alice.displayUndergrad();
    modifyAge(alice, 22);
    alice.displayUndergrad();

    return 0;
}