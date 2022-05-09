#include <stdio.h>
#include <conio.h>

main()
{
    int bugun_yil, bugun_ay, bugun_gun, dogum_yil, dogum_ay, dogum_gun, yil, ay, gun;

    printf("Dogum tarihinizi giriniz (Gun/Ay/Yıl): ");
    scanf("%d/%d/%d", &dogum_gun, &dogum_ay, &dogum_yil);

    printf("Bugunun tarihini giriniz (Gun/Ay/Yıl): ");
    scanf("%d/%d/%d", &bugun_gun, &bugun_ay, &bugun_yil);

    if(dogum_gun > gun) {
        bugun_gun = bugun_gun + 30;
        bugun_ay = bugun_ay - 1;
    }

    if(dogum_ay > bugun_ay) {
        bugun_ay = bugun_ay + 12;
        bugun_yil = bugun_yil - 1;
    }

    gun = bugun_gun - dogum_gun;
    ay = bugun_ay - dogum_ay;
    yil = bugun_yil - dogum_yil;

    printf("Dogumunuzdan bu yana %d gun, %d ay, %d yil gecmis.\n", gun, ay, yil);

    getch();
    return 0;
}