/*WAP TO DISPLAY THE INFORMATION ABOUT THE FACULTY MEMBER. ALLOCATE THE MEMORY FOR THE OBJECT DYNAMICALLY
CONDITION IF OBJECT IS MORE THEN 10 ONLY THEN WE HAVE TO ALLOCATE THE MEMORY TO OBJECT*/
#include <iostream>
using namespace std;
class management{
    string name,dep,degn;
    int reg_no;
    int *i=new int(reg_no);
    string *t=new string(name);
    string *a=new string(dep);
    string *p=new string(degn);
    public:
    void get()
    {
        cout<<"Enter Name"<<endl;
        cin>>*t;
        cout<<"Enter Department"<<endl;
        cin>>*a;
        cout<<"Enter Desgnation"<<endl;
        cin>>*p;
        cout<<"Enter Registeration No."<<endl;
        cin>>*i;
    }
    void put()
    {
        cout<<"Name :"<<*t<<endl;
        cout<<"Department :"<<*a<<endl;
        cout<<"Desgnation :"<<*p<<endl;
        cout<<"Registeration :"<<*i<<endl;
    }
};
int main()
{   int i;
    cout<<"Enter The number of entries"<<endl;
    cin>>i;
    if(i>1)
    {
        management m[i];
        for(int j=0;j<i;j++)
        {
        m[j].get();
        m[j].put();   
        }
    }
    else
    {
        cout<<"Entries less than 1"<<endl;
    }
    return 0;
}



