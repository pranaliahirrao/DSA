#include<iostream>
using namespace std;

class Student{
    private:
    int marks ;
    string gf ;

    public:
    int id ;
    int age;
    string name;
    bool isPresent;

    // Default constructor 
    Student()
    {
        cout<<"Default Constructor"<<endl;
    }

    // COPY Constructor - only Data Var can get copied and not the functions
    Student(const Student &srcobj)
    {
        this->id = srcobj.id ;
        this->age = srcobj.age ;
        this->name = srcobj.name ;
        this->isPresent = srcobj.isPresent ;
        cout<<"Copy constructor called"<<endl;
    }

    // Parameterized constructor
    Student(int _id, int _age, string _name, bool _isPresent)
    {
        id = _id ;
        age = _age ;
        name = _name ;
        isPresent = _isPresent ;
        cout<<"Parameterized Constructor w/o gf"<<endl ;
    }
     
    Student(int _id, int _age, string _name, bool _isPresent, string _gf)
    {
        this->id = _id ;
        this->age = _age ;
        this->name = _age ;
        this->isPresent = _isPresent ;
        this->gf = _gf;
        cout<<"Parameterized Constructor with gf"<<endl ;
    }

    // destructor 
    ~Student(){
        cout<<"Student Dtor called"<<endl;
    }

    string getGfName()
    {
        return gf ;
        // return this->gf;
    }

    void setGfName(string gf)
    {
        this->gf = gf ;
    }



    void Speaking()
    {
        cout<<"Can Speak"<<endl ;
    };

    void Walking()
    {
        cout<<"Can Walk"<<endl ;
    };
};

int main()
{
    // Student s1 ;
    // Student s2(1, 10, "Pranali", 1);    // will be on stack => use . dot 
    // cout<<"For s2: "<<s2.age<<endl ;

    // allocating on HEAP
    // Student *s3 = new Student(2, 20, "abcd", 0);  // will use Heap memory => use arrow 
    // cout<<"For s3: "<<s3->age <<endl;
    // cout<<(*s3).name<<endl;      // and if u still want to use . dot then follow this syntax
    // delete s3 ;

    // Student s4(1, 10, "Pranali", 1);
    Student s6(1, 10, "abcd", 1, "gfgf");
    // Student s5 = s4 ;
    // Student s5(s4);

    // cout<<s4.name<<endl ;
    // cout<<s5.name<<endl ;

    cout<<s6.getGfName()<<endl;
    s6.setGfName("New1");
    cout<<s6.getGfName()<<endl;



    return 0 ;
}

