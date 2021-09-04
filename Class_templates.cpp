#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

template<typename T>
class Item{
private:
    std::string name;
    T value;
public:
    Item(std::string name, T value):name{std::move(name)},value{value}{}
    std::string get_name(){return name;}
    T get_value(){return value;}
};


int main(){
    Item<int> item1{"Frank",100};//here T will be replaced by int
    cout<<item1.get_name()<<" "<<item1.get_value()<<endl;

    Item<std::string> item2{"Frank","Khang"};//here T will be replaced by std::string
    cout<<item1.get_name()<<" "<<item2.get_value()<<endl;

    Item<Item<std::string>> item3{"Frank",{"C++","Pro"}};
    cout<<item3.get_name()<<" "<<item3.get_value().get_name()<<endl;

    cout<<"---------------------------------------------------------------------------"<<endl;
    std::vector<Item<double>> vec1;
    vec1.push_back(Item<double>("John",2));
    vec1.push_back(Item<double>("Beesma",92));
    vec1.push_back(Item<double>("Jack",12));
    vec1.push_back(Item<double>("Jane",20));
    for(auto& v:vec1){
        cout<<v.get_name()<<" "<<v.get_value()<<endl;
    }
    return 0;
}
