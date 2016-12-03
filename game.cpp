#include "D:\Инженерка\TX\TXLib.h"

int main()
{
    txCreateWindow(600, 400);
    int x = 200;
    int y = 300;

    for (int i = 0; i < 500; i++) {
        //txBitBlt (txDC(), 0, 0, 800, 600, fon, 0, 0);

        txSetFillColor(TX_BLACK);
        txClear();

        if (GetAsyncKeyState(VK_LEFT)) {
            x = x - 5;
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            x = x + 5;
        }
        if (GetAsyncKeyState(VK_UP)) {
            y = y - 5;
        }
        if (GetAsyncKeyState(VK_DOWN)) {
            y = y + 5;
        }
        if (GetAsyncKeyState(VK_RCONTROL)) {
            x = x + 10,
        }
        if (GetAsyncKeyState(VK_LCONTROL)) {
            x = x - 10;
        }

        txSetFillColor(TX_RED);
        txCircle(x, y, 20);
        txSetColor(TX_BROWN);
        txLine(x, y + 20, x, y + 71);
        txLine(x + 20, y + 90, x, y + 70);
        txLine(x - 20, y + 90, x, y + 70);
        txLine(x - 20, y + 60, x, y + 40);
        txLine(x + 20, y + 60, x, y + 40);

        txSleep(10);
    }

    return 0;
}
