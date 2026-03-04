// functions
#include<iostream>
using namespace std;
int addition (int a, int b){
    int r;
    r = a + b;
    return r;
}
int main(){
    int z;
    z = addition(5,3);
    cout << "The result is " << z;
}
int subtraction (int a, int b){
    int r;
    r = a-b;
    return r;
}
int main(){
    int x = 5, y = 3, z;
    z = subtraction(7,2);
    cout << "The result is " << z << endl;
    cout << "The second result is " << subtraction(8,2) << endl;
    cout << "The third result is " << subtraction(x,y) << endl;
    z = 4 + subtraction(x,y);
    cout << "The fourth result is " << z << endl;

}
void printMessage(){
    cout << "I am a function! " << endl;

}
int main(){
    printMessage();
}
    // by values
int addition(int a, int b){
    a = a + 10;
    b = b + 10;
    return a + b;
}
int main(){
    int x = 5, y = 3, z;
    z = addition(x, y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
    // by referances
void duplicate (int& a, int& b, int& c){
    a *= 2;
    b *= 2;
    c *= 2;
}
int main(){
    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
void duplicate (int a, int b, int& c){
    a *= 2;
    b *= 2;
    c *= 2;
}
int main(){
    int x = 1, y = 3, z = 7;
    duplicate(x, y, z);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
}
#include<string>
string concatenate(const string& a, const string& b){
    return a + b;
}
int main(){
    string s1 = "Hello ";
    string s2 = "World!";
    string s3 = concatenate(s1, s2);

    cout << s3 << endl << s1 << endl  << s2 << endl;

// inline functions
#include<string>
inline string concatenate(const string& a, const string&  b){
    return a + b;
}
int main(){
    string s1 = "Hello ";
    string s2 = "World!";
    string s3 = concatenate(s1, s2);

    cout << s3 << endl << s1 << endl  << s2 << endl;
}
// default  arguments
int divide( int a = 5, int const b = 2){
    int r;
    r = a/b;
    return (r);

}
int main(){
    cout << divide (12) << endl;
    cout << divide (20, 4) << endl;
return 0;}
// declaring functions prototypes
#include <iostream>
using namespace std;

void odd (int x);
void even (int x);

int main()
{
  int i;
  do {
    cout << "Please, enter number (0 to exit): ";
    cin >> i;
    odd (i);
  } while (i!=0);
  return 0;
}

void odd (int x)
{
  if ((x%2)!=0) cout << "It is odd.\n";
  else even (x);
}

void even (int x)
{
  if ((x%2)==0) cout << "It is even.\n";
    else odd (x);
}
// recursive functions
long factorial (long a){
    if ( a > 1)
     return (a * factorial (a-1));
     else
     return 1;
}
int main(){
    long number = 9;
    cout << number << "! = " << factorial(number);
}
// function overloading
int operate (int a, int b){
    return (a*b);
}
double operate (double a, double b){
    return (a/b);
}
int main(){
    int x = 5, y = 2;
    double n = 5.0, m = 2.0;
    cout << operate (x,y) << endl;
    cout << operate (n, m ) << endl;
    return 0;
}
// template functions
template <typename T>
T sum(T a, T b){
    return a + b;
}
template <typename T>
T operate(T x, T y){
    return x * y;
}
int main(){
    cout << sum(2.5, 3.5) << endl;;
    cout << operate(2, 3) << endl;

}*/
 
template <class T,  int N>
T fixed_multiply(T val){
    return val * N;
}
int main(){
    cout << fixed_multiply<int, 5>(10) << endl;
    cout << fixed_multiply<int, 3>(20) << endl;
}
