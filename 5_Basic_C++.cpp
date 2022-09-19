// #include <iostream>
// using namespace std;

// int main()
// {
//     int a=10,b=5,c=15;
//     int sum = 5;
//     // sum = sum + a; //iss tarike se kiye gya assignment ko Compound Assignment
//                       //bolte h...isko hum dusre tarike se bhi likh sakte h jo ki 
//                       //kam memory leta h isse...jaisa ki aap dekh pa rahe h niche me 
//                       //wo code sum+=a;

//     sum+=a;    //this same as of sum = sum + a; but sum+=a; is more fast and better than sum=sum+a;
//     sum*=a;    //This is also a compound assignment and its return 150 because iske phle wale line me 
//                //sum+=a; (5+10=15) to sum ki value yha 15 ho gai thi issliye yha 150 aayega
                
//                //Agar hhum sum+=a; ko comment kar denge to hame sum*=a; ka retun 50 milega 

//     cout<<"Sum of this is "<<sum; //Yha dekhiye ki sum,jiski value 5 assign thi
//                                   //abhi uski value 15 ho gai kyu ki hum 
//                                   //compound assignment ki help se hum isko 
//                                   //store kiye sum me hi..issliye ye 15 return kar rha h                              
// }




//*******************Increments And Decreament**********************

#include <iostream>
using namespace std;
int main()
{
// int i=5,j;
// j=i++;
// cout<<j<<" "<<i<<endl;

// int k=5,l;
// l=++k;
// cout<<l<<" "<<k<<endl;

int a=5,b;
    b=2*(++a) + 2*(a++);  // yeh yha to work kar rha h per sabhi compilier me work nahi karega because it is not a right way to write this code
cout<<b<<" "<<a<<endl;;

// int c=5,d;
// d=2*c++ + 2*c++;
// cout<<d<<" "<<c<<endl;

return 0;
}



