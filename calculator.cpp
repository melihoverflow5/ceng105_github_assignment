#include <iostream>
#include <string>

using namespace std;

class Calculator{
    public:
        int myoperand1{0};
        int myoperand2{0};
        string myoperator{};
        double result{0.0};

    void run(string mycal, int myop1, int myop2){
        if (mycal=="add")
            result=myop1+(double)myop2;
        else if (mycal=="multiply")
            result=myop1*(double)myop2;
        else if (mycal=="subtract")
            result=myop2-(double)myop1;
        else if (mycal=="divide")
            result=myop1/(double)myop2;

        cout<<"Result is: "<<result<<endl;
    }
};

int main() {
    Calculator mycalculator;
	string bos;
	
    cout<<"Enter your operation: ";
    cin>>mycalculator.myoperator>>mycalculator.myoperand1>>bos>>mycalculator.myoperand2;
    mycalculator.run(mycalculator.myoperator, mycalculator.myoperand1, mycalculator.myoperand2);
    return 0;
}


