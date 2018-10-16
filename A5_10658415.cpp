#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct Student

{
    int IdNumber[5];
    string name[5];
    int age[5];
    string gender[5];
    double score[5];
    string grade[5];

};

int main()
{
    double totalScores = 0;
    
	int totalAge = 0;
	
	int maleCount = 0;
    
	int femaleCount = 0;
    
	double averageScore = 0;
    
	double averageAge = 0;
    
	int numStudents;
    
	double myscore;
    
	Student Kage;

    for (int i = 0; i<numStudents;i++)
    {
        cout<< "Enter your ID: ";
    
	    cin>> Kage.IdNumber[i];
    
	    cout << "Enter your Name: ";
    
	    cin>> Kage.name[i];
    
	    cout<< "Enter your Age: " ;
    
	    cin>> Kage.age[i];
    
	    cout <<"Enter your Gender: ";
    
	    cin >> Kage.gender[i];
    
	    cout << "Enter Score: ";
    
	    cin >> Kage.score[i];

        if(Kage.score[i]>=80 && Kage.score[i]<=100)
        {
            Kage.grade[i]="A";
            

        } else if(Kage.score[i]>=70 && Kage.score[i]<80)
        {
            Kage.grade[i] = "B";
            
        } else if(Kage.score[i]>=60 && Kage.score[i]<70)
        {
            Kage.grade[i] = "C" ;
            
        } else if(Kage.score[i]>=50 && Kage.score[i]<60) {
        Kage.grade[i]= "D";
        
        }   else if(Kage.score[i]>=40 && Kage.score[i]<=50)
        {
            Kage.grade[i] = "E";
            
        }    else  {Kage.grade[i]= "F";
        
        }
        cout <<endl;
        if (Kage.grade[i]=="male")
        {
            maleCount++;
        }
        
else if(Kage.gender[i]=="female")  {
    femaleCount++;
}

       cout << "*************************************************************************************************" <<endl;
cout << " ID" << "      " << "Name " << "       " << "Age" << "             " << "Gender " << "         " << "Score" << "        " << "Grade " << endl;

cout << "************************************************************************************************" << endl;
    for (int i=0;i <numStudents; i++)
    {

        totalScores=totalScores+Kage.score[i];

           totalAge= totalAge+Kage.age[i];

          averageScore= totalScores/numStudents;

           averageAge= totalAge/numStudents;

            cout << Kage.IdNumber[i] << "/t" << Kage.name[i] << "/t" << Kage.age[i] << "/t" << Kage.gender[i];
        cout << "/t" << Kage.score[i] << "/t" << Kage.grade[i] ;

       cout << endl;
    }


    cout << "The average age is:  " << averageAge << endl;

    cout << "The average score is: " << averageScore << endl;

    cout << "The number of females are: " << femaleCount << endl;

    cout << "The number of males are: " << maleCount << endl;

    ofstream A_student;
    A_student.open("Mystudents.txt", ios:: app);

    A_student<< "*************************************************************************************************" <<endl;

    A_student << " ID" << "  " << "Name " << "     " << "Age" << "      " << "Gender " << "     " << "Score" << "       " << "Grade " << endl;

    A_student <<  "************************************************************************************************" << endl;

     for (int i=0;i <numStudents; i++)
    {

          totalScores=totalScores+Kage.score[i];

           totalAge= totalAge+Kage.age[i];

          averageScore= totalScores/numStudents;

           averageAge=totalAge/numStudents;

            A_student << Kage.IdNumber[i] << "\t" << Kage.name[i] << "\t" << Kage.age[i] << "\t" << Kage.gender[i];
        A_student << "\t" << Kage.score[i] << "\t" << Kage.grade[i] ;

       A_student << endl;
    }

     A_student << "The average age is:  " << averageAge << endl;

    A_student << "The average score is: " << averageScore << endl;

   A_student << "The number of females are: " << femaleCount << endl;

    A_student << "The number of males are: " << maleCount << endl;

    A_student.close();

    }
    return 0;
}
