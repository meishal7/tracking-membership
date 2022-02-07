#include "Member.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

// const double BASIC_RATE = 28.50,  
//              PREMIUM_RATE = 60.000;




//Prototypes

void visits(Member &member, int n);
void deleteMember(Member &member, vector <Member> &vec);

int main() {
  vector <Member> members;
  
  Member joe("Joe", 'B');
  Member ann("Ann", 'B');
  Member alex("Alex", 'P');
  Member steve("Steve", 'P');
  Member monica("Monica", 'P');

  //cout << Member::getActiveMembers() << endl;

  visits(joe, 5);
  visits(ann, 6);
  visits(alex, 7);
  visits(steve, 10);
  visits(monica, 20);
  //cout << Member::getActiveMembers() << endl;

  members.push_back(joe);
  //cout << Member::getActiveMembers() << endl;
  members.push_back(ann);
  cout << Member::getActiveMembers() << endl;
  members.push_back(alex);
  cout << Member::getActiveMembers() << endl;
  members.push_back(steve);
  cout << Member::getActiveMembers() << endl;
  members.push_back(monica);
  cout << Member::getActiveMembers() << endl;
  
  
  for(int i = 0; i<members.size(); i++){
    cout << members[i] << endl;
  }

  deleteMember(steve, members);
  

  for(int i = 0; i<members.size(); i++){
    cout << members[i] << endl;
  }

  cout << Member::getTotalVisits() << endl;  
  cout << Member::getActiveMembers() << endl;


}
//Declaration
void visits(Member &member, int n){
  member.setMemberVisits(n);
  Member::setTotalVisits(n); 
  
  
}

void deleteMember(Member &member, vector <Member> &vec){
  for (vector<Member>::iterator it = vec.begin(); it != vec.end(); ++it) {
    if (it->getName() == member.getName()) {
        vec.erase(it);
        Member::active_members--;
        break;
    }
}

}

