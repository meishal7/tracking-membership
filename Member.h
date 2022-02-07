#ifndef MEMBER_H
#define MEMBER_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Member{
  private:
    string name;
    int id;
    char type;
    int member_visits;
    
    static int total_visits;
    static int active_members;
    static int last_id;
  
  public: 
    //Construcutors
    Member();
    Member(string name, char type);
    ~Member();
    
    //Setters and getters
    void setName(string name);
    string getName();
    void setId(int id);
    int getId();
    void setType(char type);
    char getType();
    void setMemberVisits(int member_visits);
    int getMemberVisits();
    
    //Static members getters and setters
    static void setTotalVisits(int n){
      total_visits += n;
    };
    int static getTotalVisits(){return total_visits;}
    int static getActiveMembers(){return active_members;}
    int static getLastId(){return last_id;}
    
    //Friends
    friend void deleteMember(Member &member, vector <Member> &vec);
    friend std::ostream& operator<< (std::ostream &out, const Member &member);
};

int Member::total_visits = 0;
int Member::active_members = 0;
int Member::last_id = 10000;

#endif