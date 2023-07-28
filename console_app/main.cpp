#include<math.h>
#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;

int main()
{
	initwindow(800,800);
	double i;
	float T1=0.01; 
	float T2=0.01; 
    int x1=400,y1=100,x,y,x2=75,y2=372; 
    line(200,100,600,100); 
    line(50,50,750,50); 
    line(50,750,750,750);
    line(50,50,50,750);
    line(750,50,750,750);
    line(x1,y1,275,372); 
    setcolor(LIGHTMAGENTA);
    circle(275,372,20);
    floodfill(275,372,LIGHTMAGENTA);
	setcolor(GREEN); 
    circle(x2,y2,20);
	floodfill(x2,y2,GREEN);
    
	while(true){
    	
		if(x2==75){
    		
			for(x2=75;x2<=235;x2+=10){  
    		    line(200,100,600,100);
                line(50,50,750,50); 
                line(50,750,750,750);
                line(50,50,50,750);
                line(750,50,750,750);
                line(x1,y1,275,372); 
                setcolor(LIGHTMAGENTA);
                circle(275,372,20);
                floodfill(275,372,LIGHTMAGENTA);
                setcolor(GREEN); 
                circle(x2,y2,20);
	            floodfill(x2,y2,GREEN);
            Sleep(35);
            cleardevice();
		}
		
		}
    	else{
    
    	for(i=2;i>=1;i=i-T1){
    	    line(200,100,600,100);
		    line(50,50,750,50); 
            line(50,750,750,750);
            line(50,50,50,750);
            line(750,50,750,750);
            y=y1+300*sin(i); 
            x=x1+300*cos(i); 
            line(x1,y1,x,y);
            setcolor(LIGHTMAGENTA);
            circle(x,y,20);
            floodfill(x,y,LIGHTMAGENTA); 
            setcolor(GREEN); 
            circle(x-40,y,20);
            floodfill(x-40,y,GREEN);
            
        if(T1<=0.03){
        	T1+=0.01;
		}
            Sleep(30);
            cleardevice();
    }
    
        for(i=1;i<2;i=i+T2){
	        line(200,100,600,100);
            line(50,50,750,50); 
            line(50,750,750,750);
            line(50,50,50,750);
            line(750,50,750,750);
            y=y1+300*sin(i); 
            x=x1+300*cos(i); 
            line(x1,y1,x,y);
            setcolor(LIGHTMAGENTA);
            circle(x,y,20);
            floodfill(x,y,LIGHTMAGENTA);
            setcolor(GREEN);
            circle(x-40,y,20);
            floodfill(x-40,y,GREEN);
        if(T2<=0.03){
           T2+=0.01;
		}
            Sleep(30);
            cleardevice();    
	}
		}
		
	}
    getch();
    closegraph();
    }
