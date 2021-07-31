#include <bits/stdc++.h>
using namespace std;

int minLength(string a, string b)
{

	// Stores the characters present
	// in string b
	map<char, int> Char;
	for (int i = 0; i < b.length(); i++) {

		Char[b[i]]++;
	}

	// Find index of characters of a
	// that are also present in string b
	map<char, vector<int> > CharacterIndex;

	for (int i = 0; i < a.length(); i++) {

		char x = a[i];

		// If character is present in string b
		if (Char.find(x) != Char.end()) {

			// Store the index of character
			CharacterIndex[x].push_back(i);
		}
	}

	int len = INT_MAX;

	// Flag is used to check if
	// substring is possible
	int flag;

	while (true) {

		// Assume that substring is
		// possible
		flag = 1;

		// Stores first and last
		// indices of the substring
		// respectively
		int firstVar, lastVar;

		for (int i = 0; i < b.length(); i++) {

			// For first character of string b
			if (i == 0) {

				// If the first character of
				// b is not present in a
				if (CharacterIndex.find(b[i])
					== CharacterIndex.end()) {

					flag = 0;
					break;
				}

				// If the first character of b
				// is present in a
				else {

					int x = *(
						CharacterIndex[b[i]].begin());

					// Remove the index from map
					CharacterIndex[b[i]].erase(
						CharacterIndex[b[i]].begin());

					// Update indices of
					// the substring
					firstVar = x;
					lastVar = x;
				}
			}

			// For the remaining characters of b
			else {

				int elementFound = 0;
				for (auto e : CharacterIndex[b[i]]) {

					if (e > lastVar) {

						// If index possible for
						// current character
						elementFound = 1;
						lastVar = e;
						break;
					}
				}
				if (elementFound == 0) {

					// If no index is possible
					flag = 0;
					break;
				}
			}
		}

		if (flag == 0) {

			// If no more substring
			// is possible
			break;
		}

		// Update the minimum length
		// of substring
		len = min(len,
				abs(lastVar - firstVar) + 1);
	}

	// Return the result
	return len;
}

void printSubsequence(string input, string output, string s)
{
    int cnt =0;
    if (input.empty()) {
        int temp = find(output, s);
        // cout<<temp;
        if(temp) {ans[cnt]=temp; cnt++;}
        cout << output << endl;
        return;
    }
    printSubsequence(input.substr(1), output + input[0], s);
    printSubsequence(input.substr(1), output, s);
}

int main()
{
	string a = "ABCD";
	string b = "ABDC";

	printSubsequence(b,"", a);
	
}
