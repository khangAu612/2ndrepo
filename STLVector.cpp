//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using  std::cout;   using std::cin;     using std::endl;
//
//
//class Person{
//    friend std::ostream& operator<<(std::ostream& COUT,const Person& rhs);
//    std::string name;
//    int age;
//public:
//    Person()=default;
//    Person(std::string name, int  age): name{name},age{age}{ }
//    bool operator < (const Person& rhs) const{
//        return this->age < rhs.age;
//    }
//    bool operator == (const Person& rhs) const{
//        return (this->name==rhs.name)&& (this->age==rhs.age);
//    }
//    ~Person()=default;
//};
// std::ostream& operator<<(std::ostream& COUT,const Person& rhs){
//     COUT<<rhs.name<<": "<<rhs.age;
//     return COUT;
// }
//
////using for_each and lambda expression. This function does the same thing as void display(vec);
//template<typename T>
//void display2(const std::vector<T>& vec){
//    cout<<"[ ";
//    std::for_each(vec.begin(),vec.end(),[](T x){cout<<x<<" ";});
//    cout<<"]"<<endl;
//}
//
// template<typename T>
// void display(const std::vector<T>& vec){
//     cout<<"[ ";
//     for(auto& v:vec){
//         cout<<v<<" ";
//     }
//     cout<<"]"<<endl;
// }
//void test2(){
//     cout<<"------------TEST 2--------------------------"<<endl;
//     std::vector<int> vec{1,2,3,4,5};
//     display(vec);
//     cout<<"vec size: "<<vec.size()<<endl;          //5
//     cout<<"vec max size: "<<vec.max_size()<<endl;  //1073741823
//     cout<<"vec capacity: "<<vec.capacity()<<endl;  //5
//
//     vec.push_back(6);
//    cout<<"vec size: "<<vec.size()<<endl;           //6
//    cout<<"vec max size: "<<vec.max_size()<<endl;   //1073741823
//    cout<<"vec capacity: "<<vec.capacity()<<endl;   //5*2=10
//
//    vec.shrink_to_fit();//makes capacity = size
//    cout<<"vec size: "<<vec.size()<<endl;          //6
//    cout<<"vec max size: "<<vec.max_size()<<endl;  //1073741823
//    cout<<"vec capacity: "<<vec.capacity()<<endl;  //6
//
//
//    vec.reserve(100);//reserve space for 100 ints
//    cout<<"vec size: "<<vec.size()<<endl;          //6
//    cout<<"vec max size: "<<vec.max_size()<<endl;  //1073741823
//    cout<<"vec capacity: "<<vec.capacity()<<endl;  //100
//    display(vec);
//}
//void test3(){
//     cout<<"---------------------------TEST 3----------------------------"<<endl;
//    std::vector<int> vec{1,2,3,4,5};
//    display(vec);
//    vec[0]=100;         //no bound checking
//    vec.at(3)=3000;  //has bound checking
//    display(vec);
//}
//
//void test4(){
//     cout<<"-----------------------------TEST 4----------------------------"<<endl;
//     std::vector<Person> names;
//     Person p1("Larry",18);
//     names.push_back(p1);
//     display(names);
//     names.push_back(Person("Marry",25));//push_back will invoke the defaul(compiler-generated) move constructor
//     display(names);
//
//     names.emplace_back("Currly",30);//More efficient than push_back since no temporary object is created and no move/copy takes place.
//                                                //it simply invoke the constructor in the container direcltly
//    display(names);
//
// }
//
//void test5() {
//    std::cout << "\nTest5 =========================" << std::endl;
//
//    std::vector<Person> stooges {
//            {"Larry", 18},
//            {"Moe", 25},
//            {"Curly", 30}
//    };
//
//    display(stooges);
//    std::cout << "\nFront: " << stooges.front() << std::endl;//return the first element
//    std::cout << "Back: " << stooges.back() << std::endl;   //return the last element
//
//    stooges.pop_back();//delete the last element
//    display(stooges);
//}
//
//void test6() {
//    std::cout << "\nTest6 =========================" << std::endl;
//    std::vector<int> vec {1,2,3,4,5};
//    display(vec);
//
//    vec.clear();    // remove all elements
//    display(vec);
//
//    vec = {1,2,3,4,5,6,7,8,9,10};
//    display(vec);
//    vec.erase(vec.begin(), vec.begin() + 2);//3 4 5 6 7 8 9 10
//    display(vec);
//
//    vec = {1,2,3,4,5,6,7,8,9,10};
//    // erase all even numbers
//    auto it = vec.begin();
//    while (it != vec.end()) {
//        if (*it %2 == 0)
//            vec.erase(it);//get rid of even numbers
//        else
//            it++;   // only increment if not erased!
//    }
//    display(vec);
//}
//
//void test7() {
//    std::cout << "\nTest7 =========================" << std::endl;
//
//    std::vector<int> vec1 {1,2,3,4,5};
//    std::vector<int> vec2 {10,20,30,40,50};
//
//    display(vec1);
//    display(vec2);
//    std::cout << std::endl;
//
//    vec2.swap(vec1);
//    display(vec1);
//    display(vec2);
//}
//
//void test8() {
//    std::cout << "\nTest8  =========================" << std::endl;
//
//    std::vector<int> vec1 {1,21,3,40,12};
//
//    display(vec1);
//    std::sort(vec1.begin(), vec1.end());//1 3 12 21 40
//    display(vec1);
//}
//
//void test9() {
//    // std::back_inserter contructs a back-insert iterator that inserts new elements
//    // at the end of the container it applied to. It's a special output iterator
//    // It's awesome!!!!   and  very efficient
//    // There is also a front_inserter we can use with deques and lists
//    // Copy one list to another using an iterator and back_inserter
//
//    std::cout << "\nTest9  =========================" << std::endl;
//
//    std::vector<int> vec1 {1,2,3,4,5};
//    std::vector<int> vec2 {10,20};
//
//    display(vec1);
//    display(vec2);
//    std::cout << std::endl;
//
//    std::copy(vec1.begin(), vec1.end(), vec2.begin());
//    display(vec1);
//    display(vec2);
//    std::cout << std::endl;
//
//
//    // Copy_if the element is even
///*
//    vec1 = {1,2,3,4,5,6,7,8,9,10};
//    vec2 = {10,20};
//
//    display(vec1);
//    display(vec2);
//    std::cout << std::endl;
//
//    std::copy_if(vec1.begin(), vec1.end(), std::back_inserter(vec2),
//                 [](int x) { return x%2 == 0; });
//    display(vec1);
//    display(vec2);
//*/
//
//}
//
//void test10() {
//    std::cout << "\nTest10  =========================" << std::endl;
//    // transform over 2 ranges
//
//    std::vector<int> vec1 {1,2,3,4,5};
//    std::vector<int> vec2 {10,20,30,40,50};
//    std::vector<int> vec3;
//
//
//    // 1*10, 2*20, 3*30, 4*40, 5*50 and store the results in vec3
//    std::transform(vec1.begin(), vec1.end(), vec2.begin(),
//                   std::back_inserter(vec3),
//                   [](int x, int y) { return x * y;});
//
//    display(vec3);
//
//}
//
//
//
//// Insertion from another vector
//// Insert vec2 into vec1 before the 5
//void test11() {
//    std::cout << "\nTest11  =========================" << std::endl;
//    std::vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
//    std::vector<int> vec2 {100,200,300,400};
//
//    display(vec1);
//    display(vec2);
//    std::cout << std::endl;
//
//
//    auto it = std::find(vec1.begin(), vec1.end(), 5);
//    if (it != vec1.end()) {
//        std::cout << "inserting..." << std::endl;
//        vec1.insert(it, vec2.begin(), vec2.end());
//    } else {
//        std::cout << "Sorry, 5 not found" << std::endl;
//    }
//    display(vec1);
//}
//
//int main(){
////    test2();
////    test3();
////    test4();
////    test6();
////test9();
////test10();
//int a[5]={1,5,6,2,3};
//std::sort(std::begin(a),std::end(a));
//for(const auto& i:a){
//    cout<<i<<" ";
//}
//std::string("adsfasf");
//    return 0;
//}