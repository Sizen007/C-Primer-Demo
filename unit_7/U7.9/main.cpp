#include <iostream>
using namespace std;
const int SLEN = 30;

struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[],int n){
    int count = 0;
    for(int i = 0;i<n;i++){
        cout<<"Please cin No."<<i<<" information: "<<endl;
        cin>>pa[i].fullname;
        cin>>pa[i].hobby;
        cin>>pa[i].ooplevel;
        cout<<"Finished"<<endl;
    }
    count++;
    return count;
}

void display1(student st){
    cout<<"display1"<<endl;
    cout<<st.fullname<<" "<<st.hobby<<" "<<st.hobby<<endl;
}

void display2(const student *st){
    cout<<"display2"<<endl;
    cout<<st->fullname<<" "<<st->hobby<<" "<<st->hobby<<endl;
}

void display3(student pa[],int n){
    cout<<"display3"<<endl;
    for(int i = 0; i < n; i++){
        cout<<"The information of "<<i<<" is "<<endl;
        cout<<pa[i].fullname<<" "<<pa[i].hobby<<" "<<pa[i].ooplevel<<endl;
    }
}

int main() {
    cout<<"Enter class size";
    int class_size;
    cin>>class_size;

    while (cin.get() != '\n')
        continue;

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu,class_size);
    for(int i = 0;i < entered;i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete [] ptr_stu;
    cout<<"Done\n";
    return 0;
}
