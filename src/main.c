#include <graphx.h>
#include <math.h>
#include <string.h>
#include <keypadc.h>
#include <fileioc.h>
// #include <usbdrvce.h>
// #include <internet.h>
#include <sys/util.h>
#include "./gfx/gfx.h"

uint8_t loadingRot = 0;
int frame = 0;
uint8_t appvar;
uint8_t download;
// http_data_t* randomnum = NULL;
char username[9] = "USER";
char readdata[] = {};
char welcome[20] = "Welcome, ";
char mygames[4][25] = {
    "-EMPTY-",
    "-EMPTY-",
    "-EMPTY-",
    "-EMPTY-"
};
char manual[8][41] = {
    // "........................................",
    "Welcome to the Gateway!",
    "Let's get started. Plug in the Gateway",
    "cable or a compatible cable from your",
    "calculator to your phone (works with",
    "recent Android phones or iPhone 15 or",
    "newer). Then select Play from the menu",
    "and the download will begin. Do not",
    "disconnect the cable from either device."
};
char schedulenames[8][25] = {
    "Grand Opening",
    "Thanksgiving Day",
    "-TBD-",
    "-TBD-",
    "-TBD-",
    "-TBD-",
    "-TBD-",
    "-TBD-"
};
char scheduledates[8][6] = {
    "11/10",
    "11/23",
    ".....",
    ".....",
    ".....",
    ".....",
    ".....",
    "....."
};
int8_t selection = 0;
void gfx_PrintBoldStringXY(char string[], int x, int y) {
    gfx_SetTextFGColor(3);
    gfx_PrintStringXY(string,x,y+1);
    gfx_SetTextFGColor(1);
    gfx_PrintStringXY(string,x,y);
}
void gfx_PrintLightStringXY(char string[], int x, int y) {
    gfx_SetTextFGColor(3);
    gfx_PrintStringXY(string,x,y);
}
bool keyEnter() {return (kb_Data[6] & kb_Enter);}
bool keyClear() {return (kb_Data[6] & kb_Clear);}
bool key2nd() {return (kb_Data[1] & kb_2nd);}

int main(void) {
    gfx_Begin();
    gfx_SetPalette(global_palette,sizeof_global_palette,0);
    gfx_SetDrawBuffer();
    gfx_SetColor(255);
    gfx_SetTextBGColor(0);
    gfx_SetTextFGColor(3);
    gfx_SetTransparentColor(0);
    gfx_SetTextTransparentColor(0);
    frame = 0;
    while (frame < 400) {
        gfx_ScaledSprite_NoClip(logobackground,0,0,2,2);
        gfx_BlitBuffer();
        ++frame;
    }
    gfx_ScaledSprite_NoClip(background,0,0,2,2);
    gfx_PrintStringXY("Please wait",55,85);
    gfx_PrintBoldStringXY("The Gateway is initializing",75,101);
    // web_Init();
    frame = 0;
    do {
        gfx_RotatedTransparentSprite_NoClip(loading,135,120,loadingRot);
        gfx_BlitBuffer();
        kb_Scan();
        loadingRot -= 4;
        ++frame;
        // web_WaitForEvents();
    } while (frame < 80);
    appvar = ti_Open("GtwayDat","a+");
    download = ti_Open("Dwnld1","w");
    if (appvar == 0) {
        gfx_ScaledSprite_NoClip(errorbackground,0,0,2,2);
        gfx_SetTextFGColor(3);
        gfx_PrintStringXY("No existing data was found.",50,60);
        gfx_PrintBoldStringXY("Purchase a Gateway cable",50,80);
        gfx_PrintBoldStringXY("by calling 940-765-6907.",50,95);
        gfx_PrintBoldStringXY("If you already purchased it,",50,110);
        gfx_PrintBoldStringXY("select 'User Manual' from",50,125);
        gfx_PrintBoldStringXY("the main menu. Press any",50,140);
        gfx_PrintBoldStringXY("key to exit.",50,140);
        gfx_BlitBuffer();
        while (kb_AnyKey());
        while (!kb_AnyKey());
        goto end;
    }

    ti_Write(username,9,1,appvar);
    ti_Rewind(appvar);
    ti_Read(readdata,sizeof(username),1,appvar);
    strcat(welcome, readdata);
    // web_HTTPGet("https://www.random.org/integers/?num=1&min=1&max=100&col=5&base=10&format=plain&rnd=new",&randomnum,false);
    gfx_ScaledSprite_NoClip(errorbackground,0,0,2,2);
    gfx_SetTextFGColor(3);
    gfx_PrintStringXY("A connection error has occurred.",50,60);
    gfx_PrintBoldStringXY("Reconnect the linking cable and",50,80);
    gfx_PrintBoldStringXY("restart the software to download",50,95);
    gfx_PrintBoldStringXY("the most recent data. Press",50,110);
    gfx_PrintBoldStringXY("any key to exit.",50,125);
    gfx_BlitBuffer();
    while (kb_AnyKey());
    while (!kb_AnyKey());

    mainmenu:
    gfx_ScaledSprite_NoClip(background,0,0,2,2);
    gfx_SetTextFGColor(3);
    gfx_SetColor(3);
    gfx_PrintStringXY(welcome,20,20);
    gfx_HorizLine_NoClip(10,35,300);
    gfx_PrintBoldStringXY("Play",50,80);
    gfx_PrintBoldStringXY("See Broadcast Schedule",50,95);
    gfx_PrintBoldStringXY("Check Downloaded Data",50,110);
    gfx_PrintBoldStringXY("User Manual",50,125);
    gfx_PrintBoldStringXY("Exit",50,140);
    gfx_HorizLine_NoClip(10,205,300);
    gfx_BlitBuffer();
    while (kb_AnyKey());
    do {
        gfx_ScaledSprite_NoClip(background,0,0,2,2);
        gfx_SetTextFGColor(3);
        gfx_SetColor(3);
        gfx_PrintStringXY(welcome,20,20);
        gfx_HorizLine_NoClip(10,35,300);
        gfx_PrintBoldStringXY("Play",50,80);
        gfx_PrintBoldStringXY("See Broadcast Schedule",50,95);
        gfx_PrintBoldStringXY("Check Downloaded Data",50,110);
        gfx_PrintBoldStringXY("User Manual",50,125);
        gfx_PrintBoldStringXY("Exit",50,140);
        gfx_HorizLine_NoClip(10,205,300);
        gfx_SetTextFGColor(3);
        // gfx_PrintStringXY((char*)randomnum,80,220);
        gfx_SetColor(3);
        gfx_FillCircle(30,84+(selection*15),4);
        gfx_SetColor(1);
        gfx_FillCircle(30,84+(selection*15),3);
        gfx_BlitBuffer();
        kb_Scan();
        if (kb_Data[7] & kb_Up) {selection -= 1;}
        if (kb_Data[7] & kb_Down) {selection += 1;}
        if (selection > 4) {selection = 4;}
        if (selection < 0) {selection = 0;}
    } while (!key2nd());

    switch (selection) { 
        case 0:
            break;
        case 1:
            gfx_ScaledSprite_NoClip(background,0,0,2,2);
            gfx_SetTextFGColor(3);
            gfx_SetColor(3);
            gfx_PrintStringXY("Broadcasting Schedule",20,20);
            gfx_HorizLine_NoClip(10,35,300);
            for (int i = 0; i < 8; ++i) {
                gfx_SetColor(3);
                gfx_PrintLightStringXY(scheduledates[i],15,60+(i*15));
                gfx_PrintBoldStringXY(schedulenames[i],65,60+(i*15));
            }
            gfx_HorizLine_NoClip(10,205,300);
            gfx_SetTextFGColor(3);
            gfx_PrintStringXY("Press any key to return...",80,220);
            gfx_BlitBuffer();
            kb_Scan();
            while (kb_AnyKey());
            while (!kb_AnyKey());
            break;
        case 2:
            gfx_ScaledSprite_NoClip(background,0,0,2,2);
            gfx_SetTextFGColor(3);
            gfx_SetColor(3);
            gfx_PrintStringXY("Downloaded Games",20,20);
            gfx_HorizLine_NoClip(10,35,300);
            for (int i = 0; i < 4; ++i) {
                gfx_PrintLightStringXY("Slot ",15,60+(i*15));
                gfx_PrintInt(i+1,1);
                gfx_PrintBoldStringXY(mygames[i],65,60+(i*15));
            }
            gfx_HorizLine_NoClip(10,205,300);
            gfx_SetTextFGColor(3);
            gfx_PrintStringXY("Press any key to return...",80,220);
            gfx_BlitBuffer();
            kb_Scan();
            while (kb_AnyKey());
            while (!kb_AnyKey());
            break;
        case 3:
            gfx_ScaledSprite_NoClip(background,0,0,2,2);
            gfx_SetTextFGColor(3);
            gfx_SetColor(3);
            gfx_PrintStringXY("User Manual",20,20);
            gfx_HorizLine_NoClip(10,35,300);
            for (int i = 0; i < 8; ++i) {
                gfx_PrintBoldStringXY(manual[i],15,60+(i*15));
            }
            gfx_HorizLine_NoClip(10,205,300);
            gfx_SetTextFGColor(3);
            gfx_PrintStringXY("Press any key to return...",80,220);
            gfx_BlitBuffer();
            kb_Scan();
            while (kb_AnyKey());
            while (!kb_AnyKey());
            break;
        case 4:
            goto end;
        default:
            break;
    }
    goto mainmenu;
    end:
    // web_Cleanup();
    ti_Close(appvar);
    ti_Close(download);
    gfx_End();
    return 0;
}