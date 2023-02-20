#include <iostream>

using namespace std;

int main()
{
    string phrase = "Panda Zoo";
    cout << phrase.length() << endl; // calling length function
    cout << phrase[0] << endl; // zero indexing
    phrase[0] = 'B'; // strings are mutable in C++
    cout << phrase << endl;
    cout << phrase.find("Zoo", 0) << endl; // 2nd argument is starting index
    
    string phrasesub; // identify the new string
    phrasesub = phrase.substr(3, 3); // starting index, substring length
    cout << phrasesub;

    
    return 0;
}