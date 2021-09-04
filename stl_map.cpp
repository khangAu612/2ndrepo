#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<set>

using std::cout;    using std::cin;     using std::endl;

void display(const std::map<std::string,std::set<int>>& grades){
    cout<<"[ ";
    for(const auto&ele:grades){
        cout<<ele.first<<":[ ";//get the keys
        for(const auto& set_elem: ele.second ){ //get the values, type std::set, assocated with the keys
            cout<<set_elem<<" ";
        }
        cout<<"]  ";
    }
    cout<<"] "<<endl;
}

template<typename T1, typename T2>
void display( const std::map<T1,T2>& m){
    cout<<"[ ";
    for(const auto& e:m){
        cout<<e.first<<":"<<e.second;
    }
    cout<<"]"<<endl;
}

void test1(){
    cout<<"---------------------------------TEST1-------------------------------------"<<endl;
    std::map<std::string,int> m{//Key is type string--> sort the map based on string comparison
            {"Larry",3},
            {"Currly",2},
            {"Moe",1}
    };
    display(m);

    m.insert(std::pair<std::string,int>("Anna",10));
    display(m);

    m.insert(std::make_pair("Joe",5));
    display(m);

    m["Frank"]=18; //[] operator  returns the a reference to its mapped value or
                    // inserts a new element with that key and returns a reference to its mapped value.
                    // if the key doesnt already exist
                    // .Here, the key "Frank" and its value is 18 into the map
    display(m);

    m["Frank"]+=10;//increase the value associated with the key "Frank" by 10
    display(m);

    m.erase("Frank");           //remove the key Frank and its assocatied value
    display(m);

    cout<<"Count for Joe: "<<m.count("Joe")<<endl;      //1 as the key Joe is in the map
    cout<<"Count for Frank: "<<m.count("Frank")<<endl;  //0 as the key Frank is not the the map

    auto it=m.find("Larry");
    if(it!=m.end()){
        cout<<"Found "<<it->first<<":"<<it->second<<endl;//it is an iterator to the elment( std::pair obj) in the map-> deference it to acess to the element
    }
    cout<<m["Joe"]<<endl;

    m.clear();
    display(m);
    cout<<m["Joe"]<<endl;

}
void test2(){
    cout<<"---------------------------------------TEST2---------------------------------------------"<<endl;
    std::map<std::string,std::set<int>> grades{
            {"Larry",{100,90}},
            {"Moe",{94}},
            {"Curly",{90,100,80}}
    };
    display(grades);

    grades["Larry"].insert(95);//[] returns a reference to the value assocated with the key Larry. The value here is an std::set--> use the insert method to insert new element into the set
    display(grades);                //remember: elements in a set are sorted in ascending order by default

    auto it=grades.find("Moe");
    if(it!=grades.end()){
        it->second.insert(100000);
    }
    display(grades);

}

int main(){
    test1();
    test2();
    return 0;
}