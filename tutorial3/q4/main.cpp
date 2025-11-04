/*
4. Write a program to record the information about courses offered by a university. 
a) Create class course that records the course’s name and code. Create the appropriate accessor and mutator functions. Also, create a friend function that display the course info. 
b) Create class lecturer that records a lecturer’s position (Professor/Associate Professor/Senior Lecturer/Lecturer) and name. Create the appropriate accessor, mutator and utilization functions. 
c) Create class student that records a student’s name, ID, mark and grade. Create the appropriate accessor, mutator and utilization functions. The grade for each student is calculated automatically from the randomly assigned marks (0-100) for each student. 
d) Create a class called core that contains course, lecturer and an array of size 10 student as private data. Create the appropriate accessor, mutator and utilization functions. 
e) Create main() that declares a core course, then prompt the user to key in the students’ info (name and ID). 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

class course{
    private:
        std::string name;
        std::string code;
    public:
        course() {}
        course(std::string n, std::string c) {
            name = n;
            code = c;
        }
        
        std::string getName() {
            return name;
        }
        
        std::string getCode() {
            return code;
        }
        
        void setName(std::string n) {
            name = n;
        }
        
        void setCode(std::string c) {
            code = c;
        }
        
        friend void displayCourse(course &c);
};


void displayCourse(course &c) {
    std::cout << "Course Name is " << c.name << std::endl;
    std::cout << "Code is " << c.code << std::endl;
    std::cout << std::endl;
}

class lecturer{
    private:
        std::string name;
        std::string position;
    public:
        lecturer() {}
        lecturer(std::string n, std::string p) {
            name = n;
            position = p;
        }
        
        std::string getName() {
            return name;
        }
        
        std::string getPosition() {
            return position;
        }
        
        void setName(std::string n) {
            name = n;
        }
        
        void setPosition(std::string p) {
            position = p;
        }
        
        friend void displayLecturer(lecturer &l);
    
};

void displayLecturer(lecturer &l) {
    std::cout << "Lecturer Name is " << l.name << std::endl;
    std::cout << "Position is " << l.position << std::endl;
    std::cout << std::endl;
}

class student{
    private:
        std::string name;
        std::string id;
        int mark = (rand() % 100) + 1;
        char grade;
    public:
        student() {}
        void setGrade(){
            if(mark >= 80){
                grade = 'A';
            } else if(mark >= 70){
                grade = 'B';
            } else if(mark >= 60){
                grade = 'C';
            } else if(mark >= 50){
                grade = 'D';
            } else if(mark >= 40){
                grade = 'F';
            }
        }
        
        student(std::string n, std::string i, int m) {
            name = n;
            id = i;
            mark = m;
            setGrade();
        }
        
        
        friend void displayStudent(student &s);
};

void displayStudent(student &s) {
    std::cout << "Student Name is " << s.name << std::endl;
    std::cout << "ID is " << s.id << std::endl;
    std::cout << "Mark is " << s.mark << std::endl;
    std::cout << "Grade is " << s.grade << std::endl;
    std::cout << std::endl;
}

class core{
    private:
        course c;
        lecturer l;
        student s[10];
        int studentCount;
    public:
        core(std::string courseName, std::string courseCode,
        std::string lecturerName, std::string lecturerPosition){
            c.setName(courseName);
            c.setCode(courseCode);
            l.setName(lecturerName);
            l.setPosition(lecturerPosition);
            studentCount = 0;
        }
        
        void displayCourseInfo(){
            displayCourse(c);
        }
        void displayLecturerInfo(){
            displayLecturer(l);
        }
        
        void addStudent(std::string studentName, std::string studentID, int studentMarks){
            if (studentCount < 10){
                s[studentCount] = student(studentName, studentID, studentMarks);
                studentCount++;
            } else {
                std::cout << "Student count maximum reached!" << std::endl;
            }
        }
        
        void displayAllStudents(int num){
            for(int i = 0; i < num; i ++){
                displayStudent(s[i]);
            }
        }
};

int main() {
    // Write C++ code here
    core test("Programming 2", "KIE1008", "Dr.Wong", "Professor");
    test.displayCourseInfo();
    test.displayLecturerInfo();
    
    int numStudents;
    std::cout << "Enter number of students (max 10): ";
    std::cin >> numStudents;
    
    for (int i = 0; i < numStudents; i ++){
        std::string studentName;
        std::cout << "Enter student name: ";
        std::cin >> studentName;
        
        std::string studentId;
        std::cout << "Enter student ID: ";
        std::cin >> studentId;
        
        int studentMarks;
        std::cout << "Enter student marks: ";
        std::cin >> studentMarks;
        
        test.addStudent(studentName, studentId, studentMarks);
        std::cout << std::endl;
    }
    
    test.displayAllStudents(numStudents);

    return 0;
}

