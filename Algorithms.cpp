#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<cctype>
#include<string>
using std::cout;    using std::cin;     using std::endl;

class Person{
    std::string name;
    int age;
public:
    Person()=default;
    Person(std::string name, int  age): name{name},age{age}{ }
    bool operator < (const Person& rhs) const{
        return this->age < rhs.age;
    }
    bool operator == (const Person& rhs) const{
        return (this->name==rhs.name)&& (this->age==rhs.age);
    }
    ~Person()=default;
};

//FInd an element in a container
void find_test(){
    std::vector<int> vec{1,2,3,4};
    std::vector<int>::iterator loc =std::find(vec.begin(),vec.end(),3);
    if(loc!=vec.end()){
        cout<<*loc<<" FOUND"<<endl;
    }else{
        cout<<*loc<<" NOT FOUND"<<endl;
    }

    std::list<Person> Players{
            {"Moe",20},
            {"Larry",10},
            {"Ryan",30}
    };
    auto loc_list=std::find(Players.begin(),Players.end(),Person("Moe",20));
    if(loc_list!=Players.end()){
        cout<<"Players FOUND"<<endl;
    }else{
        cout<<"Players NOT FOUND"<<endl;
    }
}

//COUNT the number of an element in a container
void count_test(){
    std::vector<int> vec{1,2,3,4,1,2,1,3,2,5,7,8,9,3,5,3};
    int num=std::count(vec.begin(),vec.end(),3);
    cout<<num<<" occurences of 3 found"<<endl;
}

//COUNT the number of an element in a container
//based on a predicate(count++ when the predicate,aka function, returns a true) using  LAMBDA EXPRESSION
void count_if_test(){
    std::vector<int> vec{12,23,12,5,6,3,6,4,6,29,46,73,24,95,64};
    int num=std::count_if(vec.begin(),vec.end(),[](int x){return x>=10;});//increase the count each time the element>=10
    cout<<num<<" occurrences found"<<endl;
}

//replace occurences of elements in a container
void replace_test(){
    std::vector<int> vec{12,23,1,5,6,3,6,4,6,29,4,3,24,5,64};
    cout<<"Before replacement: ";
    for(auto& e:vec){
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<"After replacement: ";
    std::replace(vec.begin(),vec.end(),3,300);
    for(auto& e:vec){
        cout<<e<<" ";
    }
}

void all_of_test(){
    std::vector<int> vec{12,23,30,54,62,33,62,41,69,29,42,33,24,53,64};
    if(std::all_of(vec.begin(),vec.end(),[](int x){return x>10;})){
        cout<<"All the elements are greater than 10"<<endl;
    }else{
        cout<<"Not all the elements are greater than 10"<<endl;
    }
}

//Tranform elements in a container-string in this example. Using LAMBDA EXPRESSION here
void transform_string_test(){
    std::string sentence{"WHAT IS UP!"};
    cout<<"before transforming: "<<sentence<<endl;
    std::transform(sentence.begin(),sentence.end(),sentence.begin(),[](char c){return tolower(c);});
    cout<<"after transforming: "<<sentence<<endl;
}
int main(){
//find_test();
//count_test();
//count_if_test();
//replace_test();
//all_of_test();
transform_string_test();
    return 0;
}