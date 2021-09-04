//
//#include<list>
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<iomanip>
//using std::cout;    using std::cin;     using std::endl;
//
//class Songs{
//private:
//    friend std::ostream& operator << (std::ostream& COUT,const Songs& rhs);
//    friend void display(const std::list<Songs> songs, const Songs& current_playing_song);
//    std::string name;
//    std::string creator;
//public:
//    Songs(std::string name="DEFAULT SONG NAME",std::string creator="DEFAULT CREATOR NAME"): name{name},creator{creator}{};
//
//    bool operator < (const Songs& rhs) const{
//        return (this->name<rhs.name) && (this->creator<rhs.creator);
//    }
//    bool operator == (const Songs& rhs) const{
//        return (this->name==rhs.name)&& (this->creator==rhs.creator);
//    }
//
//    ~Songs()=default;
//};
//void display(const std::list<Songs> songs, const Songs& current_playing_song){
//
//    for(const auto& s:songs) {
//        cout <<s<<endl;
//    }
//    cout<<"\nCurrent playing song: "<<endl;
//    cout<<current_playing_song<<endl<<endl;
//}
//
//void play_current_song(const Songs& song){
//    cout<<"Playing: "<<endl;
//    cout<<song<<endl;
//}
//
//std::ostream& operator << (std::ostream& COUT,const Songs& rhs){
//    COUT<<std::setw(20)<<std::left<<rhs.name<<std::setw(20)<<std::left<<rhs.creator;
//    return COUT;
//}
//
//void selection_menu_desplay(){
//    cout<<"================================================================="<<endl;
//    cout<<"F - Play first song"<<endl;
//    cout<<"N - Play next song"<<endl;
//    cout<<"P - Play prevous song"<<endl;
//    cout<<"A - Add and play a new song at current location"<<endl;
//    cout<<"L - Print out the current playlist"<<endl;
//    cout<<"Q - Quit"<<endl;
//    cout<<"================================================================="<<endl;
//}
//
//int main(){
//    int running=1;
// char menu_choice{};
// std::list<Songs> playlist={
//    {"God's Plan","Drake"},
//    {"Never Be The Same", "Camila Cabello"},
//    {"Pray For Me","The Weekend and K. Lamar"},
//    {"The Middle","Zedd, Maren Morris & Grey"},
//    {"Wait","Marrone 5"},
//    {"Whatever It Takes","Imagine Dragons"}
//};
// auto it=playlist.begin();
//
// display(playlist,*it);
//
//while(running) {
//
//    selection_menu_desplay();
//    cout<<"Enter a selection(q/Q to quit): ";
//    cin>>menu_choice;
//
//    switch (menu_choice) {
//        case 'F':
//        case 'f':
//            cout << "Playing first song: " << endl;
//            play_current_song(*it);
//            break;
//
//        case 'N':
//        case 'n':
//            cout << "Playing the next song: " << endl;
//            if (*it == playlist.back()) {
//                it = playlist.begin();
//                cout << *it << endl;
//            } else {
//                cout << *(++it) << endl;
//            };
//            break;
//
//
//        case 'p':
//        case 'P':
//            cout << "Playing the previous song: " << endl;
//            if (*it == playlist.front()) {
//                it = playlist.end();
//                it--;
//                cout << *it << endl;
//            } else {
//                cout << *(--it) << endl;
//            }
//            break;
//
//        case 'a':
//        case 'A': {
//            std::string name;
//            std::string creator;
////            std::cin.clear();
////            fflush(stdin);
//            cout << "Enter the name of the song: ";
//            while(getchar() != '\n');//or std::cin.ignore(numeric.limits(streamsize)::max(),'\n');
//            std::getline(cin, name);
//            cout << "Enter the name of the creator: ";
//            std::getline(cin, creator);
//            playlist.emplace(it, name, creator);
//        }
//            break;
//
//        case 'l':
//        case 'L':
//            display(playlist, *it);
//            break;
//
//        case 'q':
//        case 'Q':
//            exit(0);
//
//    }
//}
//
//    return 0;
//}