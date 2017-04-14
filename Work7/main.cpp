#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

typedef string wordType;
wordType word;
int find_replace_word(ifstream&, ofstream&, wordType, wordType);

ifstream infile;
ofstream outfile;

int main()
{
    infile.open("infile.txt");
    outfile.open("outfile.txt");
    string find, replacement;
    cout << "Enter the word you would like to find(with a space): ";
    cin >> find;
    cout << endl;
    cout << "Enter the word you would like to replace it with: ";
    cin >> replacement;
    cout << endl << endl;
    int b = find_replace_word(infile, outfile, find, replacement);
    cout << endl;
    cout << "There were " << b << " replacements." << endl;
    return 0;
}

int find_replace_word(ifstream& infile, ofstream& outfile, wordType find, wordType replace)
{
    int a = 0;
    int d = 0;
    string word;
    
    while (infile)
    {
        infile >> word;
        if (word == find)
        {
            a++;
            outfile << replace << " ";
            cout << replace;
        }
        else
        {
            outfile << word << " ";
            cout << word;
        }
        cout << " ";
        d++;
        if ( (d%7) == 0)
        {
            cout << endl;
            outfile << endl;
        }
    }
    return a;
}

/*
 Enter the word you would like to find: the
 
 Enter the word you would like to replace it with: school
 
 
 In November 1866, shortly after school end
 of school Civil War, members of school
 First Congregational Society of Washington considered establishin
 a theological seminary for school education of
 African-American clergymen. Within a few weeks, school
 concept expanded to include a provision for
 establishing a University. Within two years, school
 University consisted of school colleges of Liberal
 Arts and Medicine. The new institution was
 named for General Oliver O. Howard, a
 Civil War hero who was both a
 founder of school University and, at school
 same time, commissioner of school Freedman's Bureau.
 The University charter as enacted by Congress
 and subsequently approved by President Andrew Johnson
 on March 2, 1867, designated Howard University
 as "a University for school education of
 youth in school liberal arts and sciences."
 The Freedmen's Bureau provided most of school
 early financial support of school University. In
 1879, Congress approved a special appropriation for
 school University. The charter was amended in
 1928 to authorize an annual federal appropriation
 for construction, development, improvement and maintenance of
 school University. In 1926, when Dr. Mordecai
 Wyatt Johnson, Howard's first black president, assumed
 school presidency of Howard, school University was
 comprised of eight schools and colleges, none
 of which held national accreditation. The institution's
 enrollment during this year stood at 1,700
 and its budget at $700,000. By school
 time Johnson retired 34 years later, school
 University boasted of 10 schools and colleges,
 all fully accredited; 6,000 students; a budget
 of $8 million, school addition of 20
 new buildings including an expanded physical plant;
 and a greatly enlarged faculty that included
 some of school most prominent black scholars
 of school day. Another key indicator of
 school University's enhanced academic status was school
 1955 inauguration of graduate programs that had
 school authority to grant school Ph.D degree.
 degree.
 There were 27 replacements.
 Press any key to continue . . .
 */
