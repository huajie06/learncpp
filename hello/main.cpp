#include <iostream>
// using namespace std;
// cout is from std

namespace first {
void foo() { printf("name space from first\n"); }
} // namespace first
namespace second {
void foo() { printf("name space from second\n"); }
} // namespace second
void foo() {
  printf("name space is global");
  printf("second line code thing");
}

int addbunch(int a, int b) {
  // this function needs to be delcare first before `main`
  int ret;
  ret = a + b;
  return ret;
}

void doSomethingInt(int a = 1, int b = 2) {
  printf("my int sum is %d\n", a + b);
}

enum ECarTypes { Sedan, Hatchback, SUV, Wagon }; // the value here is 0, 1, 2, 3

ECarTypes GetPreferredCarType() { return ECarTypes::Wagon; }

enum NewECarTypes : uint8_t {
  sedan,     // 0
  hatchback, // 1
  suv = 254, // 254
  Hybrid     // 255
};

void WriteByteToFile(uint8_t InputValue) {
  printf("input value is %d", InputValue);
}

int main() {
  int a = 2; // this is called `copy initialization`
  int b(4);  // this is `direct initialization`, some complex case this is more
             // efficient

  printf("My int is %d\n", a);

  doSomethingInt();
  doSomethingInt(20, 30);
  doSomethingInt(1);

  first::foo();
  second::foo();
  foo();

  printf("\n-----------------------------\n");
  std::cout << b; // std:: indicates which namespace this variable is from
  std::cout
      << "\n"; // if there's use namespace std; on top, std:: can be saved here
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
  string &stringRef =
      newString; // this create a reference, very much like pointer
  cout << newString;
  cout << stringRef;
  stringRef = "modified by using ref\n"; // string reference modified!
  cout << newString; // the first string variable is also changed

  cout << &stringRef << "\n"; // Print out the address
  stringRef = bar;
  cout << &stringRef << "\n"; // still the same address

  const string &barRef = bar; // create a const ref. Vs. `string& barRef = bar;`
  cout << barRef;

  cout << "\n-----\n" << GetPreferredCarType() << "\n";
  WriteByteToFile(1);

  enum color { red = 10, green, blue };
  color r = green;
  printf("the color is %d\n", r);

  enum direction { left = 'l', right = 'r' };
  direction myd = left;
  cout << myd << "\n";
  int myd2 = direction::right;
  cout << myd2 << "\n";

  char mys[] = "helloworld"; // c way to define strings
  // string is a composed of char, an array of char
  printf("mys is: %s\n", mys);
  char mys1 = 'h';
  printf("mys1 is: %d\n",
         mys1); // this returns the ascii code of h, can't use %s
  printf("mys1 is: %c\n", mys1); //%c is the char format
  cout << mys1 << "\n";          // this returns h

  cout << sizeof(newString) << "\n";

  //  int input1, input2;
  //  cout << "\nPlease enter two inputs\n";
  //  cin >> input1 >> input2;
  //  printf("your inputs are: 1)%d, 2)%d\n", input1,input2);
  //  string input_line;
  //  cout << "Please enter some dumb stuff\n";
  //  getline(cin, input_line);
  //  cout << "Your are dumb, because of this\n" << input_line << "\n";

  char rgs[]{"what the blah blah\n"};
  printf("string is %s\n", rgs);

  for (char c : rgs) // for range loop
    printf("[%c]", c);
  cout << "\n";

  cout << addbunch(100, 200) << "\n";

  return 0;
}
