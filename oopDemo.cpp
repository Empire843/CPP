#include <bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;

    public:
        string name;
        Person(string name){
            this->name = name;
        }
        
};
class Student : public Person{
    private:
        string student_code;
        
    public:
        Student(string student_code){
            this->student_code = student_code;
        }
        void show(){
            cout << student_code << endl;
        }
};

int main(){
    Student s1("B19DCCN348");
    Person s2("Kien");
    s1.show();
    return 0;
}
