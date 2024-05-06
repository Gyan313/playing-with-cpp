#include<iostream>
using namespace std;

class student{
    protected:
        int roll_num;
    public:
        void set_roll(int r){
            roll_num=r;
        }
        void get_roll(){
            cout<<"Roll number = "<<roll_num<<endl;
        }
};

class test:virtual public student{
    protected:
        float math;
        float physics;
    public:
        void set_marks(float m,float p){
            physics=p;
            math=m;
        }
        void get_marks(){
            cout<<"marks in math = "<<math<<endl<<" and marks in physics "<<physics<<endl;
        }
};

class sports:virtual public student{
    protected:
        float score;
    public:
        void set_score(float s){
            score=s;
        }
        void get_score(){
            cout<<"Your score in sports = "<<score<<endl;
        }
};

class result: public test,public sports{
    protected:
        float total;
    public:
        void overall(){
            total=math+physics+score;
            get_roll();
            cout<<"your evaluation : "<<endl;
            get_marks();
            get_score();
            cout<<"Your total = "<<total<<endl;
        }
};

int main(){
    result gyan;
    gyan.set_roll(31);
    gyan.set_marks(90,92);
    gyan.set_score(100);
    gyan.overall();
    return 0;
}