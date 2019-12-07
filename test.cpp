#include <map>
#include <string_view>
#include <string>


int main(){
    std::map<std::string,std::pair<std::string,std::string>> tmap;
    tmap.try_emplace("one","struct","one");
    auto tp1 = tmap["one"];
    std::string_view sv = tp1.first;
    printf("%c",sv.at[0]);
    return 0;
}