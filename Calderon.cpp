// Name: Daniel Calderon
// Date: October 20, 2015
// Read from file
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout,foutB,foutC;
    string word,newString,upperString,upperFirst;
    char letter,letter1;
    int wordcount =0;
    int lettercount =0;
    int average = 0;
    int word1 = 0;
	int word2 = 0;
	int word3 = 0;
	int word4 = 0;
	int word5 = 0;
	int word6 = 0;
	int word7 = 0;
	int word8 = 0;
	int word9 = 0;
	int word10 = 0;
    int wordM11 = 0;
    
    fin.open("gba.txt");
    fout.open("results.txt");
    foutB.open("capitalize.txt");
    foutC.open("uppercase.txt");
//***************************************************************************
//Check to make sure file opens properly,if it doesnt it stops the program   
    if(fin.fail())
    {
        cout << "error opening input file" << endl;
        exit(1);
    }
     if(fout.fail())
    {
        cout << "error opening output file" << endl;
        exit(1);
    }
        if(foutB.fail())
    {
        cout << "error opening outputB file" << endl;
        exit(1);
    }
        if(foutC.fail())
    {
        cout << "error opening outputC file" << endl;
        exit(1);
    }
//***************************************************************************
/* Counts the amount of letters in the file, the amount of words,and the occurence of wordss of a specific length*/
    while(!fin.eof())
    {
        lettercount += word.length();
        wordcount+=1;
        
        newString+= word + " ";
         
		if(word.length() == 1)
		{
			word1++;
		}
		else if(word.length() == 2)
		{
			word2++;
		}
		else if(word.length() == 3)
		{
			word3++;
		}
		else if(word.length() == 4)
		{
			word4++;
		}
		else if(word.length() == 5)
		{
			word5++;
		}
		else if(word.length() == 6)
		{
			word6++;
		}
		else if(word.length() == 7)
		{
			word7++;
		}
		else if(word.length() == 8)
		{
			word8++;
		}
		else if(word.length() == 9)
		{
			word9++;
		}
		else if(word.length() == 10)
		{
			word10++;
		}
		else if(word.length()>=11)
		{
			wordM11++;
			
		}
        fin >> word;
        
    }

 
//*************************************************************************** 
// Converts all the letters in the file to the upper case version fo them   
    for( int i = 0; i < newString.length(); i++)
    {
        letter = toupper(newString[i]);
        upperString += letter;
    }
//***************************************************************************
// Convertst he first letter of every word to the uppercase version of it
    for( int i = 0; i < newString.length();i++)
    {
        if(newString[i-1] == ' ' )
        {
            letter1 = toupper(newString[i]);
            upperFirst += ( letter1);
        }
        else if ( newString[i] == ' ')
        {
            letter1 = ' ';
            upperFirst +=  letter1;
        }
        else
        {
        letter1= newString[i];
        upperFirst += letter1;
        }
    }
//***************************************************************************
// Writes to the desired file the desired output

    average = lettercount / wordcount;
    fout << "average characters per word:  " << average << endl;
    fout << "wordcount is " << wordcount-1 << endl;
    
    fout << word1 << " words have the of length 1" << endl;
	fout << word2 << " words have the of length 2" << endl;
	fout << word3 << " words have the of length 3" << endl;
	fout << word4 << " words have the of length 4" << endl;
	fout << word5 << " words have the of length 5" << endl;
	fout << word6 << " words have the of length 6" << endl;
	fout << word7 << " words have the of length 7" << endl;
	fout << word8 << " words have the of length 8" << endl;
	fout << word9 << " words have the of length 9" << endl;
	fout << word10 << " words have the of length 10" << endl;
    fout << wordM11 << " words have the of length 11 or longer" << endl;
    foutB << upperString << endl;
    foutC << upperFirst << endl;
//*****************************************************************************
//Closes each of the files so that they dont get corrrupted    
    fin.close();
    fout.close();
    foutB.close();
    foutC.close();
    
    return 0;
}


