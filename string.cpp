#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

/*
 //Input Output

    // string str;
    // cin>>str;
    // cout<<str;

    // string str1(5,'n');
    // cout<<str1;

    // string str2 = "Neeraj Yadav";
    // cout<<str2;

    // string str3;
    // getline(cin, str3); //For taking input with spaces
    // cout<<str3;


 //Operations and functions

    string s1 = "Nee";
    string s2 = "raj";

    // // cout<<s1+s2<<endl; //without changing s1 or s2
    // s1.append(s2); // or s1 = s1+s2;
    // cout<<s1; 

    // cout<<s1[0]<<" "<<s2[1];

    // s1.clear();  // clear out string value
    // cout<<s1;

    // cout<<s2.compare(s1); //return 0 if equal else 1

    // cout<<s1.empty(); //return 0 if empty else 1

    string str = "Helllllo";
    // str.erase(2,3);  // remove 3 character from index 2
    // cout<<str;

    // cout<<str.find("ell"); //return index of first element of substring if find

    // cout<<s1.insert(1, s2);  //insert s2 in s1 at index = 1

    // cout<<s1.length(); //return length of string 
    // // or s1.size();

    // string subSt = str.substr(5, 3);  //substring from index 5 with 3 character
    // cout<<subSt;

    // string s3 = "786";
    // int x = stoi(s3); //convert string to integer
    // cout<<x;

    // int x = 786;
    // cout<<to_string(x); //convert integer to string

    // sort(s1.begin(), s1.end());
    // cout<<s1;

    // string s4 = "jghgKAghgj";
    // sort(s4.begin(),s4.end()); // sort the string to AKgggghhjj

    // cout<<s4;
*/

 //String Questions
    
    /*
    // // Convert string into upper case
    string s1 = "NeerAj";
    // for(int i = 0; i < s1.size(); i++){
    //     if(s1[i] >= 'a' && s1[i] <= 'z')
    //         s1[i] -= 32;
    // }
    // cout<<s1;
        // or
    transform (s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<s1;
    */

    /*
    // // Convert string into lower case
    string s1 = "NeerAj";
    // for(int i = 0; i < s1.size(); i++){
    //     if(s1[i] >= 'A' && s1[i] <= 'Z')
    //         s1[i] += 32;
    // }
    // cout<<s1;
        // or
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout<<s1;
    */

   /*
   // // Biggest nummber from numeric string
   string s = "4986";
   sort(s.begin(), s.end(), greater<int>());
   cout<<s;
   */
    
   /*
   // // Most frequency
   string s = "hjjfhugfdsgdjjjcsgdialgjcdsb";
   int arr[26];
   for(int i = 0; i < 26; i++){
       arr[i] = 0;
   }
   for(int i = 0; i < s.size(); i++){
       arr[s[i] - 'a']++;
   }
   int maxFreq = 0;
   char ans = 'a';
   for(int i = 0; i < 26; i++){
       if(arr[i] >maxFreq){
           maxFreq = arr[i];
           ans = i + 'a';
       }
   }
   cout<<maxFreq<<"\n"<<ans;
  */

    

    return 0;
}