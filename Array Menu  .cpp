// Macy So

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int num[100]; // array
int ranNum = 0;

void PrintArray(){
    for (int i = 0; i < ranNum; i++){
        cout <<num [i] << " ";
    }
    cout << endl;
}

void CreateArray(){
    //int ranNum ;
    cout << "Enter the length of the array: " ;
    cin >> ranNum ; // valid
    
    srand((unsigned) time(0)) ;
    for (int i = 0; i <ranNum; i++){
        num[i] = rand() % 100  ;
    } // a series of ranNum
    PrintArray();
}


void FindHighLowSumAvg(){
    int sum = 0;
    int average = 0;
    
    int largest = num [0] ;
    int smallest = num[0];
    
    for (int i = 0; i < ranNum ; i++){
        if (num[i] > largest )
            largest = num[i];
        
        if (num [i] < smallest )
            smallest = num[i];
        
        sum += num [i];
    }
    
    average = sum / ranNum ;
    
    cout << "The largest number is " << largest << endl;
    cout << "The smallest number is " << smallest << endl ;
    cout << "The sum is " << sum << endl ;
    cout << "The average is " << average << endl ;
    PrintArray();

}
void AddANumber(){
    cout << "Enter a number to add: " ;
    int userNum ;
    cin >> userNum ;
    
    num[ranNum]  = userNum ;
    ranNum ++ ;
    
    PrintArray();

    
}

void FindNumber() {
    cout << "Enter the number to find: " ;
    int Num2Find = 0;
    cin >> Num2Find ;
    
    int i = 0;
    bool numFound = false;
    
    for (i = 0; i < ranNum; i++){
        if (num[i] == Num2Find){
            numFound = true ;
            cout << Num2Find <<"  is at index  "<< i << endl ;
            break ;
        }
    }
    
    if (numFound == false ){
        cout << Num2Find << " does not exist" << endl;
    }
    PrintArray();
    
}
string PrintMenu (){
    int choice ;
    string choice1;

    do {
        cout << "0. Create array" << endl ;
        cout << "1. Find high, low, sum average" << endl ;
        cout << "2. Add a number to the end" << endl ;
        cout << "3. Find the index of a number" << endl ;
        cout << "4. Insert number at index" << endl;
        cout << "5. Remove number at index" << endl ;
        cout << "6. Remove number" << endl ;
        cout << "7. Quit" << endl ;
        cin >> choice ;
    
        if (choice == 7){
            break;
        }
        if (choice == 0){
            CreateArray();
        }
        if (choice == 1){
            FindHighLowSumAvg();
        }
        if (choice == 2) {
            AddANumber() ;
        }
        if (choice == 3){
            FindNumber() ;
        }
    }
    while (choice != '0' || choice != '1' || choice != '2' || choice!= '3'|| choice != '4' || choice != '5' || choice != '6' || choice != '7');
    
    return choice1;
}

int main() {
    
    PrintMenu();
    
    return 0;
}

