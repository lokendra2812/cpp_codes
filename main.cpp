/*
    result calculator
*/

//header files for print on console
#include <iostream>
#include <fstream>
#include <string>

//add standard namespace 
using namespace std;

//define constant for easy maintain in future
#define MARKS_MIN 33
#define MARKS_MAX 100
#define TOTAL_SUBJECT 5
#define PASS 1
#define FAIL 0
#define NOT_VALIED -1

//checking and define if not defined already
#ifndef MARKS_MIN
    #define MARKS_MIN 33
#endif 

#ifndef MARKS_MAX
    #define MARKS_MIN 100
#endif 

#ifndef TOTAL_SUBJECT
    #define TOTAL_SUBJECT 5
#endif

//defining class for student record
class Student
{
    private:
    //variable declaration for access member functions only
        float maths;
        float physics;
        float electronics;
        float hindi;
        float english;
    public:
    //Constructor for initialization
    Student(float maths,float physics,float electronics,float hindi, float english)
    {
        this->maths = maths;
        this->physics = physics;
        this->electronics = electronics;
        this->hindi = hindi;
        this->english = english;
    }
    
    //destructor
    ~Student()
    {
        
    }
    
    // function to check result in Maths
    int checkMathsResult()
    {
        if(this->maths>=0 && this->maths<=MARKS_MAX)
        {
            if(this->maths>=MARKS_MIN)
            {
                return PASS;
            }
            else
            {
                return FAIL;
            }
        }
        else
        {
            return NOT_VALIED;
        }
    }
    
    // function to check result in physics
    int checkPhysicsResult()
    {
        if(this->physics>=0 && this->physics<=MARKS_MAX)
        {
            if(this->physics>=MARKS_MIN)
            {
                return PASS;
            }
            else
            {
                return FAIL;
            }
        }
        else
        {
            return NOT_VALIED;
        }
    }
    
    // function to check result in electronics
    int checkElectronicsResult()
    {
        if(this->electronics>=0 && this->electronics<=MARKS_MAX)
        {
            if(this->electronics>=MARKS_MIN)
            {
                return PASS;
            }
            else
            {
                return FAIL;
            }
        }
        else
        {
            return NOT_VALIED;
        }
    }    
    
    // function to check result in hindi
    int checkHindiResult()
    {
        if(this->hindi>=0 && this->hindi<=MARKS_MAX)
        {
            if(this->hindi>=MARKS_MIN)
            {
                return PASS;
            }
            else
            {
                return FAIL;
            }
        }
        else
        {
            return NOT_VALIED;
        }
    }        
    
    // function to check result in english
    int checkEnglishResult()
    {
        if(this->english>=0 && this->english<=MARKS_MAX)
        {
            if(this->english>=MARKS_MIN)
            {
                return PASS;
            }
            else
            {
                return FAIL;
            }
        }
        else
        {
            return NOT_VALIED;
        }
    }  
    
    // check overall result and write result on console and in txt file 
    void overAllResult(string name,int maths_r,int physics_r,int electronics_r,int hindi_r,int english_r)
    {
        if(maths_r==1 && physics_r==1 && electronics_r==1 && hindi_r==1 && english_r==1)
        {
            float percentages = calCulatePercentages();
            //write output on console
            cout<<endl<<name<<" Passed with "<<percentages<< "%";
            
            //write result in file
            ofstream outfile;
            // open file if already created else create new file and open it
            outfile.open("result.txt", ios_base::app); 
            //append text 
            outfile<<endl<<name<<" Passed with "<<percentages<< "%";
            //close file instance
            outfile.close();
        }
        else
        {
            cout<<"Student failed !!!";
        }
    }
    
    //function to calculate percentages
    float calCulatePercentages()
    {
        return (this->maths+this->physics+this->electronics+this->hindi+this->english)/TOTAL_SUBJECT;
    }
    
};

//main function start from here to assemble all classes and objects
int main()
{
    //creating object for use cases
    Student rahul(100,50,100,60,100);
    //upper boudary use cases
    Student Aayasha(100,100,100,100,100);
    //lower boudary use cases
    Student Lokendra(33,33,33,33,33);
    rahul.overAllResult("rahul",rahul.checkMathsResult(),rahul.checkPhysicsResult(),rahul.checkElectronicsResult(),rahul.checkHindiResult(),rahul.checkEnglishResult());
    Aayasha.overAllResult("Aayasha",Aayasha.checkMathsResult(),Aayasha.checkPhysicsResult(),Aayasha.checkElectronicsResult(),Aayasha.checkHindiResult(),Aayasha.checkEnglishResult());
    Lokendra.overAllResult("Lokendra",Lokendra.checkMathsResult(),Lokendra.checkPhysicsResult(),Lokendra.checkElectronicsResult(),Lokendra.checkHindiResult(),Lokendra.checkEnglishResult());
    return 0;
}
