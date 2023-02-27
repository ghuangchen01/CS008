#include <iostream>
#include <stack>
int adjacentLetter(std::string word);
int main() {
    std::cout<<adjacentLetter("hello")<<std::endl;
    std::cout<<adjacentLetter("world")<<std::endl;
    std::cout<<adjacentLetter("puppy")<<std::endl;
    return 0;
}
int adjacentLetter(std::string word){
    word = word + " ";
    int num = 1;
    int result;
    std::string resultStr = "";
    std::stack<char> charStack;
    for(int i = 0;i<word.size();i++){
        if(charStack.empty()){
            charStack.push(word[i]);
        }else if(!charStack.empty()){
            if(word[i]==charStack.top()){
                num++;
                charStack.push(word[i]);
            }else if(word[i]!=charStack.top()){
                resultStr = resultStr + std::to_string(num);
                num = 1;
                charStack.push(word[i]);
            }
        }
    }
    result = std::stoi(resultStr);
    return result;
}
