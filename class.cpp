//input
// 15
// john
// carmack
// 10
//output
// 15
// carmack, john
// 10

// 15,john,carmack,10

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int age;
        string s1;
        string s2;
        int std;
    public:
        void set_age(int a)
        {
            age=a;
        }
        int get_age()
        {
            return age;
        }
        
        void set_s1(string fn)
        {
            s1=fn;
        }
        string get_s1()
        {
            return s1;
        }
        void set_s2(string ln)
        {
            s2=ln;
        }
        string get_s2()
        {
            return s2;
        }
        void set_std(int s)
        {
            std=s;
        }
        int get_std()
        {
            return std;
        }
        string to_string()
        {
            stringstream ss;
            ss<<age<<","<<s1<<","<<s2<<","<<std;
            return ss.str();
        }
};

int main() {
    int age,std;
    
    string s1,s2;
    cin>>age>>s1>>s2>>std;
    
    Student st;
    st.set_age(age);
    st.set_std(std);
    st.set_s1(s1);
    st.set_s2(s2);
    
    cout<<st.get_age()<<endl;
    cout<<st.get_s2()<<", "<<st.get_s1()<<endl;
    cout<<st.get_std()<<endl;
    cout<<endl;
    
    cout<<st.to_string();
    
    
    
    return 0;
}