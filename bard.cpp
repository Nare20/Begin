#include<iostream>
using namespace std;

int factorial(int n){
    if(n <= 1) return 1;
    return n * factorial( n-1);
    }
int fibonacii(int n){
    if(n <= 1) return n;
    return fibonacii(n-1)+fibonacii(n-2);
}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Factirial: " << factorial(n) << endl;
    cout << "Fibonacii: " << fibonacii(n) << endl;
    return 0;
}
#include<iostream>
using namespace std;
struct Student{
    string name;
    int age;
    float grade;
};

int main(){
    int n;
    cout << "How maney students? ";
    cin >> n;
    Student* arr = new Student[n];
    for(int i = 0; i < n; i++){ 
        cout << "Enter name: ";
        cin >> arr[i].name;
        cout << "Age: ";
        cin >> arr[i].age;
        cout << "Grade: ";
        cin >> arr[i].grade;
    }
    cout << "\nStudents:\n";
    for ( int i = 0; i < n; i++)
    {
        cout << arr[i].name << " "
             << arr[i].age << " "
             << arr[i].grade << endl;
}
    delete[] arr;
    return 0;
}