#include<iostream>
#include<string.h>

using namespace std ;

class Students {
	
	private :
		int stu_id ;
		char stu_name[50] ;
		int stu_age ;
		char stu_course[50] ;
		char stu_email[50] ;
		char stu_city[50] ;
		char stu_college[50] ;
	
	public :
		
		void setter (int stu_id , char stu_name[] , int stu_age , char stu_course[] , char stu_email[] , char stu_city[] , char stu_college[]){
			
			this->stu_id  = stu_id ;
			strcpy( this->stu_name,stu_name ) ;
			this->stu_age = stu_age ;
			strcpy( this->stu_course,stu_course ) ;
			strcpy( this->stu_email,stu_email ) ;
			strcpy( this->stu_city,stu_city ) ;
			strcpy( this->stu_college,stu_college ) ;
			
		}
		
		void getter (){
			
			cout<<stu_id<<endl ;
			cout<<stu_name<<endl ;
			cout<<stu_age<<endl ;
			cout<<stu_course<<endl ;
			cout<<stu_email<<endl ;
			cout<<stu_city<<endl ;
			cout<<stu_college<<endl ;
			
		}
	
};

int main (){
	
	Students o1 , o2 , o3 , o4 , o5 ;
	
	char stu_name[50] = "Dhairya" ;
	char stu_course[50] = "computer" ;
	char stu_email[50] = "dhairyapatel20104@gmail.com" ;
	char stu_city[50] = "mandvi" ;
	char stu_college[50] = "mohawk" ;
	
	o1.setter(1,stu_name,20,stu_course,stu_email,stu_city,stu_college);
	o1.getter();
	
	cout<<endl;	
	
	o2.setter(2,"Dhruv",23,"science","nfjbiuobbvjn@mkb.mail","surat","fanshawe");
	o2.getter();
	
	cout<<endl;	
	
	o3.setter(3,"paresh",25,"technolgy","bhvyuoybviy@kjnv.mail","anand","FETR");
	o3.getter();
	
	cout<<endl;	
	
	o4.setter(4,"Ila",27,"arts","vbfuyruyrbvdvhb@bsd.mail","nadiad","govenment colleage");
	o4.getter();
	
	cout<<endl;	
	
	o5.setter(5,"dhaval",23,"hacking","dhavalhacking@mkb.mail","mandvi","home");
	o5.getter();
	
	
	return 0 ;
}
