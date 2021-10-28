#include <iostream>
using namespace std;

int main() {

    char input, lastChar;
    int letterCount = 0, vowelCount = 0, longestWord = 0, mostVowels = 0, wordCount = 0;
    int vowelCheck(char i);
    
    do {
        input = cin.get();
        
        while (input != ' ') {
            
            while ((input != 10) && (input != ' ')) {
                letterCount++;
                
                if (vowelCheck(input)) vowelCount++;
                
                input = cin.get();
            }
        
        longestWord = max(letterCount, longestWord);
        mostVowels = max(vowelCount, mostVowels);
        
        if (letterCount) wordCount++;
        
        letterCount = 0;
        vowelCount = 0;
        
        if (input == 10) break;
        
        input = cin.get();
        
        }
        
    } while ((input != 10));
    
    cout << "Longest Word " << longestWord << "\n";
    cout << "Total number of Words " << wordCount << "\n";
    cout << "Most vowels in a word " << mostVowels << "\n";
    
    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int vowelCheck(char i){
    if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' ) {
        return 1;
    } else {
        return 0;
    }
}
