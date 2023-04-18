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
			
			this->int stu_id  = int stu_id ;
			strcpy( this->stu_name,char stu_name ) ;
			this->int stu_age = int stu_age ;
			strcpy( this->char stu_course[],char stu_course[] ) ;
			strcpy( this->char char stu_email[],char stu_email[] ) ;
			strcpy( this->char stu_city[],char stu_city[] ) ;
			strcpy( this->char stu_college[],char stu_college[] ) ;
			
		}
		
		void getter (){
			
			
		}
	
};

int main (){
	
	Students o1 , o2 , o3 , o4 , o5 ;
	
	
	
	
	return 0 ;
}
