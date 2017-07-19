#include <iostream>

#include <cstdlib>

#include <string>


using namespace std;

main()
{
//     for (int i = 0; i < 100; i++) cout << "\a";
//
//     cout<<"Please enter your name: ";
//
//     string name, first, last;
//
//     cin>> name;
//
//     cout<<"Your name is " << name << endl;
//
//
//
//     cout<< endl;
//
//     cout<<"Please enter your name: ";
//
// //    string name, first, last;
//
//     // cin>> name;
//
//     cin>> first;
//     cin>> last;
//     // cin>> last
//
//     name = first + " " + last;
//
//     cout<<"Your name is " << name << endl;






  //   cout<<"Please enter your name full: ";
   //
  //  string name, first, last;
   //
  //   // cin>> name;
   //
  //   // cin>> first;
  //   // cin>> last;
   //
  //   getline(cin, name);
  //   // cin>> last
   //
  //   // name = first + " " + last;
   //
  //   cout<<"Your name is " << name << endl;
   //
   //
   //
   //
   //
  //     cout<<"Please enter a string: ";
   //
  //     string test;
  //     // cin>> string;
   //
  //     getline(cin, test);
   //
  //     cout<<endl<<test;




  // std::string foo = "alpha";
  // std::string bar = "beta";
  //
  // if (foo==bar) std::cout << "foo and bar are equal\n";
  // if (foo!=bar) std::cout << "foo and bar are not equal\n";
  // if (foo< bar) std::cout << "foo is less than bar\n";
  // if (foo> bar) std::cout << "foo is greater than bar\n";
  // if (foo<=bar) std::cout << "foo is less than or equal to bar\n";
  // if (foo>=bar) std::cout << "foo is greater than or equal to bar\n";
  //





  // std::string str ("There are two needles in this haystack with needles.");
  // std::string str2 ("needle");
  //
  // // different member versions of find in the same order as above:
  // std::size_t found = str.find(str2);
  // if (found!=std::string::npos)
  //   std::cout << "first 'needle' found at: " << found << '\n';
  //
  // found=str.find("needles are small",found+1,6);
  // if (found!=std::string::npos)
  //   std::cout << "second 'needle' found at: " << found << '\n';
  //
  // found=str.find("haystack");
  // if (found!=std::string::npos)
  //   std::cout << "'haystack' also found at: " << found << '\n';
  //
  // found=str.find('.');
  // if (found!=std::string::npos)
  //   std::cout << "Period found at: " << found << '\n';
  //
  // // let's replace the first needle:
  // str.replace(str.find(str2),str2.length(),"preposition");
  // std::cout << str << '\n';






  std::string str ("Please, replace the vowels in this sentence by asterisks.");
  std::size_t found = str.find_first_of("aeiou");
  while (found!=std::string::npos)
  {
    str[found]='*';
    found=str.find_first_of("aeiou",found+1);
  }

  std::cout << str << '\n';




  //find last of, find first / last not of  / reverse begin / reverse find



  string stri = ("Test string");
  cout << "The size of str is " << stri.size() << " bytes.\n";
  cout << "The size of str is " << stri.length() << " bytes.\n";

}
