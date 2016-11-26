
# include "TXLib.h"
void dom(int x, int y);
void excavator(int x, int y, int polojenie_shara);
void oblako(int x, int y, int razmer);
void chelovek(int x, int y, int polojenie_ryki, int polojenie_nogi);

int main()
{
    txCreateWindow(800, 600);
    txSetFillColor (TX_BLUE);
    txClear();

    for(int i=0; i<50; i++) {
        txSetFillColor (TX_BLUE);
        txClear();

        excavator(200-i*5, 250, 20 * (i%3));
        chelovek(320-i*3, 250, 20 * (i%2), 10 * (i%2));
        chelovek(350-i*3, 250, 20 * (i%2), 10 * (i%2));
        chelovek(290-i*3, 250, 20 * (i%2), 10 * (i%2));
        chelovek(380-i*3, 250, 20 * (i%2), 10 * (i%2));
        dom(0, 250);
        oblako(0, 100, 1);
        oblako(200, 150, 2);
        oblako(300, 50, 1);
        chelovek(50, 250, 20 * (i%2), 10 * (i%2));

        txSleep(100);
    }

    return 0;
}


    void chelovek(int x, int y, int polojenie_ryki, int polojenie_nogi)
{
    txSetColour(TX_RED);
    txSetFillColour(TX_RED);
    txCircle(x+215, y+215, 10);
    txLine(x+215, y+215, x+215, y+245);

    txLine(x+215, y+245, x+205+polojenie_nogi, y+260);
    txLine(x+215, y+245, x+225+polojenie_nogi, y+260);

    txLine(x+215, y+230, x+190, y+220+polojenie_ryki);
    txLine(x+215, y+230, x+240, y+220+polojenie_ryki);
}

void dom(int x, int y)
{
    txSetColour(TX_BLACK);
    txLine(x+ 50, y+180, x+ 50, y+260);
    //Roof
    txLine(x+ 50, y+180, x+100, y+130);
    txLine(x+100, y+130, x+160, y+180);
    txLine(x+ 50, y+180, x+160, y+180);
    txSetFillColor (TX_BROWN);
    txFloodFill(x+140, y+170);

    txLine(x+160, y+180, x+160, y+260);
    txLine(x+ 50, y+260, x+160, y+260);
    //Window
    txLine(x+ 60, y+220, x+ 60, y+190);
    txLine(x+ 60, y+190, x+ 90, y+190);
    txLine(x+ 90, y+190, x+ 90, y+220);
    txLine(x+ 60, y+220, x+ 90, y+220);

    txLine(x+75, y+190, x+75, y+220);
    txLine(x+60, y+205, x+90, y+205);

    txSetFillColor (TX_BROWN);
    txFloodFill(x+100, y+200);
    txLine(x+110, y+260, x+110, y+210);
    txLine(x+110, y+210, x+140, y+210);
    txLine(x+140, y+210, x+140, y+260);
    txLine(x+110, y+260, x+140, y+260);

    txSetFillColor (TX_YELLOW);
    txFloodFill(x+55, y+200);
    txCircle(x+130, y+235, x+2);
}

void excavator(int x, int y, int polojenie_shara)
{
    txSetFillColor (TX_BLACK);
    txSetColour(TX_YELLOW);
    txCircle(x+220+polojenie_shara, y+210, 27);
    txLine  (x+220+polojenie_shara, y+183, x+240, y+120);

    txLine(x+240, y+120, x+335, y+218);
    txLine(x+240, y+120, x+265, y+112);
    txLine(x+260, y+112, x+340, y+203);

    txSetFillColor (TX_YELLOW);
    txRectangle(x+325, y+200,x+ 345, y+220);
    txRectangle(x+345, y+170, x+385, y+220);
    txRectangle(x+290, y+220, x+410, y+230);


    txSetFillColor (TX_YELLOW);
    txLine(x+285, y+230, x+290, y+230);
    txLine(x+410, y+230, x+415, y+230);
    txLine(x+270, y+240, x+285, y+230);
    txLine(x+270, y+250, x+270, y+240);
    txLine(x+270, y+250, x+280, y+260);
    txLine(x+430, y+250, x+430, y+240);
    txLine(x+415, y+230, x+430, y+240);
    txLine(x+430, y+250, x+420, y+260);
    txLine(x+280, y+260, x+420, y+260);

    txCircle(x+290, y+245, 7);
    txCircle(x+320, y+245, 7);
    txCircle(x+370, y+245, 7);
    txCircle(x+400, y+245, 7);
    txCircle(x+345, y+245, 7);
    txSetFillColour(TX_BLACK);
    txRectangle(x+355, y+175, x+380, y+200);
}

void oblako(int x, int y, int razmer)
{
    txSetColour(TX_WHITE);
    txSetFillColour(TX_WHITE);
    txCircle(x+175*razmer, y+65*razmer, 20*razmer);
    txCircle(x+210*razmer, y+50*razmer, 40*razmer);
    txCircle(x+240*razmer, y+50*razmer, 26*razmer);
}
