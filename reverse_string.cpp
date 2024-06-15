#include<iostream>
#include<string>
using namespace std;
void reverseWordsInPlace(string &inputString) {
    int start = 0;

    for (int end = 0; end < inputString.length(); end++) {
        // Check if the current character is a space or if it's the last character
        if (inputString[end] == ' ' || end == inputString.length() - 1) {
            int wordEnd;

            // Determine the index of the last character of the current word
            if (end == inputString.length() - 1) {
                wordEnd = end;
            } else {
                wordEnd = end - 1;
            }

            // Reverse the letters within the current word in-place
            while (start < wordEnd) {
                swap(inputString[start], inputString[wordEnd]);
                start++;
                wordEnd--;
            }

            // Move the start position to the next word
            start = end + 1;
        }
    }
}
int main(){
    return 0;
}