#include "VPL6.hpp"

#include <iostream>
#include <iomanip>

#include "VPL6-1.cpp"

using namespace std;

void separatePhrase(string str, list<string> &palavras) {
    string word = "";
    for (auto &x : str) {
        if (x == ' ') {
            palavras.push_back(word);
            word = "";
        } else {
            word += x;
        }
    }
    palavras.push_back(word);
}

int repetitions(string x,list<string> &palavras) {
    int count = 0;
    for(auto &y: palavras) {
        if(y==x){
            count ++;
        }
    }
    return count;
}

int total(list<string> &palavras) {
    int count = 0;
    for(auto &y: palavras) {
        if(y!=""){
            count++;
        }
    }
    return count;
}

bool sorter(const std::string& first, const std::string& second){
    unsigned int i=0;
    while ( (i<first.length()) && (i<second.length())){
        if (tolower(first[i])<tolower(second[i])) return true;
        else if (tolower(first[i])>tolower(second[i])) return false;
    ++i;
    }
    return ( first.length() < second.length() );
}

int main() {
    cout << fixed << showpoint; 
    // Como se fosse um .2 no printf, define as casa decimais de saída
    cout << setprecision(2);

    string str = " ";
    list<string> *palavras = new list<string>;
    
    while(str!=""){
        getline(cin,str);
        separatePhrase(str,*palavras);
    }

    list<indice> indexes = {};
    palavras->pop_back();
    palavras->sort(sorter);

    for(auto &n:*palavras) {
        if(n.length() >= 3){
            indice x;
            x.word = n;
            x.reps = repetitions(n,*palavras);
            indexes.push_back(x);
        }
    }

    int _total = total(*palavras);

    set<string> out;
    for(indice &x:indexes) {
        if(out.count(x.word)==0){
            cout<<x.word<<" "<<x.reps<<" "<<x.percentage(_total)<<endl;
            out.insert(x.word);
        }
    }
    
    delete palavras;
    return 0;
}