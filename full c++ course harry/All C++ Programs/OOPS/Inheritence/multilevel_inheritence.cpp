#include<iostream>
using namespace std;

class student{
    protected:
        int roll_num;
    public:
        void set_roll(int);
        void get_roll();
};

void student :: set_roll(int r){
    roll_num=r;
}
void student :: get_roll(){
    cout<<"roll no. = "<<roll_num<<endl;
}

class exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void setmarks(float,float);
        void getmarks();
};
void exam :: setmarks(float m,float p){
    maths=m;
    physics=p;
}
void exam :: getmarks(){
    cout<<"marks in maths = "<<maths<<" and marks in physics = "<<physics<<endl;
}

class  result : public exam{
    protected:
        float percentage;
    public:
        void calculate_result(){
            percentage=(maths+physics)/2;
            cout<<"the total percentage is "<<percentage<<"%"<<endl;
        }
};
int main(){
    result harry,gyan;
    harry.set_roll(10);
    harry.get_roll();
    harry.setmarks(99,100);
    harry.getmarks();
    harry.calculate_result();
    return 0;
}