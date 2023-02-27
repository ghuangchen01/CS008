//
// Created by Dave Smith on 1/28/23.
//

#include "functions.h"


vector<vector<std::string> > generateIndex(const std::string& filename)
{
    vector<std::string> strings = split(getFileContent(filename), " ");//get data into strings

    vector<vector<std::string> > index(26, vector<std::string>());//create vector with 26 columns
    for(int i = 0;i<strings.size();i++)//total number of data inside strings
    {

        std::string s = strings[i];//s equal to data in strings
        std::string t = s;// t = s which also equals to the data in strings
        t = tolower(removePunctuation(t));
        if(!contains(index[charToIndex(s[0])], t)) {//check if index contains the word
            index[charToIndex(s[0])].push_back(t);//index add word t
        }
    }
    return index;
}

int charToIndex(char c)
{
    return toupper(c) - 'A';
}
bool openFile(std::ifstream& fin, const std::string& filename)
{
    fin.open(filename);
    return !(fin.fail());
}
vector<std::string> getIndex(char c, const vector<vector<std::string> >& index)
{
    return index[charToIndex(c)];
}
void print(vector<vector<std::string> >& index)
{
    for(int i=0; i < index.size(); i++)
    {
        std::cout << static_cast<char>(i + 'A') << ": ";
        for(int j = 0;j<index[i].size();j++){
            std::string s = index[i][j];
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }
}

bool contains(vector<std::string>& vector, const std::string& string)
{
    for(int i = 0;i<vector.size();i++){//for loop in vector size
        std::string s = vector[i];//element in vector
        if(tolower(s) == tolower(string))//compare the element in vector (s) with the contains parameter string
            return true;
    }
    return false;
}
std::string tolower(const std::string& string)
{
    std::string s;//create string s
    for(char c : string)//every character in s
        s.push_back(tolower(c));//make it lowercase
    return s;
}


std::string removePunctuation(const std::string& string)
{
    int i = string.size() -1;
    if(!isalpha(string[i]))
        return string.substr(0, i);
    else
        return string;
}


std::string getFileContent(const std::string &filename)
{
    std::ifstream fin;
    std::string s, next;
    if(!openFile(fin, filename))
        exit(28);
    while(getline(fin, next))
        s += next + " ";
    fin.close();
    return s;
}

vector<std::string> split(const std::string& string, const std::string& delimiter)
{
    vector<std::string> v;
    std::string s = string;
    while(s.size() > 0)
    {
        int idx = s.find(delimiter);
        if(idx != std::string::npos)
        {
            v.push_back(s.substr(0, idx));
            s = s.substr(idx+1);
        }
        else
            break;
    }
    if(!s.empty())
        v.push_back(s);
    return v;
}

void sort(vector<std::string> &vector1) {
    vector<std::string> temp;
    temp.resize(vector1.size());//set temp to vector size
    for(int i = 0;i<vector1.size();i++){//get all the element in vector
        int place = 0;
        const char* word1 = vector1[i].c_str();//each word in vector
        for(int j = 0;j<vector1.size();j++){//another copy to the vector
            const char* word2 = vector1[j].c_str();//copies
            if(strcmp(word1,word2)>0){//compare
                place++;
            }
        }
        temp.at(place) = vector1[i];
    }
    vector1 = temp;
}
