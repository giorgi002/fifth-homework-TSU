// first task(1) 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int k = 1; char p ='A';
//     while(k < 4){
//         cout << p++ << endl;
//         ++k; 
//     }
// }



// first task(2) 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     while(-25 || 0){
//         cout << "ar dasruldeba \n";
//         x++;
//     }
// }



// first task(3) 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     while(10 - 10 && x >7){
//         cout << "ar dasruldeba \n";
//         x++;
//     }
// }



// first task(4) 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 7, s= 30;
//     while(true){
//         s -=n;
//         n--;
//         if(n ==4 ) break;
//     }
//     cout << "s = " << s<< endl;
// }



// first task(5) 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 2, p =1;
//     while( n <= 7){
//         ++n;
//         if(n %2 ==0)continue;
//         p*=n;
//     }
//     cout << "p = " << p << endl;
// }



// second task 👇
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     double temp, sum =0;
//     int i =0;
//     fstream fin("temperature.in");
//     while(i < 12){
//         fin >> temp;
//         sum += temp;
//         i++;
//     }
//     cout << sum /12 << endl;
//     }



// third task 👇
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string Str;
//     int i =0, counter =0;
//     getline(cin, Str);
//     while(i < Str.size()){
//         if(Str[i] =='a')
//         counter ++;
//         ++i;
//     }
//     cout << counter << endl;
// }



// fourth task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int counter =0;
//     while(counter < 5 ){
//         cin >> arr[counter];
//         counter++;
//     }
//     int index =0;
//     while(index < 5){
//         cout << index << "\t"<< arr[index] << endl;
//         index++;
//     }
// }



// fifth task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[15];
//     int counter =0;
//     double sum =0;
//     while(counter < 15){
//         cin >> arr[counter];
//         sum += arr[counter];
//         counter++;
//     }
//     cout << counter/4. << endl;
// }



// sixth task 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[21];
//     double sum =0;
//     int counter =0;
//     while(counter < 21){
//         cin >> arr[counter];
//         sum += arr[counter];
//         counter++;
//     }
//     cout << "საშუალო უდრის " << sum / counter << endl; 
// }



// seventh task 👇
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string Str;
//     int i =0, counter;
//     getline(cin, Str);
//     while(i < Str.size()){
//         if(Str[i] == 'a')
//         counter++;
//         i++;
//     }
//     cout << counter << endl;
// }



// eight task 👇
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string Str;
//     int i =0,countera =0,counterb = 0;
//     getline(cin,Str);
//     while(i < Str.size()){
//         if(Str[i] =='a')
//         countera++;
//         else if(Str[i] =='b')
//         counterb++;
//         i++;
//     }
//     if(countera > counterb){
//         cout << "a დაიბეჭდა უფრო მეტჯერ, ვიდრე b: "<<countera<< endl;
//     }
//     else if(countera == counterb){
//         cout << "a და ბ დაიბეჭდა თანაბრად: "<< countera << endl;
//     }
//     else{
//         cout<<"b დაიბეჭდა უფრო მეტჯერ, ვიდრე a: " << counterb<< endl;
//     }
// }


// task nine 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int i = 1,m, counter =1;
//     cin >>m;
//     while(i <= m){
//         counter *= i;
//         i++;
//     }
//     cout << counter<< endl;
// }



// task ten 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5],i =0;
//     while(i < 5){
//         cin >> arr[i];
//         i++;
//     }
//     i =4;
//     while(i >=0){
//         cout << arr[i] << endl;
//         i--;
//     }
// }


// task eleven 👇(1)
// #include <iostream>
// #include <cmath>
// #include <fstream>
// using namespace std;
// int main(){
//     int i =0, sum =0,number;
//     ifstream fin("calcylator.in");
//     while( fin >> number){
//         sum += number;
//         i++;
//     }
//     fin.close();
//     fstream fout("calc.out",ios::out);
//     fout << sum << endl;
//     fout.close();
// }



// task eleven 👇(2)
// #include <iostream>
// #include <cmath>
// #include <fstream>
// using namespace std;
// int main(){
//     int i =0,multiply=1,number;
//     ifstream fin("calcylator.in");
//     while(fin >> number){
//         multiply *= number;
//         i++;
//     }
//     fin.close();
//     fstream fout("calcy.in", ios :: out);
//     fout << multiply << endl;
//     fout.close();
// }



// task eleven 👇(3)
// #include <iostream>
// #include <cmath>
// #include <fstream>
// using namespace std;
// int main(){
//     int i =0, multiply = 1,number;
//     fstream fin("calcylator.in");
//     while(fin >> number){
//         multiply *= number;
//         i++;
//     }
//     fin.close();
//     fstream fout("calcyl.in", ios::out);
//     fout << sqrt(multiply) << endl;
//     fout.close();
// }



// task twelve 👇
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main(){
//     int arr[12];
//     fstream fin("profit.txt");
//     for(int i =0; i<12; i++){
//         fin>> arr[i];
//     }
//     fin.close();
//     int max =0, min =0;
//     for(int i =1; i<12; i++){
//         if(arr[i] > arr[max]){
//             max =i;
//         }
//         if(arr[i] < arr[min]){
//             min =i;
//         }
//     }
//     cout << max +1<< arr[max]<< endl;
//     cout << min +1<< arr[min]<< endl;
// }



// task thirteen(1) 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5],i(0);
//     double sum;
//     while(i < 5){
//         cin >> arr[i];
//         if(arr[i] < 0){
//             sum += arr[i];
//         }
//         i++;
//     }
//     if(sum == 0) cout << "უარყოფითი რიცხვი არ გვაქვს \n"; 
//     else cout << "უარყოფით რიცხვების ჯამი არის " <<  sum << endl;
// } 



// task thirteen(2) 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5],i(0);
//     int max(0), min(0);
//     while(i < 5){
//         cin >> arr[i];
//         if(arr[i] > arr[max]){
//             max =i;
//         }
//         if(arr[i] < arr[min]){
//             min =i;
//         }
//         i++;
//     }
//     cout <<"ჯამი უმცირესი და უდიდესი ელემენტებისა არის "<< arr[max] + arr[min] << endl;
// }



// task thirteen(3) 👇
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5],i(0);
//     double multiply(1);
//     while(i < 5){
//         cin >> arr[i];
//         if(i % 2 ==0){
//             multiply *= arr[i];
//         }
//         i++;
//     }
//     cout << "ლუწ ინდექსზე მყოფი რიცხვების ნამრავლი არის " << multiply << endl;
// }



// task fourteen 👇
// #include <iostream>
// #include <cmath>
// #include <fstream>
// using namespace std;
// int main(){
//     string Str;
//     fstream fin("forteen.in");
//     getline(fin,Str);
//     fstream fout("forteen.out");
//     fout << "სტრიქონის სიგრძე არის " << Str.size() << endl;
// }



// task fifteen 👇
// #include <iostream>
// #include <string>
// #include <fstream>
// using namespace std;
// int main(){
//     string name,surname;
//     fstream fin("fifteen.in");
//     fstream fout("fifteen.out");
//     fin >> surname >>name;
//     fout << name <<  endl <<  surname <<  endl;
//     fin.close();
//     fout.close();
// }



// task sixteen 👇
// #include <iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     double price,weight,sum(0);
//     ifstream fin1("weight.in");
//     ifstream fin2("price.in");
//     while(fin1 >> weight, fin2 >> price ) sum += weight*price;
//     ofstream fout("answer.out", ios::out);
//     fout << sum;
// }



// task sixteen 👇
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {    
//   double a, b, c(0);
//   ifstream ifs1("weight.in");
//   ifstream ifs2("price.in");
//   while( ifs1 >> a, ifs2 >> b )  c += a * b;      
//   ofstream ofs("answer.out");
//   ofs << c;
// }


// task seventeen 👇
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string dog;
//     int i(0),n(0), age, height,counter(0);
//     cout << "შეიყვანეთ ძაღლების რაოდენობა"<<endl;
//     cin >>n;
//     while(i < n){
//         cout << "შეიყვანეთ ძაღლის მონაცემები"<<endl;
//         cin >> dog>> age >> height;
//         if(dog =="ბოქსიორი" && (age == 3 || age == 4) && (height >=55) )
//         counter++;
//         i++;
//     }
//     cout <<"2-3 წლის ბოქსიორების რაოდენობა, 55 სმ-ზე არანაკლები სიმაღლით:"<<  counter << endl;
// }



// task seventeen 👇
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;
// int main(){
//     string breed;
//     int height,age,counter(0);
//     ifstream fin("dogs.in");
//     while(fin >> breed>> age>> height){
//         if(breed =="ბოქსიორი" && (age ==3 || 4) && height >= 55)
//         counter++;
//     }
//     fin.close();
//     cout <<"2-3 წლის ბოქსიორების რაოდენობა, 55 სმ-ზე არანაკლები სიმაღლით არის "<< counter << endl;
// }



//  ვერ გავიგე 18 სავარჯიშო!!!
//  ვერ გავიგე 18 სავარჯიშო!!!
//  ვერ გავიგე 18 სავარჯიშო!!!
//  ვერ გავიგე 18 სავარჯიშო!!!
//  ვერ გავიგე 18 სავარჯიშო!!!
//  ვერ გავიგე 18 სავარჯიშო!!!
//  ვერ გავიგე 18 სავარჯიშო!!!










