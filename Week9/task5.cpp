#include<iostream>
using namespace std;
main(){
    string word1,word;
    cout<<"Enter the first string: ";
     getline(cin,word1);
    cout<<"Enter the second string: ";
    getline(cin,word);
    int occurence=0;
    int minlength;
    if(word1.length()< word.length()){
        minlength=word1.length();
    }
    else{
        minlength=word.length();
    }
    for (int i = 0;i<minlength; i++){
        if(word1[i]==word[i]){
occurence++;}
    } 
    cout<<"Number of common characters: "<<occurence;
}