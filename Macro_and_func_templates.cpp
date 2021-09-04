
#include <iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
#define MAX(a,b) ((a)>(b)?(a):(b))
#define SQUARE(a) ((a)*(a))

 struct Person{
    std::string name;
    int age;
    bool operator <(const Person& rhs) const{
        return this->age<rhs.age;
    }
};

std::ostream& operator << (std::ostream& COUT,const Person& rhs){
    COUT<<rhs.name;
    return COUT;
}

template<typename T>//at the point, the compiler hasnt generated any code for these function templates yet since it doesnt know the specific type T of these functons
T& min1(T a, T b){
    return (a<b)?a:b;
}

template<typename T1,typename T2>
void func(T1 a, T2 b){
    cout<<a<<" "<<b<<endl;
}

int main()
{
    /*Macro version*/
    cout<<MAX(10.5,9.2)<<endl;
    cout<<100/SQUARE(5)<<endl;

    /*template functions*/
    cout<<"----------Template function with 2 similar-typed arguments------------"<<endl;
    cout<<min1<int>(10,20)<<endl;
    cout<<min1(10,20)<<endl;

    Person p1{"khang",29};
    Person p2{"Bob",20};
    Person p3=min1(p1,p2);
    cout<<p3.name<<" is younger"<< endl;

    cout<<min1(p1,p2)<<endl;

    cout<<"----------Template function with 2 similar-typed or different-typed arguments------------"<<endl;
    func<Person,Person>(p1,p2);
    func(p1,p2);

    func(5,"John");
    func("Jack","13");

    return 0;
}
