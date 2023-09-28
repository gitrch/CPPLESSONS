
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

//Main function
int main() {

    string sentence;
    cout << "Enter a sentence (Any length): " << endl;
    getline (cin,sentence);
    int index = 0; //index means location in the string (aka letter)
    int count = 0; //starts count at 0
    int maxL = 0;
    int lcount = 0;
    while(index < sentence.length()){
        if(sentence[index] == 'a' ||
            sentence[index] == 'e' ||
            sentence[index] == 'i' ||
            sentence[index] == 'o' ||
            sentence[index] == 'u'){
            count = count+1;
        }
        if(sentence[index] == ' '){
            if(maxL < count){
                maxL = lcount;
            }
            lcount = 0;


        }else
            lcount = lcount +1;
        index = index +1;
    }
    cout << "The # of vowels is: " << count << endl;
    cout << "The longest word is: " << maxL;

}
