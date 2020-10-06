#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,i,x,y,ch;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");
	cleardevice();
	void createTrafficPole(){
	    //trafficpole
            line(10,20,10,415);
            rectangle(10,20,40,110);
            setcolor(4);
            circle(25,35,10);
            setcolor(14);
            circle(25,65,10);
            setcolor(10);
            circle(25,95,10);
            setcolor(15);
	}
	void createCar(){
	     //wheels
            circle(400-i,400,15);
            circle(400-i,400,7);
            floodfill(400-i,400,15);

            circle(250-i,400,15);
            circle(250-i,400,7);
            floodfill(250-i,400,15);

            setfillstyle(1,8);
            setcolor(8);
            circle(400-i,400,9);
            circle(250-i,400,9);
            circle(400-i,400,14);
            circle(250-i,400,14);
            floodfill(400-i,412,8);
            floodfill(250-i,412,8);
            setfillstyle(1,10);

            setcolor(10);
            arc(400-i,400,10,170,22);
            arc(250-i,400,10,170,22);
            line(272-i,397,378-i,397);//Below
            line(218-i,397,228-i,397);//BelowFront
            line(422-i,397,428-i,397);//BelowBack
            line(218-i,397,218-i,365);//upperfront
            line(218-i,365,272-i,365);//topfront
            line(272-i,365,300-i,320);//mirrorfront
            line(300-i,320,390-i,320);//toproof
            line(428-i,397,428-i,365);//upperback
            line(428-i,365,390-i,320);//backmirror
            line(350-i,397,350-i,320);//partition

            //window1
            line(345-i,325,345-i,365);
            line(280-i,365,345-i,365);
            line(305-i,325,345-i,325);
            line(280-i,365,305-i,326);

            setfillstyle(1,15);
            setcolor(15);
            line(343-i,327,343-i,363);
            line(284-i,363,343-i,363);
            line(307-i,327,343-i,327);
            line(284-i,363,307-i,327);
            floodfill(330-i,350,15);
            setcolor(10);


            //window2
            line(355-i,325,355-i,365);
            line(355-i,365,410-i,365);
            line(355-i,325,385-i,325);
            line(410-i,365,385-i,325);

            setfillstyle(1,15);
            setcolor(15);
            line(357-i,327,357-i,363);
            line(357-i,363,406-i,363);
            line(357-i,327,383-i,327);
            line(406-i,363,383-i,327);
            floodfill(360-i,345,15);

            //fillcar
            setcolor(10);
            setfillstyle(1,10);
            floodfill(370-i,370,10);
            floodfill(300-i,370,10);

            setcolor(15);
	}
	
	void changeSpeed(){
	    while(kbhit() && ch!=127)
            {
                    ch=getch();
                    if(ch==114)
                    {
                            setfillstyle(4,4);
                            floodfill(25,35,4);
                            delay(3000);
                            if(i==420)
                                    i=0;
                            setcolor(15);
                    }
                    if(ch==121)
                    {
                                    setfillstyle(4,14);
                                    floodfill(25,65,14);
                                    delay(250);
                                    if(i==420)
                                            i=0;
                                    setcolor(15);
                    }
                    if(ch==103)
                    {
                                    setfillstyle(4,10);
                                    floodfill(25,95,10);
                                    delay(50);
                                    if(i==420)
                                            i=0;
                    }
            }
            if(i==420)
                    i=0;
            if(ch==121)
                    delay(250);
            else
                    delay(40);
            cleardevice();
            setfillstyle(1,15);
            setcolor(15);
	}
	}
	for(i=0;i<=420;i+=20)
	{
            createTrafficPole();
            
	    //track
            line(0,415,420,415);

             createCar();
	     changeSpeed();
	}  
	getch();
	closegraph();
}
