#include "Member.h"
#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;

Member::Member(){
  name = " ";
  id = 0; 
  type = ' '; 
  member_visits = 0;
}

Member::Member(string name, char type){
  this->name = name;
  this->type = type;
  id = ++last_id;
  active_members++;

};
void Member::setName(string name){
  this->name = name;
}
string Member::getName(){return name;}
    
void Member::setId(int id){
  this->id = ++last_id;
}
    
int Member::getId(){return id;}

void Member::setType(char type){
  this->type = type;
}

char Member::getType(){return type;}

void Member::setMemberVisits(int member_visits){
  this->member_visits = member_visits;
}

int Member::getMemberVisits(){return member_visits;}



// void Member::deleteMember(Member &member, vector <Member> &vec);

ostream& operator<< (std::ostream &out, const Member &member){
  out << setw(10) << left << member.name << setw(5) << right << member.id << setw(5) << right << member.type << setw(5) << right << member.member_visits << endl;
      
  return out; 
};
