#include <iostream>
#include <vector>
using namespace std;
void inputNum(string& num,vector<string>& v1,vector<string>& v2);
vector<string> addVectors(vector<string> v1,vector<string> v2);
void print(vector<string>& v);
bool checkOverFlow(vector<string> v);
int main()
{
    string num;
    cout<<"Enter an expression ----->";
    getline(cin,num);
    vector<string> v1, v2,result;
    inputNum(num,v1,v2);
    if(checkOverFlow(v1)&& checkOverFlow(v2)){
        result = addVectors(v1,v2);
        if(checkOverFlow(result)){
            print(v1);
            cout<<" + ";
            print(v2);
            cout<<" = ";
            print(result);
            cout<<endl;
        } else{
            print(v1);
            cout<<" + ";
            print(v2);
            cout<<" = overflow";
        }
    }else{
        cout<<"invalid operand(s)\n";
    }


}
void inputNum(string& num,vector<string>& v1,vector<string>& v2){
    bool findOperator = false;
    for(char x : num){
        string temp;
        temp.push_back(x);
        if(!isdigit(x)){
            findOperator = true;
        }
        if(!findOperator){
            v1.push_back(temp);
        }
        if(findOperator&& isdigit(x)){
            v2.push_back(temp);
        }
    }
}
vector<string> addVectors(vector<string> v1,vector<string> v2){
    string num1 = "";
    string num2 = "";
    for(int i = 0;i<v1.size();i++){
        num1 = num1 + v1[i];
    }
    for(int i = 0;i<v2.size();i++){
        num2 = num2 + v2[i];
    }
    int result = stoi(num1) + stoi(num2);
    string final = to_string(result);
    vector<string> v;
    for(int i =0;i< final.size();i++){
        string temp;
        temp.push_back(final[i]);
        v.push_back(temp);
    }
    return v;
}

bool checkOverFlow(vector<string> v){
    if(v.size()>25){
        return false;
    }
    return true;
}

void print(vector<string>& v){
    for(int i =0;i<v.size();i++){
        cout<<v[i];
    }
}