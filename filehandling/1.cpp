/*wap to read the data from console and write the data ina text file named as 
student.Now I want to read the data from student text file and print the output on
console screen.
*/
/*to work with file handling  we need fstream header file to work with the files*/
#include<iostream>
using namespace std;
#include<fstream>
int main()
{ 
    string name;
    int age;
    ofstream fout;
    /*output file stream is used for printing output and ifstream input file stream is used to
    extract input from files */
    /*fout is a user defined object of ofstream.we can any name of this object. 

    but for simplicity purpose we can take the name of the object as fout and fin*/
    fout.open("student.txt");
    /*open is the command or pre defined function to open the file and we have to mention the complete
    path of the file
    if the file exists the object will do the operation on existing file,butif the file does not
    exist the object creates the file in the specified path and if the path is also not
    given then  the file is created in the same directory where we are working.
    fout or file output will close my student .txt file*/
    
    cout<<"Enter name and age";
  
    cin>>name;
    cin>>age;
    fout<<name<<endl;
    fout<<age;
    fout.close();
    ifstream fin;
    fin.open("student.txt");
    fin>>name;/*fin is the input file stream object which will be reading data from the file.*/
    fin>>age;
    cout<<name;
    cout<<age;
    fin.close();

}/*fstream is the libraray which is used to work with files*/