#include<bits/stdc++.h>
using namespace std;

typedef tuple<double, char, string> student; //dinh nghia kieu student

//Ham tao va tra ve tuple gom 3 thanh vien (double, char, string)
tuple<double, char, string> get_student(int id)
{
    switch(id){
        case 0: return make_tuple(3.4, 'A', "Nguyen Van Binh");
        case 1: return make_tuple(2.5, 'C', "Le Hong Ha");
        case 2: return make_tuple(1.8, 'D', "Nguyen Duc Ha");
        default: throw invalid_argument("Sai id");
    }
}
void viewStudent(student sv){
     cout << "ID: 0, "
              << "GPA: " << get<0>(sv) << ", "
              << "grade: " << get<1>(sv) << ", "
              << "name: " << get<2>(sv) << endl;
}

int main()
{
    auto student0 = get_student(0); // khai bao bien bang auto
    viewStudent(student0);

    double tb;
    char hang;
    string ten;
    tie(tb, hang, ten) = get_student(1);
    cout << "ID: 1, "
              << "GPA: " << tb << ", "
              << "grade: " << hang << ", "
              << "name: " << ten << endl;

    auto [ tb2, hang2, ten2 ] = get_student(2);
    cout << "ID: 2, "
              << "GPA: " << tb2 << ", "
              << "grade: " << hang2 << ", "
              << "name: " << ten2 << endl;
    return 0;
}
