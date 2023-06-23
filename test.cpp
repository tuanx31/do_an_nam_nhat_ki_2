#include <stdio.h> /*thu vien nhap xuat co ban*/
#include <string.h> /*thu vien ve chuoi*/
#include <conio.h>
#include <stdlib.h> /*thu vien tien ich*/
 
/*khai bao cac ham*/
void quanlydoibong();
void xemdanhsachdoibong();
void capnhatdanhsachdoibong();
void themmoimotdoibong();
 
void quanlylichthidau();
void xemlichthidau();
void capnhatlichthidau();
void taolichthidau();
 
 
void quanlyketquathidau();
void xemketquathidau();
void capnhatketquathidau();
 
void thongke();
 
/*khai bao cau ttruc*/
 struct doibong         /*tao moi mot doi bong*/
{
  char madoi[10];      /*ma doi bong*/
  char tendoi[50];   /*ten doi bong*/
  char namehlv[50];  /*ten huan luyen vien*/
};
 struct tltd          /*tao lich thi dau*/
{
  char tran[50];      /*tran thi dau*/
  int ngaytd[20];     /*ngay thi dau*/
  char giotd[10];     /*gio thi dau*/
  char santd[20];     /*san thi dau*/
};
 
 
main()
{
   int chon;
 
   do
   {
 
   printf("--Chao mung den voi QLSD cua Tuna NGuyn--\n");
   printf("===================================\n");
   printf("|| 1.Quan ly danh sach doi bong.                  \n");
   printf("|| 2.Quan ly lich thi dau.                             \n");
   printf("|| 3.Quan ly ket qua thi dau.                       \n");
   printf("|| 4.Thong ke.                                          \n");
   printf("|| 0.Thoat.                                              \n");
   printf("===================================\n\n");
   printf("Moi ban chon phim so can xem:");
   scanf ("%d",&chon);
 
   switch(chon)
    {
        case 1:
               quanlydoibong();
               break;
        case 2:
               quanlylichthidau();
               break;
        case 3:
               quanlyketquathidau ();
               break;
        case 4:
               thongke ();
               break;
        case 0:
              break;
        default :
            printf("Lua chon khong hop le. Moi ban chon lai!");
            system("pause");
        }
    } while (chon!=0);
 
}
void quanlydoibong()
{
    int chon;
    do
    {
        printf("\n1.Quan ly danh sach doi bong.");
        printf("\n*******************************");
        printf("\n1.Xem danh sach doi bong.                  *");
        printf("\n2.Cap nhat danh sach doi bong.            *");
        printf("\n3.Them mot doi bong moi.                    *");
        printf("\n0.Cho ve menu chinh.                          *");
        printf("\n*******************************");
 
   printf("\n\nMoi ban chon phim can xem:");
   scanf("%d",&chon);
   switch (chon)
      {
        case 1:
            xemdanhsachdoibong ();
            break;
        case 2:
            capnhatdanhsachdoibong ();
            break;
        case 3:
            themmoimotdoibong ();
            break;
        case 0:
            break;
            default:
              printf("Lua chon khong hop le. Moi ban chon lai!(^^)");
       }
    }while(chon !=0);
}
 
void xemdanhsachdoibong ()
{
    printf("\n=================================================");
    printf("\n| Ma Doi |       Ten Doi      | Huan luyen vien |");
    printf("\n=================================================");
    printf("\n|  TC08  | The cong - Viettel | Nguyen Hong Son |");
    printf("\n|  HAGL  |  Hoang Anh Gia Lai | Mai Duc Chung   |");
    printf("\n=================================================");
}
void capnhatdanhsachdoibong ()
{
 
 
 
 
 
    printf("sorry nha cho nay chua lam nha (^^)");
 
 
 
 
 
}
void themmoimotdoibong()
{
 
 
 
 
    printf("sorry nha cho nay cung chua lam (^^)");
 
 
 
 
}
void quanlylichthidau ()
{
    int chon;
    do
    {
       printf("\n 2.Quan ly lich thi dau");
       printf("\n**************************");
       printf("\n 1.Xem lich thi dau      *");
       printf("\n 2.Cap nhat lich thi dau *");
       printf("\n 3.Tao lich thi dau      *");
       printf("\n 0.Cho ve menu chinh     *");
       printf("\n**************************");
       printf("\nMoi ban chon phim chuc nang can xem:");
       scanf("%d",&chon);
       switch (chon)
       {
           case 1:
                  xemlichthidau ();
                  break;
           case 2:
                  capnhatlichthidau ();
                  break;
           case 3:
                  taolichthidau ();
                  break;
           case 0:
                  break;
                  default :
                printf("Lua chon khong hop le. Moi ban chon lai! (^^)");
        }
 
    }while (chon!=0);
 
}
 
void xemlichthidau ()
{
 
 
 
    printf(" \n\nsorry cho nay cung chua lam ! (^^)\n\n");
 
 
 
 
}
 
void capnhatlichthidau ()
{
 
 
 
 
    printf("sorry cho nay cung chua lam not! (^^)");
 
 
 
}
void taolichthidau ()
{
 
 
 
    printf("sorryy cho nay cung chua lam (^^).met wa ngay mai lam");
 
 
 
}
 
void quanlyketquathidau ()
{
    int chon;
    do
    {
 
 
 
        printf(" sorry cho nay cung chua lam (^^)");
 
 
 
 
 
        printf("Moi ban chon phim chuc nang:");
        scanf("%d",chon);
        switch (chon)
        {
            case 1:
                xemketquathidau();
                break;
            case 2:
                capnhatketquathidau();
                break;
 
            case 0 :
                break;
                default :
                    printf("Lua chon khong hop le. Moi ban chon lai!(^^)");
        }
    }while (chon!=0);
 
}
void xemketquathidau ()
{
 
 
    printf("sorry cho nay chua lam (^^). lan qua");
 
 
}
void capnhatketquathidau ()
{
 
 
    printf(" sorry cho nay chua lam (^^)");
 
 
}
void thongke()
{
    printf("sorry cho nay chua lam nha (^^). lan nhi toan chua lam.");
}