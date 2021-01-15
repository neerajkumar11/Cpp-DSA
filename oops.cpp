#include<iostream>
using namespace std;

class student{
    string name;
    public:  // to make it public else by default it is private
    // string name;
    int age;
    char gender;

    // default constructor //automatically call whenever a object is make with no parameter
    student(){
        cout<<"Default constructor"<<endl;
    }

    //parameterised constructor  //automatically call when make a object with parameter
    student(string s, int a, char c){
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = c;
    }

    //copy constructor  //automatically call when make a object with passing another object 
    student(student &add){
        cout<<"copy constructor"<<endl;
        name = add.name;
        age = add.age;
        gender = add.gender;
    }

    //destructor //automaticallly call when a object is destroyed
    ~student(){
        cout<<"destructor"<<endl;
    }
    // with help of function we can also access the private data members
    // function to print name
    void getName(){
        cout<<name<<endl;
    }

    //function to set name
    void setName(string s){
        name = s;
    }

    //function to print complete object
    void printInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl<<endl;
    }

    //operator overloading
    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        } else {
            return false;
        }
    }
};

int main(){
    
    // // object of student class
    // student a;
    // a.name = "Neeraj";
    // a.age = 18;
    // a.gender = 1;


    // // array of objects of student class
    // student arr[3];
    // for(int i = 0; i < 3; i++){
    //     cout<<"Enter name : ";
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);        
    //  //   cin>>arr[i].name;
    //     cout<<"Enter age : ";
    //     cin>>arr[i].age;
    //     cout<<"Enter gender : ";
    //     cin>>arr[i].gender;
    // }

    // for(int i = 0; i < 3; i++){
    //     arr[i].printInfo();
    // }

    student a("Neeraj", 18, 'M');
    a.printInfo();
    
    student b;

    student c(a); //or student c = a;

    if(c==a){
        cout<<"Same"<<endl;
    } else {
        cout<<"Not same"<<endl;
    }


    return 0;
}
