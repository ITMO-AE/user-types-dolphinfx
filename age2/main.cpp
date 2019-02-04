#include <iostream>
#include <string>
#include <map>
using namespace std;
struct Human {
    string Name;
    string SName;
};
class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        if (Dannie.count(year) == 0){
            Dannie[year].SName = "";}
        Dannie[year].Name = first_name;
    }
    void ChangeLastName(int year, const string& last_name) {
        if (Dannie.count(year) == 0){
            Dannie[year].Name = "";}
        Dannie[year].SName = last_name;
    }
    string GetFullName(int year) const{
        if (Dannie.size() == 0) {
            return "Incognito";
        }
        else {
            for (const auto& i : Dannie) {
                if (year < i.first) return "Incognito";
                break;
            }
        }

        string nm = "";
        string sn = "";
        for (const auto& i : Dannie) {
            if (i.first <= year && i.second.SName != "") sn = i.second.SName;
            if (i.first <= year && i.second.Name != "") nm = i.second.Name;
        }
        if(nm == "") return sn + " with unknown first name";
        else if(sn == "") return nm + " with unknown last name";
        else return nm + " " + sn;
    }
private:
    map<int, Human> Dannie;
};

int main()
{
    Person woman;
    woman.ChangeFirstName(1965, "Polina");
    woman.ChangeLastName(1967, "Sergeeva");
      for (int year : {1900, 1965, 1990}) {
        cout << woman.GetFullName(year) << endl;
      }

      woman.ChangeFirstName(1970, "Appolinaria");
        for (int year : {1969, 1970}) {
          cout << woman.GetFullName(year) << endl;
        }

       woman.ChangeLastName(1968, "Volkova");
        for (int year : {1969, 1970}) {
          cout << woman.GetFullName(year) << endl;
        }

    return 0;
}
