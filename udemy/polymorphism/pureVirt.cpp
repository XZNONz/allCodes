#include<iostream>
#include<vector>
using namespace std;

class Shape{
    private:
        //attributes common to all shapes
    public:
        virtual void draw()=0;          //pure virtual function
        virtual void rotate()=0;        //pure virtual function
        virtual ~Shape(){}
};

class Open_Shape:public Shape{
    public:
        virtual ~Open_Shape(){}
};

class Closed_Shape:public Shape{
    public:
        virtual ~Closed_Shape(){}
};

class Line:public Open_Shape{
    public:
        virtual void draw() override{
            cout<<"drawing a line"<<endl;
        }
        virtual void rotate() override{
            cout<<"rotate a line"<<endl;
        }
        virtual ~Line(){}
};

class Circle:public Closed_Shape{
    public:
        virtual void draw() override{
            cout<<"drawing a circle"<<endl;
        }
        virtual void rotate() override{
            cout<<"rotating a circle"<<endl;
        }
        virtual ~Circle(){}
};

class Square:public Closed_Shape{
    public:
        virtual void draw() override{
            cout<<"drwing a square"<<endl;
        }
        virtual void rotate() override{
            cout<<"rotating a square"<<endl;
        }

        virtual ~Square(){}
};

void screenRef(const vector<Shape *> &shapes){
    cout<<"refreshing"<<endl;
    for(auto p:shapes){
        p->draw();
    }
}

int main(){
    // Circle c;
    // c.draw();

    // Shape *ptr=new Circle();
    // ptr->draw();
    // ptr->rotate();

    Shape *s1=new Circle();
    Shape *s2=new Line();
    Shape *s3=new Square();

    vector<Shape *> shapes{s1,s2,s3};
    // for(const auto p: shapes){
    //     p->draw();
    // }

    screenRef(shapes);

    // delete ptr;
    delete s1;
    delete s2;
    delete s3;
    return 0;
}