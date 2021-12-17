#include<iostream>
using namespace std ;
#include<fstream>
#include<ctype.h>
int main()
{  ofstream fout("TEST RESULT.doc");
    double p ;
    int pb,A;
   char ch='y',g , n[20] , l[20], s ;
   cout<<"\t\tWELCOME TO CORONA TEST :\n";
   cout<<"enter your first.name : ";
   cin>>n;           
   cout<<"enter your last.name : ";
   cin>>l;
   cout<<"choose your gender : \n";
	cout<<"  male (m)\t\t"<<"female (f)\n"<<"\tothers(o)\n";
	cout<<"choose : ";
	cin>>g;           
    if(g=='M'||g=='m')
     p=15;
    	else
	 p=10;
    cout<<"enter your age : \t";
    cin>>A;
    	if(A>=55)
	    p+=10;
	fout<<"\t\t CITY HOSPITAL";   
	fout<<"\tDOCTOR NAME : DR. BHUMIKA KHATI"; 
    fout<<"\t\tCORONA TEST RESULTS :\n\n";
	fout<<"NAME : "<<n<<" "<<l<<"\t\t\tgender : ";
	if(g=='M'||g=='m')
	fout<<"MALE\n";
	else if(g=='f'||g=='F')
	fout<<"FEMALE\n";
	else
	fout<<"OTHERS\n";
		fout<<"\n\n";
 int w=1;
	cout<<"are you an corona cured person (y/n): ";
	cin>>s;
	fout<<"are you an corona cured person : ";
	if(s=='y'||s=='Y')
	{fout<<"YES";
	  p=0;
	  w=0;
	}
	else
	fout<<"NO";
    fout<<"\n\nSYMPTOMS : ";
	do
	{if(w==0)
	 pb=5;
	else
	  {cout<<"\n\nare you having any of these : \n";
	   cout<<"1.difficulty in breathing\t\t"<<"2.coughing\n"<<"\t3.fever\t\t"<<"4.pain in lungs"<<"\t\t5.none of the above\n";
       cout<<"choose : ";
	   cin>>pb;
      }
	   if(pb==2)
	   fout<<"coughing";
	   else if(pb==3)
	   fout<<"fever";
	   else if(pb==1)
	   fout<<"difficulty in breathing";
        else if(pb==4)
      fout<<"pain in lungs";
	   else
	   {fout<<"NONE";
	    break;
       }
	  p+=10;
	 cout<<"\nwant to choose more (y/n) : ";
	 cin>>ch;
	 cout<<"\n\n";
	 if(ch=='y'||ch=='Y')
	 fout<<" , ";
    }while(ch=='y'||ch=='Y');
	char cn,h='y';
	int b;
	fout<<"\n\n";
	if(w==0)
	{cn='n';
	}
	else
	{cout<<"\nhave you travelled out of india in the last 15 days (y/n): ";
	 cin>>cn;
    }
	 fout<<"\nhave you travelled out of india in the last 15 days : ";
	if(cn=='y'||cn=='Y')
	{fout<<"YES";
	  p+=10;
	}
	else
	{fout<<"NO";
		
		
	}
	fout<<"\n\nDISEASES(excluding corona) : ";
	do
	{if(w==0)
	 b=5;
	else
	  {cout<<"\nare you having any of these diseases : \n";
	   cout<<"1.diabetes\t\t"<<"2.heart diseases\n"<<"\t3.asthma"<<"\t\t4.cancer"<<"\n\t\t5.none of the above";
	   cout<<"\nchoose : ";
       cin>>b;
      }
	  if(b==2)
	   fout<<"heart diseases";
	   else if(b==3)
	   fout<<"asthma";
	   else if(b==1)
	   fout<<"diabetes";
	   else if(b==4)
      fout<<"cancer";
      else
	   {fout<<"NONE";
	    break;
       }
	  p+=10;
	 cout<<"\nwant to choose more (y/n) : ";
	 cin>>h;
	 cout<<"\n\n";
	 if(h=='y'||h=='Y')
	 fout<<" , ";
    }while(h=='y'||h=='Y');
        fout<<"\n\n";
	if(w==0)
	 cn='n';
	else
	{cout<<"\n\nhave you came in touch with an corona infected (y/n): ";
	 cin>>cn;
    }
	 fout<<"have you came in touch with an corona infected : ";
	 if(cn=='y'||cn=='Y')
	 {fout<<"YES";
	   p+=10;
	 }
	else
	 fout<<"NO";
    	cout<<"\nchecking status : ";
		fout<<"\n\nSTATUS : "; 
  if(p==0)
   {fout<<"SAFE";
     cout<<"SAFE";
   }
  else if(p>0&&p<20)
   {  cout<<"LOW";
   	   fout<<"LOW";
   }
	 else if(p>=20&&p<30)
	{  cout<<"NORMAL";
		fout<<"NORMAL";
	}
	 else if(p>=30&&p<40)
	{  cout<<"HIGH";
		fout<<"HIGH";
	}
	 else if(p>=40&&p<50)
	{  cout<<"VERY HIGH";
		fout<<"VERY HIGH";
	}
  else
  { cout<<"CRITICAL";
     fout<<"CRITICAL";
  }
		 cout<<"\ntotal points : ";
      cout<<p;
		fout<<"\n\nCORONA POINTS: ";
           fout<<p;
           cout<<"\n\nREVIEW : ";
		fout<<"\n\nREVIEW : ";
		if(p>=40)
		{fout<<"YOU ARE INFECTED OR CAN BE INFECTED-REQUIRES SPECIAL TREATMENT";
		    cout<<"YOU ARE INFECTED OR CAN BE INFECTED-REQUIRES SPECIAL TREATMENT";
		}
		else if(p>=30&&p<40)
		{   cout<<"YOU NEED TO BE SELF QUARANTINED";
		   fout<<"YOU NEED TO BE SELF QUARANTINED";
        }
		else
		{ cout<<"YOU ARE SAFE";
		  fout<<"YOU ARE SAFE";
	    } 
	    char Z;
	    cout<<"\n\npress any key to continue : ";
	    cin>>Z;
	  return 0;
}

