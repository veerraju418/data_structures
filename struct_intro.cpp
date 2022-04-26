//structures
#include<bits/stdc++.h>
using namespace std;
struct student{
  int id;
  string name;
  float per;
};
int main(){
    student *s=new student();
    s->id=1;
    s->name="don";
    s->per=45.6;
    cout<<s->id<<" "<<s->name<<" "<<s->per;
}
