#include<simplecpp>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <windows.h>


main_program
{
    int a=rand()%4+1,b=rand()%4+1,c=rand()%4+1,d=rand()%4+1,e=rand()%4+1,positionx,positiony,extra=0,ii,j,k,l,m;
    initCanvas("Piano Tiles",600,600);
    while(true)
    {
        int touch,touch_x,touch_y;
        int Touch,Touch_x,Touch_y;
        Rectangle R1(150,150,300,300);  //first page
        R1.setFill(true);
        Text start(450,150,"START GAME");
        Rectangle R2(450,450,300,300);
        R2.setFill(true);
        Text Instructions(150,450,"Instructions");
        //a=position of tile in row 1,b=position of tile in row 2,c=position of tile in row 3,d=position of tile in row 4,e=position of tile in row 5
        //ii=new position of tile in row 1,j=new position of tile in row 2,k=new position of tile in row 3,l=new position of tile in row 4,m=new position of tile in row 5
        touch=getClick();
        touch_x=touch/65536;
        touch_y=touch%65536;
        while(true)
        {


            if((touch_x<300)&&(touch_x>0)&&(touch_y<600)&&(touch_y>300))
            {
                start.hide();
                R1.hide();
                R2.hide();
                Instructions.hide();
                Text instr(300,80,"Instructions");
                Text Classic(300,200,"Classic Mode");
                Text Zen(300,250,"Zen Mode");
                Text Relay(300,300,"Relay Mode");
                Text Trial(300,350,"Trial Mode");
                touch=getClick();
                touch_x=touch/65536;
                touch_y=touch%65536;


//for instruction

                if((touch_x<320)&&(touch_x>280)&&(touch_y<210)&&(touch_y>190))
                {
                    instr.hide();
                    Classic.hide();
                    Zen.hide();
                    Relay.hide();
                    Trial.hide();
                    Text t1(300,100,"There is a set number of tiles the player must touch to win.");
                    Text t2(300,120,"The screen moves manually, at the rate which the tiles are touched.");
                    Text t3(300,140,"The player may attempt to touch these tiles in as little time as possible.");
                    Text t4(300,500,"Click anywhere to continue");
                    int touch=getClick();
                    int touch_x=touch/65536;
                    int touch_y=touch%65536;
                    break;
                }




//for instruction

                if((touch_x<320)&&(touch_x>280)&&(touch_y>240)&&(touch_y<260))
                {
                    instr.hide();
                    Classic.hide();
                    Zen.hide();
                    Relay.hide();
                    Trial.hide();
                    Text t1(300,100,"There is a set time limit and the player may attempt to press");
                    Text t2(300,120,"as many tiles as possible before the time runs out. As with classic mode, the screen");
                    Text t3(300,140," moves at the rate which black tiles are pressed.");
                    Text t4(300,500,"Click anywhere to continue");
                    int touch=getClick();
                    int touch_x=touch/65536;
                    int touch_y=touch%65536;
                    break;
                }





//for instruction
                if((touch_x<320)&&(touch_x>280)&&(touch_y>290)&&(touch_y<310))
                {
                    instr.hide();
                    Classic.hide();
                    Zen.hide();
                    Relay.hide();
                    Trial.hide();
                    Text t1(300,100,"Similar to zen mode, but the time limit can be reset by tapping tiles.");
                    Text t2(300,120,"If the player is unable to tap fifty tiles before the time runs out, the game ends.");
                    Text t3(300,140,"The screen moves at the player's pace in the same way as classic and zen mode.");
                    Text t4(300,500,"Click anywhere to continue");
                    int touch=getClick();
                    int touch_x=touch/65536;
                    int touch_y=touch%65536;
                    break;
                }





//for instruction
                if((touch_x<320)&&(touch_x>280)&&(touch_y>340)&&(touch_y<360))
                {
                    instr.hide();
                    Classic.hide();
                    Zen.hide();
                    Relay.hide();
                    Trial.hide();
                    Text t1(300,100,"The game goes on continuously till the user doesn't click on the wrong tile");
                    Text t2(300,120,"This mode is only for practice");
                    Text t3(300,500,"Click anywhere to continue");
                    int touch=getClick();
                    int touch_x=touch/65536;
                    int touch_y=touch%65536;
                    break;
                }
                else break;
            }


//creating game window


            if((touch_x<600)&&(touch_x>300)&&(touch_y<300)&&(touch_y>0))
            {
                start.hide();
                R1.hide();
                R2.hide();
                Instructions.hide();
                while(true)
                {
                    Rectangle R3(150,75,300,150);
                    R3.setFill(true);
                    Text classic(450,75,"CLASSIC");
                    Rectangle R4(450,225,300,150);
                    R4.setFill(true);
                    Text zen(150,225,"ZEN");
                    Rectangle R5(150,375,300,150);
                    R5.setFill(true);
                    Text relay(450,375,"RELAY");
                    Rectangle R6(450,525,300,150);
                    R6.setFill(true);
                    Text trial(150,525,"TRIAL");

                    touch=getClick();
                    touch_x=touch/65536;
                    touch_y=touch%65536;
                    if((touch_x<300)&&(touch_x>0)&&(touch_y<600)&&(touch_y>450))
                    {
                        R3.hide();
                        R4.hide();
                        R5.hide();
                        R6.hide();
                        classic.hide();
                        zen.hide();
                        relay.hide();
                        trial.hide();



                        Rectangle display(300, 300, 280, 400);
                        Line v1(230,0,230,600);
                        Line v2(300,0,300,600);
                        Line v3(370,0,370,600);
                        Rectangle top(300, 50, 600, 100);
                        top.setFill(true);
                        Rectangle bottom(300, 550, 600, 100);
                        bottom.setFill(true);

                        Rectangle r1(195+(e-1)*70,50,70,100);
                        r1.setFill(true);
                        Rectangle r2(195+(d-1)*70,150,70,100);
                        r2.setFill(true);
                        Rectangle r3(195+(c-1)*70,250,70,100);
                        r3.setFill(true);
                        Rectangle r4(195+(b-1)*70,350,70,100);
                        r4.setFill(true);
                        Rectangle r5(195+(a-1)*70,450,70,100);
                        r5.setFill(true);

                        int count_score=0;

                        while(true)
                        {

                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+a*70)&&positionx>(160+(a-1)*70))
                                {
                                    Beep(600,40);
                                    count_score++;
                                }

                                else
                                {
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;
                                }

                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);


                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }
                                }
                                a=m;
                            }

                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+b*70)&&positionx>(160+(b-1)*70))
                                {
                                    Beep(620,40);
                                    count_score++;
                                }
                                else
                                {
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;
                                }

                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);


                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }
                                }
                            }
                            b=l;

                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+c*70)&&positionx>(160+(c-1)*70))
                                {
                                    Beep(640,40);
                                    count_score++;
                                }
                                else
                                {
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;
                                }

                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);

                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }
                                }
                            }
                            c=k;

                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+d*70)&&positionx>(160+(d-1)*70))
                                {
                                    Beep(660,40);
                                    count_score++;
                                }
                                else
                                {
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;
                                }

                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);

                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }
                                }
                            }
                            d=j;

                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+e*70)&&positionx>(160+(e-1)*70))
                                {
                                    Beep(680,40);
                                    count_score++;
                                }
                                else
                                {
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;
                                }

                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);


                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }
                                }
                            }
                            e=ii;
                        }

                        Text message_1(300,200,"GAME OVER");
                        Text message_3(300,230,"Best");
                        Text message_2(300,280,"Your Score is");
                        Text score(300,300,count_score);
                        int input=0;
                        ifstream highscore("trialmodehighscore.txt");
                        highscore>>input;
                        if(count_score>input)
                        {
                            input=count_score;
                            ofstream highscore("trialmodehighscore.txt");
                            highscore<<count_score;
                        }
                        Text highScore(300,250,input);

                        Rectangle button_play_again(250,350,80,40);
                        Text play_again(250,350,"Play Again");
                        Rectangle button_exit(350,350,80,40);
                        Text exit_(350,350,"Exit");
                        while(true)
                        {
                            int click_1=getClick();
                            int position_x=click_1/65536;
                            int position_y=click_1%65536;

                            if(position_y>=330&&position_y<=370&&position_x<=290&&position_x>=210)
                                break;
                            if(position_y>=330&&position_y<=370&&position_x<=390&&position_x>=310)

                                exit(0);
                            else continue;
                        }

                    }
                    if((touch_x<600)&&(touch_x>300)&&(touch_y<150)&&(touch_y>0))
                    {
                        R3.hide();
                        R4.hide();
                        R5.hide();
                        R6.hide();
                        classic.hide();
                        zen.hide();
                        relay.hide();
                        trial.hide();

                        Rectangle display(300, 300, 280, 400);
                        Line v1(230,0,230,600);
                        Line v2(300,0,300,600);
                        Line v3(370,0,370,600);
                        Rectangle top(300, 50, 600, 100);
                        top.setFill(true);
                        Rectangle bottom(300, 550, 600, 100);
                        bottom.setFill(true);

                        Rectangle r1(195+(e-1)*70,50,70,100);
                        r1.setFill(true);
                        Rectangle r2(195+(d-1)*70,150,70,100);
                        r2.setFill(true);
                        Rectangle r3(195+(c-1)*70,250,70,100);
                        r3.setFill(true);
                        Rectangle r4(195+(b-1)*70,350,70,100);
                        r4.setFill(true);
                        Rectangle r5(195+(a-1)*70,450,70,100);
                        r5.setFill(true);
                        const clock_t begin_time = clock();
                        int count_score=0;





                        while(count_score<25)
                        {


                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+a*70)&&positionx>(160+(a-1)*70))
                                {
                                    count_score++;
                                    Beep(600,40);
                                }

                                else
                                {
                                    float time=float( clock () - begin_time ) /  CLOCKS_PER_SEC;
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;


                                }






                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);


                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }



                                }
                                a=m;
                            }


                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+b*70)&&positionx>(160+(b-1)*70))
                                {
                                    count_score++;
                                    Beep(620,40);
                                }
                                else
                                {
                                    float time=float( clock () - begin_time ) /  CLOCKS_PER_SEC;
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;


                                }







                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);


                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }



                                }
                            }
                            b=l;

                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+c*70)&&positionx>(160+(c-1)*70))
                                {
                                    {
                                        count_score++;
                                        Beep(640,40);
                                    }
                                }
                                else
                                {
                                    float time=float( clock () - begin_time ) /  CLOCKS_PER_SEC;
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;


                                }







                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);

                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }



                                }
                            }
                            c=k;


                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+d*70)&&positionx>(160+(d-1)*70))
                                {
                                    {
                                        count_score++;
                                        Beep(660,40);
                                    }
                                }
                                else
                                {
                                    float time=float( clock () - begin_time ) /  CLOCKS_PER_SEC;
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;

                                }





                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);


                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }



                                }
                            }
                            d=j;


                            if(extra==0)
                            {
                                int click=getClick();
                                positionx=click/65536;
                                positiony=click%65536;

                                if(positiony>=400&&positiony<=500&&positionx<=(160+e*70)&&positionx>(160+(e-1)*70))
                                {
                                    count_score++;
                                    Beep(680,40);
                                }
                                else
                                {
                                    float time=float( clock () - begin_time ) /  CLOCKS_PER_SEC;
                                    display.hide();
                                    v1.hide();
                                    v2.hide();
                                    v3.hide();
                                    top.hide();
                                    bottom.hide();
                                    r1.hide();
                                    r2.hide();
                                    r3.hide();
                                    r4.hide();
                                    r5.hide();
                                    break;


                                }


                                for(int i=0; i<10; i++)
                                {
                                    ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                    r5.move(0,10);
                                    r4.move(0,10);
                                    r3.move(0,10);
                                    r2.move(0,10);
                                    r1.move(0,10);


                                    if(r1.getY()>=550)
                                    {
                                        r1.moveTo(195+(ii-1)*70,50);
                                    }
                                    if(r2.getY()>=550)
                                    {
                                        r2.moveTo(195+(j-1)*70,50);
                                    }
                                    if(r3.getY()>=550)
                                    {
                                        r3.moveTo(195+(k-1)*70,50);
                                    }
                                    if(r4.getY()>=550)
                                    {
                                        r4.moveTo(195+(l-1)*70,50);
                                    }
                                    if(r5.getY()>=550)
                                    {
                                        r5.moveTo(195+(m-1)*70,50);
                                    }





                                }



                            }
                            e=ii;
                        }
                        display.hide();
                        v1.hide();
                        v2.hide();
                        v3.hide();
                        top.hide();
                        bottom.hide();
                        r1.hide();
                        r2.hide();
                        r3.hide();
                        r4.hide();
                        r5.hide();
                        float time=float( clock () - begin_time ) /  CLOCKS_PER_SEC;
                        Text message_1(300,200,"GAME OVER");
                        Text message_3(300,230,"Best");
                        Text message_2(300,280,"Your Score is");
                        if(count_score!=25)
                        {
                            time=0;
                        }
                        Text score(300,300,time);
                        float input=0;
                        ifstream highscore("classicmodehighscore.txt");
                        highscore>>input;
                        if(time<input && time!=0)
                        {
                            input=time;
                            ofstream highscore("classicmodehighscore.txt");
                            highscore<<time;
                        }
                        Text highScore(300,250,input);

                        Rectangle button_play_again(250,350,80,40);
                        Text play_again(250,350,"Play Again");
                        Rectangle button_exit(350,350,80,40);
                        Text exit_(350,350,"Exit");
                        while(true)
                        {
                            int click_1=getClick();
                            int position_x=click_1/65536;
                            int position_y=click_1%65536;

                            if(position_y>=330&&position_y<=370&&position_x<=290&&position_x>=210)
                                break;
                            if(position_y>=330&&position_y<=370&&position_x<=390&&position_x>=310)

                                exit(0);
                            else continue;
                        }
                    }
                    if((touch_x<300)&&(touch_x>0)&&(touch_y<300)&&(touch_y>150))
                    {
                        R3.hide();
                        R4.hide();
                        R5.hide();
                        R6.hide();
                        classic.hide();
                        zen.hide();
                        relay.hide();
                        trial.hide();


                        Rectangle display(300, 300, 280, 400);
                        Line v1(230,0,230,600);
                        Line v2(300,0,300,600);
                        Line v3(370,0,370,600);
                        Rectangle top(300, 50, 600, 100);
                        top.setFill(true);
                        Rectangle bottom(300, 550, 600, 100);
                        bottom.setFill(true);

                        Rectangle r1(195+(e-1)*70,50,70,100);
                        r1.setFill(true);
                        Rectangle r2(195+(d-1)*70,150,70,100);
                        r2.setFill(true);
                        Rectangle r3(195 +(c-1)*70,250,70,100);
                        r3.setFill(true);
                        Rectangle r4(195+(b-1)*70,350,70,100);
                        r4.setFill(true);
                        Rectangle r5(195+(a-1)*70,450,70,100);
                        r5.setFill(true);
                        const clock_t begin_time = clock();

                        int count_score=0;


                        while(true)
                        {
                            if(float( clock () - begin_time ) /  CLOCKS_PER_SEC<25)

                            {


                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+a*70)&&positionx>(160+(a-1)*70))
                                    {
                                        count_score++;
                                        Beep(600,40);
                                    }

                                    else
                                    {

                                        Text score(300,300,count_score);
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;

                                    }

                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);


                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }



                                    }
                                    a=m;
                                }


                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+b*70)&&positionx>(160+(b-1)*70))
                                    {
                                        count_score++;
                                        Beep(620,40);
                                    }
                                    else
                                    {

                                        Text score(300,300,count_score);
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;

                                    }
                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);


                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }
                                    }
                                }
                                b=l;

                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+c*70)&&positionx>(160+(c-1)*70))
                                    {
                                        count_score++;
                                        {
                                            Beep(640,40);
                                        }
                                    }
                                    else
                                    {

                                        Text score(300,300,count_score);
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;

                                    }
                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);

                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }
                                    }
                                }
                                c=k;


                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+d*70)&&positionx>(160+(d-1)*70))
                                    {
                                        count_score++;
                                        Beep(660,40);
                                    }
                                    else
                                    {

                                        Text score(300,300,count_score);
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;

                                    }


                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);


                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }



                                    }
                                }
                                d=j;


                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+e*70)&&positionx>(160+(e-1)*70))
                                    {
                                        count_score++;
                                        {
                                            Beep(680,40);
                                        }
                                    }
                                    else
                                    {

                                        Text score(300,300,count_score);
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;
                                    }

                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);


                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }
                                    }
                                }
                                e=ii;
                            }
                            else
                            {

                                display.hide();
                                v1.hide();
                                v2.hide();
                                v3.hide();
                                top.hide();
                                bottom.hide();
                                r1.hide();
                                r2.hide();
                                r3.hide();
                                r4.hide();
                                r5.hide();
                                break;
                            }
                        }

                        Text message_1(300,200,"GAME OVER");
                        Text message_3(300,230,"Best");
                        Text message_2(300,280,"Your Score is");
                        Text score(300,300,count_score);
                        int input=0;
                        ifstream highscore("zenmodehighscore.txt");
                        highscore>>input;
                        if(count_score>input)
                        {
                            input=count_score;
                            ofstream highscore("zenmodehighscore.txt");
                            highscore<<count_score;
                        }
                        Text highScore(300,250,input);

                        Rectangle button_play_again(250,350,80,40);
                        Text play_again(250,350,"Play Again");
                        Rectangle button_exit(350,350,80,40);
                        Text exit_(350,350,"Exit");
                        while(true)
                        {
                            int click_1=getClick();
                            int position_x=click_1/65536;
                            int position_y=click_1%65536;

                            if(position_y>=330&&position_y<=370&&position_x<=290&&position_x>=210)
                                break;
                            if(position_y>=330&&position_y<=370&&position_x<=390&&position_x>=310)

                                exit(0);
                            else continue;
                        }
                    }
                    if((touch_x<600)&&(touch_x>300)&&(touch_y<450)&&(touch_y>300))
                    {
                        R3.hide();
                        R4.hide();
                        R5.hide();
                        R6.hide();
                        classic.hide();
                        zen.hide();
                        relay.hide();
                        trial.hide();

                        Rectangle display(300, 300, 280, 400);
                        Line v1(230,0,230,600);
                        Line v2(300,0,300,600);
                        Line v3(370,0,370,600);
                        Rectangle top(300, 50, 600, 100);
                        top.setFill(true);
                        Rectangle bottom(300, 550, 600, 100);
                        bottom.setFill(true);

                        Rectangle r1(195+(e-1)*70,50,70,100);
                        r1.setFill(true);
                        Rectangle r2(195+(d-1)*70,150,70,100);
                        r2.setFill(true);
                        Rectangle r3(195+(c-1)*70,250,70,100);
                        r3.setFill(true);
                        Rectangle r4(195+(b-1)*70,350,70,100);
                        r4.setFill(true);
                        Rectangle r5(195+(a-1)*70,450,70,100);
                        r5.setFill(true);
                        const clock_t begin_time = clock();

                        int count_score=0;
                        int n=1,y=1;


                        while(true)
                        {
                            if(float( clock () - begin_time ) /  CLOCKS_PER_SEC<(10*n)) //checking for time

                            {
                                if(count_score>15*y) //increase time if user tap 10 tiles in 10sec
                                {
                                    n++;
                                    y++;
                                }


                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+a*70)&&positionx>(160+(a-1)*70))
                                    {
                                        count_score++;
                                        Beep(600,40);
                                    }

                                    else
                                    {
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;


                                    }


                                    if(float( clock () - begin_time ) /  CLOCKS_PER_SEC>25)
                                    {
                                        cout<<count_score;
                                        exit(0);
                                    }


                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);


                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }



                                    }
                                    a=m;
                                }


                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+b*70)&&positionx>(160+(b-1)*70))
                                    {
                                        count_score++;
                                        Beep(620,40);
                                    }
                                    else
                                    {
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;

                                    }

                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);


                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }



                                    }
                                }
                                b=l;

                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+c*70)&&positionx>(160+(c-1)*70))
                                    {
                                        count_score++;
                                        Beep(640,40);
                                    }
                                    else
                                    {
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;


                                    }

                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);

                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }



                                    }
                                }
                                c=k;


                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+d*70)&&positionx>(160+(d-1)*70))
                                    {
                                        count_score++;
                                        Beep(660,40);
                                    }
                                    else
                                    {
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;


                                    }

                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);


                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }



                                    }
                                }
                                d=j;


                                if(extra==0)
                                {
                                    int click=getClick();
                                    positionx=click/65536;
                                    positiony=click%65536;

                                    if(positiony>=400&&positiony<=500&&positionx<=(160+e*70)&&positionx>(160+(e-1)*70))
                                    {
                                        count_score++;
                                        Beep(680,40);
                                    }
                                    else
                                    {
                                        display.hide();
                                        v1.hide();
                                        v2.hide();
                                        v3.hide();
                                        top.hide();
                                        bottom.hide();
                                        r1.hide();
                                        r2.hide();
                                        r3.hide();
                                        r4.hide();
                                        r5.hide();
                                        break;

                                    }


                                    for(int i=0; i<10; i++)
                                    {
                                        ii=rand()%4+1,j=rand()%4+1,k=rand()%4+1,l=rand()%4+1,m=rand()%4+1;
                                        r5.move(0,10);
                                        r4.move(0,10);
                                        r3.move(0,10);
                                        r2.move(0,10);
                                        r1.move(0,10);


                                        if(r1.getY()>=550)
                                        {
                                            r1.moveTo(195+(ii-1)*70,50);
                                        }
                                        if(r2.getY()>=550)
                                        {
                                            r2.moveTo(195+(j-1)*70,50);
                                        }
                                        if(r3.getY()>=550)
                                        {
                                            r3.moveTo(195+(k-1)*70,50);
                                        }
                                        if(r4.getY()>=550)
                                        {
                                            r4.moveTo(195+(l-1)*70,50);
                                        }
                                        if(r5.getY()>=550)
                                        {
                                            r5.moveTo(195+(m-1)*70,50);
                                        }
                                    }
                                }
                                e=ii;
                            }

                            else
                            {
                                cout<<count_score;
                                display.hide();
                                v1.hide();
                                v2.hide();
                                v3.hide();
                                top.hide();
                                bottom.hide();
                                r1.hide();
                                r2.hide();
                                r3.hide();
                                r4.hide();
                                r5.hide();
                                break;
                            }
                        }
                        Text message_1(300,200,"GAME OVER");
                        Text message_3(300,230,"Best");
                        Text message_2(300,280,"Your Score is");
                        Text score(300,300,count_score);
                        int input=0;
                        ifstream highscore("relaymodehighscore.txt");
                        highscore>>input;
                        if(count_score>input)
                        {
                            input=count_score;
                            ofstream highscore("relaymodehighscore.txt");
                            highscore<<count_score;
                        }
                        Text highScore(300,250,input);

                        Rectangle button_play_again(250,350,80,40);
                        Text play_again(250,350,"Play Again");
                        Rectangle button_exit(350,350,80,40);
                        Text exit_(350,350,"Exit");
                        while(true)
                        {
                            int click_1=getClick();
                            int position_x=click_1/65536;
                            int position_y=click_1%65536;

                            if(position_y>=330&&position_y<=370&&position_x<=290&&position_x>=210)
                                break;
                            if(position_y>=330&&position_y<=370&&position_x<=390&&position_x>=310)

                                exit(0);
                            else continue;
                        }
                    }

                }
            }
        }
    }
}

