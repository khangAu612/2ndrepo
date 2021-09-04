//#include<iostream>
//#include<stack>
//#include<list>
//#include<vector>
//#include<string>
//#include<iomanip>
//
//using std::cout;    using std::cin;     using std::endl;
//
//template<typename T1,typename T2>
//void display(std::stack<T1,T2> s){
//    cout<<"Top: ";
//    while(!s.empty()){
//        T1 ele=s.top();
//        s.pop();
//        cout<<std::setw(5)<<ele<<endl;
//    }
//    cout<<endl;
//}
//
//
//int main(){
//
//    std::stack<int> s;
//    std::stack<int,std::vector<int>> s1;
//    std::stack<int,std::list<int>> s3;
//
//    for(auto i:{1,2,3,4,5}){
//        s.push(i);
//    }
//    display(s);
//
//    s.push(100);
//    display(s);
//
//    s.pop();
//    s.pop();
//    display(s);
//
//    while(!s.empty()){
//        s.pop();
//    }
//    display(s);
//    cout<<"size: "<<s.size()<<endl;
//    s.push(10);
//    cout<<"size: "<<s.size()<<endl;
//
//    s.top()=100;
//    display(s);
//
//    s1.push(50);
//    s1.push(60);
//    s1.push(70);
//    s1.push(80);
//    s1.push(90);
//    s1.push(150);
//    display(s1);
//
//    return 0;
//}