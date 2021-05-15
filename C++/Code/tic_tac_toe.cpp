#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    char s[3][3];
	    int c=0,cx=0,co=0,wino=0,winx=0;
	    for(int i=0;i<3;i++)
	    {
	        for(int j=0;j<3;j++)
	        {
	        cin>>s[i][j];
	        if( s[i][j]=='_')
	         c++;
	        else if( s[i][j]=='O')
	         co++;
	        else if( s[i][j]=='X')
	         cx++;
	        
	        }
	    }
	    if(s[0][0]==s[0][1] && s[0][1]==s[0][2] && s[0][0]!='_')//1 r
	    {
	    if(s[0][0]=='X')
	    winx++;
	    else if(s[0][0]=='O')
	    wino++;
	    }
	    if(s[1][0]==s[1][1] && s[1][1]==s[1][2] && s[1][0]!='_') //2 r
	    {
	        
	        if(s[1][0]=='X')
	        winx++;
	        else if(s[1][0]=='O')
	        wino++;
	        
	    }
	    if(s[2][0]==s[2][1] && s[2][1]==s[2][2] && s[2][0]!='_') //3 r
	    {
	        
	       if(s[2][0]=='X')
	       winx++;
	       else if(s[2][0]=='O')
	       wino++;
	       
	    }
	    if(s[0][1]==s[1][1] && s[1][1]==s[2][1] && s[0][1]!='_') //2 c
	    {
	        if(s[0][1]=='X')
	       winx++;
	       else if(s[0][1]=='O')
	       wino++;
	        
	    }
	    if(s[0][0]==s[1][0] && s[1][0]==s[2][0] && s[2][0]!='_') //1 c
	    {
	        
	        if(s[0][0]=='X')
	       winx++;
	       else if(s[0][0]=='O')
	       wino++;
	       
	    }
	    if(s[0][2]==s[1][2] && s[1][2]==s[2][2] && s[0][2]!='_') //3 c
	    {
	       
	        if(s[0][2]=='X')
	        winx++;
	       else if(s[0][2]=='O')
	       wino++;
	        
	    }
	    if(s[0][0]==s[1][1] && s[1][1]==s[2][2] && s[0][0]!='_') //1 d
	    {
	       
	        if(s[0][0]=='X')
	         winx++;
	         else if(s[0][0]=='O')
	         wino++;
	        
	    }
	    if(s[0][2]==s[1][1] && s[1][1]==s[2][0] && s[0][2]!='_') //2 d
	    {
	        if(s[0][2]=='X')
	         winx++;
	        else if(s[0][2]=='O')
	        wino++;
	        
	    }
	   if((wino==1 && winx==1) || (co>cx) || (cx-co>1))
	   cout<<"3\n";
	   else if(co==cx || cx>co)
	   {
	       if(winx==1 && wino==0)
	       {
	           if(cx>co)
	           cout<<"1\n";
	           else
	           cout<<"3\n";
	       }
	       else if(wino==1 && winx==0)
	       {
	           if(co==cx)
	           cout<<"1\n";
	           else
	           cout<<"3\n";
	       }
	       else if( wino==0 && winx==0)
	       {
	           if(c>0)
	           cout<<"2\n";
	           else
	           cout<<"1\n";
	       }
	       else if(winx==2 && wino==0 && c==0)
	       cout<<"1\n";
	       
	   }
	   else 
	   cout<<"3\n";
	    
	}
	return 0;
}
