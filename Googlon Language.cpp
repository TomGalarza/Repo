#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main() {
	here:
	int n = 0,p = 0,v = 0,sv = 0,pn = 0;
	
	string word;
	cout << "GOOGLON LANGUAGE\n\nPlease enter the number of words: ";
	cin >> n;
	string voc[n];
    
	cout << "\n\nPlease enter your text, press enter for each word: ";

	for (int i = 0;i < n; i++) {				//Ciclo para las palabras
		cin >> word;
		
		voc[i] = word;
		int num_len=word.size();
    	double No = 0;
		for (int j = 0; j < word.size(); j++) {				//Ciclo para las letras
			if (word[j] == 's') {
				No = No + 0;
			} else if (word[j] == 'x') {
				No = No + (1 * pow(20,j));
			} else if (word[j] == 'o') {
				No = No + (2 * pow(20,j));
			} else if (word[j] == 'c') {
				No = No + (3 * pow(20,j));
			} else if (word[j] == 'q') {
				No = No + (4 * pow(20,j));
			} else if (word[j] == 'n') {
				No = No + (5 * pow(20,j));
			} else if (word[j] == 'm') {
				No = No + (6 * pow(20,j));
			} else if (word[j] == 'w') {
				No = No + (7 * pow(20,j));
			} else if (word[j] == 'p') {
				No = No + (8 * pow(20,j));
			} else if (word[j] == 'f') {
				No = No + (9 * pow(20,j));
			} else if (word[j] == 'y') {
				No = No + (10 * pow(20,j));
			} else if (word[j] == 'h') {
				No = No + (11 * pow(20,j));
			} else if (word[j] == 'e') {
				No = No + (12 * pow(20,j));
			} else if (word[j] == 'l') {
				No = No + (13 * pow(20,j));
			} else if (word[j] == 'j') {
				No = No + (14 * pow(20,j));
			} else if (word[j] == 'r') {
				No = No + (15 * pow(20,j));
			} else if (word[j] == 'd') {
				No = No + (16 * pow(20,j));
			} else if (word[j] == 'g') {
				No = No + (17 * pow(20,j));
			} else if (word[j] == 'u') {
				No = No + (18 * pow(20,j));
			} else if (word[j] == 'i') {
				No = No + (19 * pow(20,j));
			}
			
		}
		
		if (No >= 81827) {							//Condicion para los "pretty numbers"
			if (fmod(No , 3) == 0) {
				pn = pn + 1;
			}
		}
		No = 0;

		if (word.size() == 6) {						//Condicion para las "prepositions"
			if (word[5] == 'd' || word[5] == 'x' || word[5] == 's' || word[5] == 'm' || word[5] == 'p' || word[5] == 'f') {
				if (word[0] != 'u' && word[1] != 'u' && word[2] != 'u' && word[3] != 'u' && word[4] != 'u') {
					p = p + 1;
				}
			}
		}
		
		if (word.size() >= 6) {						//Condiciones para los "verbs" y "subjunctive verbs"
			if (word[num_len-1] == 'o' || word[num_len-1] == 'c' || word[num_len-1] == 'q' || word[num_len-1] == 'n' || word[num_len-1] == 'w' || word[num_len-1] == 'y' || word[num_len-1] == 'h' || word[num_len-1] == 'e' || word[num_len-1] == 'l' || word[num_len-1] == 'j' || word[num_len-1] == 'r' || word[num_len-1] == 'g' || word[num_len-1] == 'i') {
				v = v + 1;
				if (word[0] == 'o' || word[0] == 'c' || word[0] == 'q' || word[0] == 'n' || word[0] == 'w' || word[0] == 'y' || word[0] == 'h' || word[0] == 'e' || word[0] == 'l' || word[0] == 'j' || word[0] == 'r' || word[0] == 'g' || word[0] == 'i') {
					sv = sv + 1;
				}
			}
		}
	}
	system("cls");
	cout << "1) There are " << p << " prepositions in the text\n2) There are " << v << " verbs in the text\n3) There are " << sv << " subjunctive verbs in the text\n4) Vocabulary list: "; 
	for (int k = 0; k < n; k++){cout << voc[k] <<" ";}
	cout << "\n5) There are " << pn << " distinct pretty numbers in the text\n\n";
	system("pause");
	system("cls");
	goto here;
}
