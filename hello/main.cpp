#include <iostream>
//using namespace std;
// cout is from std

namespace first {
    void foo(){
        printf("name space from first\n");
    }
}
namespace second {
    void foo(){
        printf("name space from second\n");
    }
}
void foo(){
    printf("name space is global");
}

int addbunch(int a, int b) {
    // this function needs to be delcare first before `main`
    int ret;
    ret = a + b;
    return ret;
}

void doSomethingInt(int a=1, int b=2){
    printf("my int sum is %d\n", a+b);
}

int main () {
    int a = 2; // this is called `copy initialization`
    int b(4); // this is `direct initialization`, some complex case this is more efficient
    
    printf("My int is %d\n", a);
    
    doSomethingInt();
    doSomethingInt(20,30);
    doSomethingInt(1);
    
    first::foo();
    second::foo();
    foo();
    
    
    printf("\n-----------------------------\n");
    std::cout << b; // std:: indicates which namespace this variable is from
    std::cout << "\n"; // if there's use namespace std; on top, std:: can be saved here
    std::cout << a << std::endl;
    
    
    int myInt(10);
    std::cout << "Please enter some input\n";
//    std::cin >> myInt;
    std::cout << "The number you entered is:" << myInt << "\n";
    
    
    std::string myString("what the fk?? ");
    std::string someNewString("hahaha");
    std::cout << myString + someNewString << "\n";
    myString.append("yo??\n");
    std::cout << myString;
    
    using namespace std;
    string newString("again??\n");
    string bar("bar");
    string& stringRef = newString; // this create a reference, very much like pointer
    cout << newString;
    cout << stringRef;
    stringRef = "modified by using ref\n"; // string reference modified!
    cout << newString; // the first string variable is also changed
    
    
    cout << &stringRef << "\n"; // Print out the address
    stringRef = bar;
    cout << &stringRef << "\n"; // still the same address
    
    
    const string& barRef = bar; // create a const ref. Vs. `string& barRef = bar;`
    cout << barRef;
    
    return 0;
}


