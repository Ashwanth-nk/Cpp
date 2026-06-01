#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

/*
using namespace std;

struct student {
  string name;
  double gpa;
  bool enrolled;
};

enum Day {a=0, b=1, c=2, d=3};

class Human {
  private:
    int marks;
  public: //Attribute
    string name;
    string occupation;
    int age;
    void eat(){ //Method
      cout << "Eating";
    }
};

class Game {
  public:
    string name;
    int year;
  Game(string x, int year){ //Constructor
    name = x;
    this->year = year;
  }
  //Can have multiple constructors
  //Getters and Setters (makes readable and writable of private key attributes in a class respectively)
};

//Inheritence
class Dog : public Game {
  public:
    //Could add anything
};

//Function template
template <typename T>
T max (T x, T y){
  return (x>y) ? x : y;
}
template <typename T, typename U>
T max1(T x, U y)
{
  return (x > y) ? x : y;
}

int doubleDigit(int digit);

void happyBirthday(string name){
  cout << "Happy birthday" << name;
  cout << "Happy birthday" << name;
  cout << "Happy birthday" << name;
}

void bakePizza();
void bakePizza(string toppings1); // Function Signature
double square(double length);

typedef std::string str_t; (creates alias)

using str_t = std::string; (create alias)

namespace first {
  int x = 1;
}
*/

int main(){
  /*
  int a = 0;
  int b = 1;
  int c = a+b;
  int file_size = 100;
  double sales = 9.99;
  a++;
  ++b;
  const int z = 2;
  cout << "c: " << c << endl
       << "sales: " << sales;
  return 0;


  int sales = 95000;
  double sales_tax = 0.04 * sales;
  double county_tax = 0.02 * sales;
  cout << "Sales tax: " << sales_tax << endl
       << "County Tax: " << county_tax << endl
       << "Total Tax: " << sales_tax + county_tax;


  cout << "Enter two values : ";
  int x;
  int y;
  cin >> x >> y;
  cout << x+y;
  return 0;


  cout << "Enter Fahrenheit value : ";
  int fahrenheit;
  cin >> fahrenheit;
  double celcius = (fahrenheit - 32)/1.8;
  cout << "Celcius : " << celcius;
  return 0;


  double res1 = floor(1.4);
  cout << res1 << endl;
  double res2 = pow(2,4);
  cout << res2;
  return 0;


  float a = 9.99f;
  long b = 10000L;
  char l = 'a';
  bool isValid = false;
  auto valid = true;
  int c {};
  int d {1.2}; (will result in error)
  cout << c;
  return 0;


  //Narrowing
  int number = 1'00'000;
  short another = number;
  cout << another;
  return 0;


  long elapsedSeconds = time(0);
  srand(elapsedSeconds);
  int number = rand() % 10;
  cout << number;
  return 0;


  str_t name = "BRO";
  using namespace first;
  cout << x;
  return 0;


  char x = (char) 100; //Explicit type conversion
  cout << x;
  return 0;


  cout << "Name: ";
  string name;
  getline(cin >> ws, name);
  cout << "Your name is: " << name;
  return 0;


  cout << "Enter your age: ";
  int age;
  cin >> age;
  if (age >= 18){
    cout << "Welcome to site!";
  } else if (age < 0) {
    cout << "Enter correct age!";
  } else {
    cout << "Access denied!";
  }


  cout << "Enter month number: ";
  int month;
  cin >> month;
  //Alternative for multiple if statements
  switch(month){
    case 1:
      cout << "January";
      break;
    case 2:
      cout << "February";
      break;
    case 3:
      cout << "March";
      break;
    //Soo onn...
    default:
      cout << "Invalid Number";
      break;
  }


  int grade = 60;
  //Ternary operator
  grade > 80 ? cout << "Well Done" : cout << "Better luck next time";



  cout << "Enter your name";
  string name;
  getline(cin,name);
  cout << 'Length' << name.length(); //Gives length
  cout << 'isEmpty' << name.empty(); //Checks if empty
  name.append("@gmail.com"); //Add characters at end of string
  cout << name.at(1); //Will return the character in given index
  name.insert(1,"#"); //Inserting characters (Position, Value)
  name.find('n'); //Look for first occurrence of given str, returns index
  name.erase(0,3);// Will remove the values of index 0,1,2 from string
  name.clear(); //Clears the full name
  cout << 'clearMethod' << name;


  // While LOOP
  string name;
  while (name.empty()){
    cout << "Enter name: ";
    getline(cin,name);
  }
  cout << "Welcome " << name;
  return 0;


  // Do While LOOP
  int number;
  do {
    cout << "Enter a positive number: ";
    cin >> number;
  } while (number < 0);
  cout << "The number is : " << number;
  return 0;


  // For LOOP
  for (int i = 0; i<=5; i++){
    cout << i << endl;
  }
  cout << "Happy New Year!";
  return 0;


  // BREAK and CONTINUE works the same!!


  string name = "Name";
  happyBirthday(name);
  double length = 2.9;
  double ans = square(length);
  cout << "Answer: " << ans;
  return 0;


  string top = "Pepperoni";
  bakePizza("Pepperoni");


  //Array
  string cars[] = {"Audi","Honda"}; //Should have same datatype
  string cards[3]; //Set array size and declaration
  cards[0] = "KING";
  cards[1] = "QUEEN";
  cards[2] = "ACE";
  cars[0] = "Camero";
  cout << cars[0] << endl; // Access by index


  //sizeof()
  cout << sizeof(cards)/sizeof(string) << " elements \n";
  cout << sizeof(cards[0]);


  //For Each Loop
  string cars[] = {"Audi", "Honda"};
  for (string car : cars){
    cout << car << endl;
  }


  int array[] = {10,1,9,2,8,3,7,4,6,5};
  int size = sizeof(array)/sizeof(array[0]);
  for (int i = 0; i < size; i++){
    int temp = array[i];
    for (int j = 0; j < size; j++){
      if (i != j && array[j] > array[i]){
        temp = array[j];
        array[j] = array[i];
        array[i] = temp;
      }
    }
  }
  for (int x: array) cout << x << " ";
  return 0;


  //Fill function
  string foods[100];
  fill(foods, foods + 10, "Hi");


  // 2D Array
  string alphabets[][2] = {{"a","b"},
                           {"c","d"},
                           {"e","f"}};

  //Memory Address
  int num = 2;
  cout << &num;

  //Pass by values , Pass by reference (Functions)
  //Const Parameters (Functions)


  //Credit Card Number Validation
  string address = "6011000990139424";
  int size = address.size();
  int sum1 = 0;
  int sum2 = 0;
  for (int i=0; i < size; i+=2){
    sum1 += doubleDigit(address[i] - '0');
  }
  for (int i=1; i < size; i+=2){
    sum2 += address[i] - '0';
  }
  if ((sum1+ sum2)%10 == 0){
    cout << "True";
  } else {
    cout << "False";
  }
  return 0;


  //Pointer
  int *pointer = nullptr;
  cout << pointer << endl;
  string name = "Bro";
  string *pName = &name;
  cout << pName << " " << *pName;

  //Dynamic memory
  int *pNum = NULL;
  pNum = new int;
  *pNum = 2;
  delete pNum;
  return 0;

  //Stack Overflow (INFINITE LOOPS)


  //Creation of struct
  student student1;
  student1.name = 'Bob';
  student1.gpa = 3.2;
  student1.enrolled = true;

  //Calling enum
  Day today = c;
  cout << today;


  //Creation of class
  Human human1;
  human1.name="Bob";
  human1.age=9;
  human1.occupation="barber";
  human1.eat();

  Game g("Fornite", 1932);
  cout << g.name << " " << g.year;
  */
}

/*
double square(double length){
  return length*length;
}

void bakePizza(){
  cout << "Here is your pizza";
}
void bakePizza(string toppings1){
  cout << "Here is your pizza with " << toppings1 << " is ready!";
}

int doubleDigit(int digit){
  int doubledDigit = digit * 2;
  if (to_string(doubledDigit).length() == 2){
    return (doubledDigit % 10 + doubledDigit / 10);
  } else {
    return doubledDigit;
  }
}
*/