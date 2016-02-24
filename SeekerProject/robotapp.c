#include "robotapp.h"

void RobotApp(int argc, char *argv[])
{
    system ("espeak -ven+f2 -k5 -a50 -s150 \"Raspistill testversion 3\" --stdout | aplay");

    //system("raspistill -w 640 -h 480 -co 100 -sh 100 -vf -hf -o /home/pi/camera/tempCam.jpg");

    QRCodeDecode("/home/pi/camera/cam567",50);
    //QRCodeDecode("/home/pi/camera/cam3",50);

    printf ("Ready.\n");
}
