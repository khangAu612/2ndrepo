//#include<iostream>
//#include<queue>
//#include<list>
//#include<vector>
//#include<string>
//#include<iomanip>
//
//using std::cout;    using std::cin;     using std::endl;
//
//template<typename T1,typename T2>
//void display(std::queue<T1,T2> s){
//    cout<<"Top: ";
//    while(!s.empty()){
//        T1 ele=s.front();
//        s.pop();
//        cout<<std::setw(5)<<ele<<endl;
//    }
//    cout<<endl;
//}
//
//
//int main(){
//
//    std::queue<int> q;
//    std::queue<int,std::deque<int>> q1;
//    std::queue<int,std::list<int>> q2;
//
//    for(auto i:{1,2,3,4,5}){
//        q.push(i);
//    }
//    display(q);
//    cout<<"Front: "<<q.front()<<endl;
//    cout<<"Back: "<<q.back()<<endl;
//
//    q.push(100);
//    display(q);
//    cout<<"Size: "<<q.size()<<endl;
//
//    q.pop();
//    q.pop();
//    display(q);
//    cout<<"Size: "<<q.size()<<endl;
//
//    q.push(5000);
//    display(q);
//    cout<<"Size: "<<q.size()<<endl;
//    cout<<"Front: "<<q.front()<<endl;
//    cout<<"Back: "<<q.back()<<endl;
//
//    return 0;
//}