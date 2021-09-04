//#include<list>
//#include<iostream>
//#include<algorithm>
//#include<forward_list>
//using  std::cout;   using std::cin;     using std::endl;
//
//class Person{
//    friend std::ostream& operator << (std::ostream& COUT, const Person&p);
//    std::string name;
//    int age;
//public:
//    Person(std::string name="Unknown", int  age=0): name{name},age{age}{ }//default valuyes dor string ane age are for .resize() method!!
//    bool operator < (const Person& rhs) const{
//        return this->age < rhs.age;
//    }
//    bool operator == (const Person& rhs) const{
//        return (this->name==rhs.name)&& (this->age==rhs.age);
//    }
//    ~Person()=default;
//};
//std::ostream& operator << (std::ostream& COUT, const Person&p){
//    COUT<<p.name<<" "<<p.age;
//    return COUT;
//}
//template<typename T>
//void displace(const std::list<T>& l){
//    cout<<"[ ";
//    for(const auto&e:l){
//        cout<<e<<" ";
//    }
//    cout<<"]"<<endl;
//}
//template<typename T>
//void display_f(const std::forward_list<T>& l){
//    cout<<"[ ";
//    for(const auto&e:l){
//        cout<<e<<" ";
//    }
//    cout<<"]"<<endl;
//}
//void test1(){
//    cout<<"------------------------------TEST1---------------------------------"<<endl;
//    std::list<int> l1{1,2,3,4,5};
//    displace(l1);
//
//    l1.push_back(600);
//    l1.push_front(100);
//    displace(l1);
//}
//
//void test2(){
//    cout<<"------------------------------TEST2---------------------------------"<<endl;
//    std::list<int> l1{1,2,3,4,5,6,7,8,9};\
//    displace(l1);
//    cout<<"Size: "<<l1.size()<<endl;
//    cout<<"Front: "<<l1.front()<<endl;
//    cout<<"Back: "<<l1.back()<<endl;
//    l1.clear();
//    displace(l1);
//    cout<<"Size: "<<l1.size()<<endl;
//}
//
//
//void test3(){
//    cout<<"------------------------------TEST3---------------------------------"<<endl;
//    std::list<int> l1{1,2,3,4,5,6,7,8,9};\
//    displace(l1);
//
//    l1.resize(5);//1 2 3 4 5
//    displace(l1);
//
//    l1.resize(10);//1 2 3 4 5 0 0 0 0 0
//    displace(l1);
//
//    std::list<Person>l2 ;
//    l2.resize(5);
//    displace(l2);
//}
//
//void test4(){
//    cout<<"------------------------------TEST4---------------------------------"<<endl;
//    std::list<int> l1{1,2,3,4,5,6,7,8,9};\
//    displace(l1);
//    auto it=std::find(l1.begin(),l1.end(),5);
//    if(it!=l1.end()){
//        l1.insert(it,100);//1,2,3,4,100,5,6,7,8,9
//    }
//    displace(l1);
//
//    std::list<int> l2{500,200,300};
//    l1.insert(it,l2.begin(),l2.end());\
//    displace(l1);                       //1 2 3 4 100 500 200 300 5 6 7 8 9
//
//    std::advance(it,-2);        //it points to 200
//    cout<<*it<<endl;                    //200
//
//}
//void test5(){
//
//    cout<<"---------------------TEST5------------------------"<<endl;;
//    std::list<Person> names{
//        {"Khang",18},
//        {"Ryan",12},
//        {"Jack",30}
//    };
//    names.sort();//this uses the operator <, which was overloaded in class Person above:))
//
//    displace(names);
//
//}
//int main(){
//    test1();
//    test2();
//    test3();
//    test4();
//    test5();
//    cout<<"------------------------------------"<<endl;
//    std::forward_list<int> f={1,2,3,4,5};
//    display_f(f);
//    auto it=std::find(f.begin(),f.end(),3);
//    //cout<<*it<<endl;
//    it= f.insert_after(it,20000);
//    display_f(f);
//    cout<<*it<<endl;
//    it++;
//    cout<<*it<<endl;
//cout<<"----------------------------------------"<<endl;
//    std::list<int> l1{1,2,3,4,5,6,7,2,543};
//    auto it1=l1.end();
////    it1++;
////    it1++;
//    cout<<*it1<<endl;
////    it1--;
//    cout<<*it1<<endl;
////    it= f.insert_after(it,0,20000);
////    cout<<*it;
//
//    return 0;
//}