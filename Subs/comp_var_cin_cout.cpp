#include <iostream> 
int main() 
{ 
    using namespace std; 
    
    int number; 
    int secondnum;
    int newnumber;  
     
    cout << "what is your favourate number?";
    cout << endl;  
    cin >> number;
    cout << endl; 
    
    cout << "what number would you like to plus "; 
    cout << number; 
    cout << " by?"; 
    cout << endl; 
    cin >> secondnum; 
    cout << endl; 
    
    newnumber = number + secondnum; 
    
    cout << number; 
    cout << " + "; 
    cout << secondnum; 
    cout << " = "; 
    cout << newnumber; 
    cout << endl; 
     
    
    system ("pause"); 
    return 0; 
}   
