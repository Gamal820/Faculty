#include <iostream>
#include <string>
using namespace std;

struct student
{
    int id;
    string name;
    string groub ;
    float gba;
    string course;
};

struct course
{
    string course_name;
    int credit_hours;
    float degree;
    string doctor_name;





};
class students
{
private:
    student add[120];

public:
    void add_student( int size)
    {
        for (int i=0; i<size; i++)
        {
            cout<<"student"<<i<<endl;
            cout <<"enter id:";
            cin>>add[i].id;
            cout <<"enter name:";
            cin>>add[i].name;
            cout <<"enter groub:";
            cin>>add[i].groub;
            cout <<"enter gba:"<<endl ;
            cin>>add[i].gba;
            cout <<"enter course:"<<endl ;
            cin>>add[i].course;

        }

    }


    void update_student(int id)
    {
        int n;
        for (int i =0; i<120; i++)
        {
            if (add[i].id==id)
            {
                cout<<

                    "  what do you want to edit  1.id  2.name  3.groub  4.gba 5.course 6.all of them"

                    <<endl;
                cin>>n;

                switch(n)
                {

                case 1:
                    cout <<"enter id:";
                    cin>>add[i].id;
                    break;
                case 2:
                    cout <<"enter name:";
                    cin>>add[i].name;
                    break;
                case 3:
                    cout <<"enter groub:";
                    cin>>add[i].groub;
                    break;
                case 4:
                    cout <<"enter gba:"<<endl ;
                    cin>>add[i].gba;
                    break;

                case 5:
                    cout <<"enter course:"<<endl ;
                    cin>>add[i].course;
                    break;

                case 6 :
                    cout <<"enter id:";
                    cin>>add[n].id;
                    cout <<"enter name:";
                    cin>>add[i].name;
                    cout <<"enter groub:";
                    cin>>add[i].groub;
                    cout <<"enter gba:"<<endl ;
                    cin>>add[i].gba;
                    break;
                default:
                    cout<< "wrong number";
                    break;

                }
                cout<< "id: "<<add[i].id<<endl<< "name:" <<add[i].name<<endl<<"gba: " <<add[i].gba<<endl<< "groub: "<<add[i].groub<<endl<<"course" <<add[i].course <<endl;
            }





        }




    }


    void delete_student(int size1,int id)
    {
        int found=0;


        for (int i =0; i<120; i++)
        {
            if (add[i].id==id)
            {

                for(int j=i; j<size1-1; j++ )
                {


                    add[j].id=add[j+1].id;
                    add[j].groub=add[j+1].groub;
                    add[j].name=add[j+1].name;
                    add[j].gba=add[j+1].gba;
                    add[j].course=add[j+1].course;


                    found++;
                    i--;
                    size1--;
                }


            }



        }
        if(found==0)
        {
            cout<<"this id not found";

        }
        for(int i=0; i<size1; i++)
            cout<< "id: "<<add[i].id<<endl<< "name:" <<add[i].name<<endl<<"gba: " <<add[i].gba<<endl<< "groub: "<<add[i].groub<<endl<<"course"<<add[i].course<<endl;

    }
    void search_student(int id)
    {

        for (int i =0; i<50; i++)
        {
            if (add[i].id==id)


                cout<< "id: "<<add[i].id<<endl<< "name:" <<add[i].name<<endl<<"gba: " <<add[i].gba<<endl<< "groub: "<<add[i].groub<<endl<<"course"<<add[i].course<<endl;
        }

    }

    void print_student( int size)
    {

        for(int i=0; i<size; i++)
            cout<< "id: "<<add[i].id<<endl<< "name:" <<add[i].name<<endl<<"gba: " <<add[i].gba<<endl<< "groub: "<<add[i].groub<<endl<<"course"<<add[i].course<<endl;



    }

    float maximum_degree(int size)
    {


        int Max=add[0].gba;
        for(int i=0; i<size; i++)
        {


            if (add[i].gba>Max)
                Max=add[i].gba;

        }

        return Max;

    }
};
class courses
{

private:
    course addd[12];
public:

    void add_course( int size)
    {
        for (int i=0; i<size; i++)
        {
            cout<<"course"<<i<<endl;
            cout <<"enter credit hours";
            cin>>addd[i].credit_hours;
            cout <<"enter course name:";
            cin>>addd[i].course_name;
            cout <<"enter degree:";
            cin>>addd[i].degree;
            cout <<"enter doctor name:"<<endl ;
            cin>>addd[i].doctor_name;

        }


    }
    void update_course(string course_name)
    {
        int n;
        for (int i =0; i<12; i++)
        {
            if (addd[i].course_name==course_name)
            {
                cout<<

                    "  what do you want to edit  1.credit hours  2.doctor name  3.degree  4.course name 5.all of them"

                    <<endl;
                cin>>n;

                switch(n)
                {

                case 1:
                    cout <<"enter credit hours:";
                    cin>>addd[i].credit_hours;
                    break;
                case 2:
                    cout <<"enter doctor name:";
                    cin>>addd[i].doctor_name;
                    break;
                case 3:
                    cout <<"enter degree:";
                    cin>>addd[i].degree;
                    break;
                case 4:
                    cout <<"enter course name:"<<endl ;
                    cin>>addd[i].course_name;
                    break;
                case 5 :
                    cout <<"enter credit hours";
                    cin>>addd[i].credit_hours;
                    cout <<"enter course name:";
                    cin>>addd[i].course_name;
                    cout <<"enter degree:";
                    cin>>addd[i].degree;
                    cout <<"enter doctor name:"<<endl ;
                    cin>>addd[i].doctor_name;

                    break;
                default:
                    cout<< "wrong number";
                    break;

                }
                cout<< "course name "<<addd[i].course_name<<endl<< "doctor name:" <<addd[i].doctor_name<<endl<<"degree: " <<addd[i].degree<<endl<< "credit_hours: "<<addd[i].credit_hours<<endl;
            }





        }
    }

    void print_course( int size)
    {

        for(int i=0; i<size; i++)
            cout<< "course name "<<addd[i].course_name<<endl<< "doctor name:" <<addd[i].doctor_name<<endl<<"degree: " <<addd[i].degree<<endl<< "credit_hours: "<<addd[i].credit_hours<<endl;
    }

    void delete_course(int size,string course_name)
    {
        int found=0;
        for (int i =0; i<12; i++)
        {
            if (addd[i].course_name==course_name)
            {

                for(int j=i; j<size-1; j++ )
                {


                    addd[j].course_name=addd[j+1].course_name;
                    addd[j].doctor_name=addd[j+1].doctor_name;
                    addd[j].credit_hours=addd[j+1].credit_hours;
                    addd[j].degree=addd[j+1].degree;

                    found++;
                    i--;
                    size--;
                }


            }



        }
        if(found==0)
        {
            cout<<"this course name is not found";

        }
        for(int i=0; i<size; i++)
            cout<< "course name "<<addd[i].course_name<<endl<< "doctor name:" <<addd[i].doctor_name<<endl<<"degree: " <<addd[i].degree<<endl<< "credit_hours: "<<addd[i].credit_hours<<endl;
    }
    void search_course
    (string course_name)
    {

        for (int i =0; i<12; i++)
        {
            if (addd[i].course_name==course_name)

                cout<< "course name "<<addd[i].course_name<<endl<< "doctor name:" <<addd[i].doctor_name<<endl<<"degree: " <<addd[i].degree<<endl<< "credit_hours: "<<addd[i].credit_hours<<endl;
        }

    }
};


int main ()
{
    int n,id;
    int size1,size2;
    string course_name;
    students add;
    courses addd;
    cout<<"welcome you must add student and courses first"<<endl;
    cout <<"how many student do you want ";
    cin>>size1;
    add.add_student(size1);
    cout<<"how many courses do you want  ";
    cin>>size2;
    addd.add_course(size2);





    do
    {
        cout<<    "  what do you want to do   1.print student  2.print course 3.update student 4.ubdate course 5.search student 6.search course 7.maximum degree 8. delete student 9.delete course 10.exit"<<endl;
        cin>>n;

        switch(n)
        {
        case 1:
            add.print_student(size1);
            break;

        case 2:
            addd.print_course(size2);
            break;
        case 3:
            cout <<"enter id of the student :";
            cin>>id;
            add.update_student(id);
            break;
        case 4:
            cout<<"enter course name";
            cin>>course_name;
            addd.update_course(course_name);

            break;
        case 5:
            cout <<"enter id of the student :";
            cin>>id;
            add.search_student(id);
            break;
        case 6:
            cout<<"enter course name";
            cin>>course_name;
            addd.search_course(course_name);
            break;
        case 7:
            cout<<add.maximum_degree(size1)<<endl;
            break;

        case 8:
            cout <<"enter id of the student :";
            cin>>id;

            add.delete_student(size1,id);
            break;


        case 9:
            cout<<"enter course name";
            cin>>course_name;
            addd.delete_course(size2,course_name);
            break;
        default:
            cout<<"wrong number";
            break;
        }
    }
    while(n!=10);
}






