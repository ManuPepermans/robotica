#include "qrcode.h"

int QRCodeDecode(char *Data,int MaxDataLen) {

    if (MaxDataLen < strlen(Data)) {

        system ("espeak -ven+f2 -k5 -a50 -s150 \"Buffer overload\" --stdout | aplay");
        system ("espeak -ven+f2 -k5 -a50 -s150 \"Process Aborted\" --stdout | aplay");

    } else {

        char zbarimg[45+MaxDataLen];
        system("raspistill -w 640 -h 480 -co 100 -sh 100 -vf -hf -o /home/pi/camera/tempCam.jpg");
        //system("raspistill -w 640 -h 480 -co 100 -sh 100 -vf -hf -o | ssh /home/pi/camera/tempCam.jpg");
        system ("espeak -ven+f2 -k5 -a50 -s150 \"Photo complete\" --stdout | aplay");

        strcpy(zbarimg,"zbarimg /home/pi/camera/tempCam.jpg >> "); // 39 tekens
        strcat(zbarimg, Data);
        strcat(zbarimg, ".txt\n"); // 6 tekens
        system (zbarimg);
        system ("espeak -ven+f2 -k5 -a50 -s150 \"Cue R complete\" --stdout | aplay");

        system("rm /home/pi/camera/tempCam.jpg");
    }

    //Todo: niet schrijven naar SD-kaart maar op andere manier
return 0;
}
