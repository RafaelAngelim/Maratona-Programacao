#include <iostream>
#include <map>

using namespace std;
map<char, char> newT;
void inicializa(){
    newT['1'] = '`';
    newT['2'] = '1';
    newT['3'] = '2';
    newT['4'] = '3';
    newT['5'] = '4';
    newT['6'] = '5';
    newT['7'] = '6';
    newT['8'] = '7';
    newT['9'] = '8';
    newT['0'] = '9';
    newT['-'] = '0';
    newT['='] = '-';
    newT['W'] = 'Q';
    newT['E'] = 'W';
    newT['R'] = 'E';
    newT['T'] = 'R';
    newT['Y'] = 'T';
    newT['U'] = 'Y';
    newT['I'] = 'U';
    newT['O'] = 'I';
    newT['P'] = 'O';
    newT['['] = 'P';
    newT[']'] = '[';
    newT['\\'] = ']';
    newT['S'] = 'A';
    newT['D'] = 'S';
    newT['F'] = 'D';
    newT['G'] = 'F';
    newT['H'] = 'G';
    newT['J'] = 'H';
    newT['K'] = 'J';
    newT['L'] = 'K';
    newT[';'] = 'L';
    newT['\''] = ';';
    newT['X'] = 'Z';
    newT['C'] = 'X';
    newT['V'] = 'C';
    newT['B'] = 'V';
    newT['N'] = 'B';
    newT['M'] = 'N';
    newT[','] = 'M';
    newT['.'] = ',';
    newT['/'] = '.';
    newT[' '] = ' ';
}
int main(){
    string string;

    inicializa();

    while(getline(cin, string)){
        for(int i = 0; i < string.length(); ++i) cout << newT[string[i]];
        cout << endl;
    }

    return 0;
}