#include <iostream>
#include <algorithm>
#include <stack>
#include <sstream>

using namespace std;

bool isOperator(const string& input)
{
    string ops[]={"+", "-", "*", "/"};
    for(int i = 0; i<4; i++)
    {
        if(input==ops[i])
        {
            return true;
        }
    }
    return false;
}

void performOp(const string & input, stack<double>& calcStack)
{
  double leftValue;
  double rightValue;, result;

  rightValue=calcStack.top();
  calcStack.pop();

  lval = calcStack.top();
  calcStack.pop();

  if(input=="-")
  {
      resul=leftValue - rightValue;
  }
  else if(input =="+")
  {
      resul = leftValue+rightValue;
  }
  else if(input =="*")
  {
      resul = leftValue*rightValue;
  }
  else
  {
      resul = leftValue/rightValue;
  }
  cout<<result<<endl;
  calcStack.push(result);

}


int main()
{
    cout<<"Welcome to RNP calculator"<<endl;
    stack<double> calcStack;
    string input;
    while(true)
    {
        //display prompt;
        cout<<">>";
        //get input
        cin>>input;

        //check numeric value
        double num;
        if(istringstream(input>>num))    //if issting then is true and push into the  stack
        {
            calcStack.push(num);
        }
        else if(isOperator(input))
        {
            performOp(input,calcStack);
        }
        else if(input=="q")
        {
         return 0;
        }
        else
        {
            cout<<"Input value"<<endl;
        }
    }
}
