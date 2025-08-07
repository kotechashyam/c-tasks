#include<iostream>
 
using namespace std;

class student
{
    private:
        int marks,rno;
        char nm[10];
    public:
        void stud1(int marks,char nm[])
        {
            if(marks>=420 &&marks<=500)
    {
        printf("\nGrade A");
    }
    else if(marks>=340 &&marks<420)
    {
        printf("\nGrademarks");
    }
    else if(marks>=260 &&marks<340)
    {
        printf("\nGrade C");
    }
    else if(marks>=180 &&marks<260)
    {
        printf("\nGrade D");
    }
    else
    {
        printf("\nFail");
    }
            cout<<"Name "<<nm<< " Marks "<<marks;
        }
};
int main()
{
    int a;
    char b[10]="HET";
    student s1;
    cout<<"Enter Total marks from 500: ";
    cin>>a;
    s1.stud1(a,b);
}