  // Que 1:- take 2 integer input and print the greatest of them?

// #include <iostream>
// using namespace std;
// int main(){
// int a,b;
// a=54,b=7;

// if(a==b)
//     cout<<"both are equal";
//     else if (a>b)
//     cout<<"first number " <<a<< " is the largest"<<endl;

//     else
//     cout<<" second number  " <<b<< " is the largest"<<endl;


//     return 0;
// }

// *********************************


//que 2:- given the radius of the circle predict whether numerically area of this  circle is larger than the circumference or not?
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter radius : ";
//     cin>>r;
//     float c=2*3.141592*r;
//     float a=3.141592*r*r;
//     if(a>c) cout<<"area > circumference " <<endl;
//     if(a<c) cout<<"area < circumference " <<endl;
//     if(a==c) cout<<"area = circumference " <<endl;


//     return 0;
// }

//***********************************

// Que 3:-any year is input through the keyboard. write a program to determine whether the year is a leap year or not.(considering leap year occurs after every 4 years)

// #include <iostream>
// using namespace std;
// int main(){
// int y;
// cout<<"Enter year : ";
// cin>>y;
// if(y%400==0) cout<<"Leap year";
// else if (y%100==0)cout<<"not a leap year";
// else if (y%4==0)cout<<"Leap year";
//     return 0;
// }
//****************************************
// Que 4:-given the length and breath a rectangle, write a program to find wheather numerically the area of the rectangle is greater than its perimeter?
// #include<iostream>
// using namespace std;
// int main(){
//     #include <iostream>
//     int l;
//     cout<<"Enter length : ";
//     cin>>l;
//     int b;
//     cout<<"Enter breath: ";
//     cin>>b;
//     int a=l*b;
//     int p=2*(l+b);
//     if(a>p) cout<<"area > perimeter " <<endl;
//     if(a<p) cout<<"area < perimeter " <<endl;
//     else cout<< "area=perimeter" <<endl;



//     return 0;
// }
//*************************************

// Que 5:- write a program to input sides of a triangle amd check whether a triangle is equilateral, scalene or isosceles triangle.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter the first side"<<endl;
//     cin>>a;
//     int b;
//     cout<<"enter the 2nd side"<<endl;
//     cin>>b;
//     int c;
//     cout<<"enter the 3rd side"<<endl;
//     cin>>c;
//      if(a==b && a==c) cout<<"equilareral"<<endl;
//      else if(a==b || a==c || b==c) cout<<"isoscales";
//      else cout<<"scalene";

// }
// *********************************************
// Que 6:-if the maejs of A,B and C are input through the keyboard,write a program to determine the student sciring least marks.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter 1st student marks : ";
//     cin>>a;
//      int b;
//     cout<<"enter 2nd student marks : ";
//     cin>>b;
//      int c;
//     cout<<"enter 3rd student marks : ";
//     cin>>c;
//     if(a<b && a<c) cout<<a;
//     else if(b<a && b<c) cout<<b;
//     else cout<<c;
//     return 0;
// }

// Que 7:- given a point (x,y) write a program to find out if it lies on the x-axis,y-axis or at the origin, viz.(0,0)
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter x coordinate : ";
//     cin>>x;
//     int y;
//     cout<<"enter y coordinate : ";
//     cin>>y;

//     if(x==0 && y==0) cout<<"Origin";
//     else if(x==0) cout<<"Y-Axis";
//     else if(y==0) cout<<"X-Axis";
//     else if(x>0 && y>0) cout<<"1st quardrant";
//     else if(x<0 && y>0) cout<<"2st quardrant";
//     else if(x<0 && y<0) cout<<"3st quardrant";
//     else if(x>0 && y<0) cout<<"4st quardrant";

//     return 0;
// }


// ***********************************************
// Que 8:- given three points(x1,y1),(x2,y2) and (x3,y3) write a program to check if all the three points fall on one straight line.
// #include<iostream>
// using namespace std;
// int main(){
//     int x1,y1,x2,y2,x3,y3
//     cout<<"Enter 1st point : ";  //A
//     cin>>x1,y1;
//     cout<<"Enter 2st point : ";   //B
//     cin>>x2,y2;
//     cout<<"Enter 3st point : ";   //C
//     cin>>x3,y3;

//     float m1=(y2-y1)/(x2-x1); //AB
//     float m2=(y3-y2)/(x3-x2);  //BC

//     if(m1==m2) cout<<"Collinear";
//     else cout<<"Non Collinear";

//     return 0;
// }

// Que 9:- write a c++ program to input any character and check whether it is the alphabet,digit or special character.
// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<" Enter a character : ";
//     cin>>ch;

//     int x=(int)ch;
//     if(x>=97 && x<=122) cout<<"Small Alphabet";
//     if(x>=48 && x<=90) cout<<"Capital Alphabet";
//     else cout<<"Special character";

//     return 0;
// }
//Que 10 predict the output-->

// #include <iostream>
// using namespace std;
// int main(){
//     int a= 500,b,c;
//     if(a>400)
//     b=300;
//     c=400;
//     cout<< "value of b and c are respectively " << b << " and " << c;
//     return 0;
// } 


//output  value of b and c respectively 300 and 400