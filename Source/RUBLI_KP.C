#include <pro_ext.h>

#define  p0  (parm->p[0].val)
#define  p1  (parm->p[1].val)
#define  p2  (parm->p[2].val)
#define  p3  (parm->p[3].val)

char FAR *  text1  =  " STUkan reserch Co (c) 1995 (86554) 3-30-90 EMZ Nevinnomyssk";

long spow10(long ten)
{
long ret_pow = 1;
int i;
 for (i=1;i<=ten;i++){
  ret_pow=ret_pow*10;
 }
 return ret_pow;
}

long ret_namber(long nn,long mm)
{
long ret_nn;
ret_nn = (((nn)-(nn/(spow10(mm)))*spow10(mm))-((nn)-(nn/spow10(mm-1))*spow10(mm-1)))/spow10(mm-1);

return ret_nn;
}

long ret_2namber(long nn,long mm)
{
long ret_nn;
ret_nn = (((nn)-(nn/(spow10(mm+1)))*spow10(mm+1))-((nn)-(nn/spow10(mm-1))*spow10(mm-1)))/spow10(mm-1);
return ret_nn;
}

long ret_3namber(long nn,long mm)
{
long ret_nn;
ret_nn = (((nn)-(nn/(spow10(mm+2)))*spow10(mm+2))-((nn)-(nn/spow10(mm-1))*spow10(mm-1)))/spow10(mm-1);
return ret_nn;
}

char FAR * add_rub_err(char FAR *str)
{
   char FAR *  addr_tmp;
   char FAR *  out_e  =  "****";

  _StrCpy(str,out_e);
  addr_tmp = str+_StrLen(out_e);
  return addr_tmp;
}/*proc*/

char FAR * add_rub_nul(char FAR *str)
{
   char FAR *  addr_tmp;
   char FAR *  out_n  =  "\0";

  _StrCpy(str,out_n);
  addr_tmp = str+_StrLen(out_n);
  return addr_tmp;
}/*proc*/

char FAR * add_rub_nulr(char FAR *str)
{
   char FAR *  addr_tmp;
   char FAR *  out_n  =  "ноль рублей ";

  _StrCpy(str,out_n);
  addr_tmp = str+_StrLen(out_n);
  return addr_tmp;
}/*proc*/


char FAR * add_rub_nulk(char FAR *str)
{
   char FAR *  addr_tmp;
   char FAR *  out_n  =  "ноль копеек ";

  _StrCpy(str,out_n);
  addr_tmp = str+_StrLen(out_n);
  return addr_tmp;
}/*proc*/

char FAR * add_rub_minus(char FAR *str)
{
   char FAR *  addr_tmp;
   char FAR *  out_m  =  "минус ";

  _StrCpy(str,out_m);
  addr_tmp = str+_StrLen(out_m);
  return addr_tmp;
}/*proc*/

char FAR * add_rub_1_19(char FAR *str,long namber)
{
   char FAR *  addr_tmp;
   char FAR *  out_1  =  "один ";
   char FAR *  out_2  =  "два ";
   char FAR *  out_3  =  "тpи ";
   char FAR *  out_4  =  "четыpе ";
   char FAR *  out_5  =  "пять ";
   char FAR *  out_6  =  "шесть ";
   char FAR *  out_7  =  "семь ";
   char FAR *  out_8  =  "восемь ";
   char FAR *  out_9  =  "девять ";
   char FAR *  out_10  = "десять ";
   char FAR *  out_11  = "одиннадцать ";
   char FAR *  out_12  = "двенадцать ";
   char FAR *  out_13  = "тpинадцать ";
   char FAR *  out_14  = "четыpнадцать ";
   char FAR *  out_15  = "пятнадцать ";
   char FAR *  out_16  = "шестнадцать ";
   char FAR *  out_17  = "семнадцать ";
   char FAR *  out_18  = "восемнадцать ";
   char FAR *  out_19  = "девятнадцать ";
    
    switch (namber)
    {
     case 1:        
        _StrCpy(str,out_1);
        addr_tmp = str+_StrLen(out_1);
        break;
     case 2:
        _StrCpy(str,out_2);
        addr_tmp = str+_StrLen(out_2);
        break;
     case 3: 
        _StrCpy(str,out_3);
        addr_tmp = str+_StrLen(out_3);
        break;
     case 4:
        _StrCpy(str,out_4);
        addr_tmp = str+_StrLen(out_4);
        break;
     case 5: 
        _StrCpy(str,out_5);
        addr_tmp = str+_StrLen(out_5);
        break;
     case 6:
        _StrCpy(str,out_6);
        addr_tmp = str+_StrLen(out_6);
        break;
     case 7: 
        _StrCpy(str,out_7);
        addr_tmp = str+_StrLen(out_7);
        break;
     case 8:
        _StrCpy(str,out_8);
        addr_tmp = str+_StrLen(out_8);
        break;
     case 9: 
        _StrCpy(str,out_9);
        addr_tmp = str+_StrLen(out_9);
        break;
     case 10:
        _StrCpy(str,out_10);
        addr_tmp = str+_StrLen(out_10);
        break;
     case 11: 
        _StrCpy(str,out_11);
        addr_tmp = str+_StrLen(out_11);
        break;
     case 12:
        _StrCpy(str,out_12);
        addr_tmp = str+_StrLen(out_12);
        break;
     case 13: 
        _StrCpy(str,out_13);
        addr_tmp = str+_StrLen(out_13);
        break;
     case 14:
        _StrCpy(str,out_14);
        addr_tmp = str+_StrLen(out_14);
        break;
     case 15: 
        _StrCpy(str,out_15);
        addr_tmp = str+_StrLen(out_15);
        break;
     case 16:
        _StrCpy(str,out_16);
        addr_tmp = str+_StrLen(out_16);
        break;
     case 17: 
        _StrCpy(str,out_17);
        addr_tmp = str+_StrLen(out_17);
        break;
     case 18:
        _StrCpy(str,out_18);
        addr_tmp = str+_StrLen(out_18);
        break;
     case 19: 
        _StrCpy(str,out_19);
        addr_tmp = str+_StrLen(out_19);
        break;
     } /*switch (namber)*/
return addr_tmp;
}/*proc*/

char FAR * add_rub_1_19r(char FAR *str,long namber)
{
   char FAR *  addr_tmp;
   char FAR *  out_0  =  "рублей ";
   char FAR *  out_1  =  "один рубль ";
   char FAR *  out_2  =  "два рубля ";
   char FAR *  out_3  =  "тpи рубля ";
   char FAR *  out_4  =  "четыpе рубля ";
   char FAR *  out_5  =  "пять рублей ";
   char FAR *  out_6  =  "шесть рублей ";
   char FAR *  out_7  =  "семь рублей ";
   char FAR *  out_8  =  "восемь рублей ";
   char FAR *  out_9  =  "девять рублей ";
   char FAR *  out_10  = "десять рублей ";
   char FAR *  out_11  = "одиннадцать рублей ";
   char FAR *  out_12  = "двенадцать рублей ";
   char FAR *  out_13  = "тpинадцать рублей ";
   char FAR *  out_14  = "четыpнадцать рублей ";
   char FAR *  out_15  = "пятнадцать рублей ";
   char FAR *  out_16  = "шестнадцать рублей ";
   char FAR *  out_17  = "семнадцать рублей ";
   char FAR *  out_18  = "восемнадцать рублей ";
   char FAR *  out_19  = "девятнадцать рублей ";
    
    switch (namber)
    {
     case 0:        
        _StrCpy(str,out_0);
        addr_tmp = str+_StrLen(out_0);
        break;
     case 1:        
        _StrCpy(str,out_1);
        addr_tmp = str+_StrLen(out_1);
        break;
     case 2:
        _StrCpy(str,out_2);
        addr_tmp = str+_StrLen(out_2);
        break;
     case 3: 
        _StrCpy(str,out_3);
        addr_tmp = str+_StrLen(out_3);
        break;
     case 4:
        _StrCpy(str,out_4);
        addr_tmp = str+_StrLen(out_4);
        break;
     case 5: 
        _StrCpy(str,out_5);
        addr_tmp = str+_StrLen(out_5);
        break;
     case 6:
        _StrCpy(str,out_6);
        addr_tmp = str+_StrLen(out_6);
        break;
     case 7: 
        _StrCpy(str,out_7);
        addr_tmp = str+_StrLen(out_7);
        break;
     case 8:
        _StrCpy(str,out_8);
        addr_tmp = str+_StrLen(out_8);
        break;
     case 9: 
        _StrCpy(str,out_9);
        addr_tmp = str+_StrLen(out_9);
        break;
     case 10:
        _StrCpy(str,out_10);
        addr_tmp = str+_StrLen(out_10);
        break;
     case 11: 
        _StrCpy(str,out_11);
        addr_tmp = str+_StrLen(out_11);
        break;
     case 12:
        _StrCpy(str,out_12);
        addr_tmp = str+_StrLen(out_12);
        break;
     case 13: 
        _StrCpy(str,out_13);
        addr_tmp = str+_StrLen(out_13);
        break;
     case 14:
        _StrCpy(str,out_14);
        addr_tmp = str+_StrLen(out_14);
        break;
     case 15: 
        _StrCpy(str,out_15);
        addr_tmp = str+_StrLen(out_15);
        break;
     case 16:
        _StrCpy(str,out_16);
        addr_tmp = str+_StrLen(out_16);
        break;
     case 17: 
        _StrCpy(str,out_17);
        addr_tmp = str+_StrLen(out_17);
        break;
     case 18:
        _StrCpy(str,out_18);
        addr_tmp = str+_StrLen(out_18);
        break;
     case 19: 
        _StrCpy(str,out_19);
        addr_tmp = str+_StrLen(out_19);
        break;
     } /*switch (namber)*/
return addr_tmp;
}/*proc*/

char FAR * add_rub_1_19k(char FAR *str,long namber)
{
   char FAR *  addr_tmp;
   char FAR *  out_0  =  "копеек ";
   char FAR *  out_1  =  "одна копейка ";
   char FAR *  out_2  =  "две копейки ";
   char FAR *  out_3  =  "тpи копейки ";
   char FAR *  out_4  =  "четыpе копейки ";
   char FAR *  out_5  =  "пять копеек ";
   char FAR *  out_6  =  "шесть копеек ";
   char FAR *  out_7  =  "семь копеек ";
   char FAR *  out_8  =  "восемь копеек ";
   char FAR *  out_9  =  "девять копеек ";
   char FAR *  out_10  = "десять копеек ";
   char FAR *  out_11  = "одиннадцать копеек ";
   char FAR *  out_12  = "двенадцать копеек ";
   char FAR *  out_13  = "тpинадцать копеек ";
   char FAR *  out_14  = "четыpнадцать копеек ";
   char FAR *  out_15  = "пятнадцать копеек ";
   char FAR *  out_16  = "шестнадцать копеек ";
   char FAR *  out_17  = "семнадцать копеек ";
   char FAR *  out_18  = "восемнадцать копеек ";
   char FAR *  out_19  = "девятнадцать копеек ";
    
    switch (namber)
    {
     case 0:        
        _StrCpy(str,out_0);
        addr_tmp = str+_StrLen(out_0);
        break;    
     case 1:        
        _StrCpy(str,out_1);
        addr_tmp = str+_StrLen(out_1);
        break;
     case 2:
        _StrCpy(str,out_2);
        addr_tmp = str+_StrLen(out_2);
        break;
     case 3: 
        _StrCpy(str,out_3);
        addr_tmp = str+_StrLen(out_3);
        break;
     case 4:
        _StrCpy(str,out_4);
        addr_tmp = str+_StrLen(out_4);
        break;
     case 5: 
        _StrCpy(str,out_5);
        addr_tmp = str+_StrLen(out_5);
        break;
     case 6:
        _StrCpy(str,out_6);
        addr_tmp = str+_StrLen(out_6);
        break;
     case 7: 
        _StrCpy(str,out_7);
        addr_tmp = str+_StrLen(out_7);
        break;
     case 8:
        _StrCpy(str,out_8);
        addr_tmp = str+_StrLen(out_8);
        break;
     case 9: 
        _StrCpy(str,out_9);
        addr_tmp = str+_StrLen(out_9);
        break;
     case 10:
        _StrCpy(str,out_10);
        addr_tmp = str+_StrLen(out_10);
        break;
     case 11: 
        _StrCpy(str,out_11);
        addr_tmp = str+_StrLen(out_11);
        break;
     case 12:
        _StrCpy(str,out_12);
        addr_tmp = str+_StrLen(out_12);
        break;
     case 13: 
        _StrCpy(str,out_13);
        addr_tmp = str+_StrLen(out_13);
        break;
     case 14:
        _StrCpy(str,out_14);
        addr_tmp = str+_StrLen(out_14);
        break;
     case 15: 
        _StrCpy(str,out_15);
        addr_tmp = str+_StrLen(out_15);
        break;
     case 16:
        _StrCpy(str,out_16);
        addr_tmp = str+_StrLen(out_16);
        break;
     case 17: 
        _StrCpy(str,out_17);
        addr_tmp = str+_StrLen(out_17);
        break;
     case 18:
        _StrCpy(str,out_18);
        addr_tmp = str+_StrLen(out_18);
        break;
     case 19: 
        _StrCpy(str,out_19);
        addr_tmp = str+_StrLen(out_19);
        break;
     } /*switch (namber)*/
return addr_tmp;
}/*proc*/

char FAR * add_rub_20_90(char FAR *str,long namber)
{
   char FAR *  addr_tmp;
   char FAR *  out_20  = "двадцать ";
   char FAR *  out_30  = "тpидцать ";
   char FAR *  out_40  = "соpок ";
   char FAR *  out_50  = "пятьдесят ";
   char FAR *  out_60  = "шестьдесят ";
   char FAR *  out_70  = "семьдесят ";
   char FAR *  out_80  = "восемьдесят ";
   char FAR *  out_90  = "девяносто ";
    
    switch (namber)
    {
     case 2:
        _StrCpy(str,out_20);
        addr_tmp = str+_StrLen(out_20);
        break;
     case 3: 
        _StrCpy(str,out_30);
        addr_tmp = str+_StrLen(out_30);
        break;
     case 4:
        _StrCpy(str,out_40);
        addr_tmp = str+_StrLen(out_40);
        break;
     case 5: 
        _StrCpy(str,out_50);
        addr_tmp = str+_StrLen(out_50);
        break;
     case 6:
        _StrCpy(str,out_60);
        addr_tmp = str+_StrLen(out_60);
        break;
     case 7: 
        _StrCpy(str,out_70);
        addr_tmp = str+_StrLen(out_70);
        break;
     case 8:
        _StrCpy(str,out_80);
        addr_tmp = str+_StrLen(out_80);
        break;
     case 9: 
        _StrCpy(str,out_90);
        addr_tmp = str+_StrLen(out_90);
        break;
     } /*switch (namber)*/
return addr_tmp;
}/*proc*/

char FAR * add_rub_100_900(char FAR *str,long namber)
{
   char FAR *  addr_tmp;
   char FAR *  out_100 = "сто ";
   char FAR *  out_200 = "двести ";
   char FAR *  out_300 = "тpиста ";
   char FAR *  out_400 = "четыpеста ";
   char FAR *  out_500 = "пятьсот ";
   char FAR *  out_600 = "шестьсот ";
   char FAR *  out_700 = "семьсот ";
   char FAR *  out_800 = "восемьсот ";
   char FAR *  out_900 = "девятьсот ";
    
    switch (namber)
    {
     case 1:
        _StrCpy(str,out_100);
        addr_tmp = str+_StrLen(out_100);
        break;
     case 2:
        _StrCpy(str,out_200);
        addr_tmp = str+_StrLen(out_200);
        break;
     case 3: 
        _StrCpy(str,out_300);
        addr_tmp = str+_StrLen(out_300);
        break;
     case 4:
        _StrCpy(str,out_400);
        addr_tmp = str+_StrLen(out_400);
        break;
     case 5: 
        _StrCpy(str,out_500);
        addr_tmp = str+_StrLen(out_500);
        break;
     case 6:
        _StrCpy(str,out_600);
        addr_tmp = str+_StrLen(out_600);
        break;
     case 7: 
        _StrCpy(str,out_700);
        addr_tmp = str+_StrLen(out_700);
        break;
     case 8:
        _StrCpy(str,out_800);
        addr_tmp = str+_StrLen(out_800);
        break;
     case 9: 
        _StrCpy(str,out_900);
        addr_tmp = str+_StrLen(out_900);
        break;
     } /*switch (namber)*/
return addr_tmp;
}/*proc*/

char FAR * add_rub_1000(char FAR *str,long namber)
{
   char FAR *  addr_tmp;
   char FAR *  out_0  =  "тысяч ";
   char FAR *  out_1  =  "одна тысяча ";
   char FAR *  out_2  =  "две тысячи ";
   char FAR *  out_3  =  "тpи тысячи ";
   char FAR *  out_4  =  "четыpе тысячи ";
   char FAR *  out_5  =  "пять тысяч ";
   char FAR *  out_6  =  "шесть тысяч ";
   char FAR *  out_7  =  "семь тысяч ";
   char FAR *  out_8  =  "восемь тысяч ";
   char FAR *  out_9  =  "девять тысяч ";
   char FAR *  out_10  = "десять тысяч ";
   char FAR *  out_11  = "одиннадцать тысяч ";
   char FAR *  out_12  = "двенадцать тысяч ";
   char FAR *  out_13  = "тpинадцать тысяч ";
   char FAR *  out_14  = "четыpнадцать тысяч ";
   char FAR *  out_15  = "пятнадцать тысяч ";
   char FAR *  out_16  = "шестнадцать тысяч ";
   char FAR *  out_17  = "семнадцать тысяч ";
   char FAR *  out_18  = "восемнадцать тысяч ";
   char FAR *  out_19  = "девятнадцать тысяч ";
    
    switch (namber)
    {
     case 0:        
        _StrCpy(str,out_0);
        addr_tmp = str+_StrLen(out_0);
        break;
     case 1:        
        _StrCpy(str,out_1);
        addr_tmp = str+_StrLen(out_1);
        break;
     case 2:
        _StrCpy(str,out_2);
        addr_tmp = str+_StrLen(out_2);
        break;
     case 3: 
        _StrCpy(str,out_3);
        addr_tmp = str+_StrLen(out_3);
        break;
     case 4:
        _StrCpy(str,out_4);
        addr_tmp = str+_StrLen(out_4);
        break;
     case 5: 
        _StrCpy(str,out_5);
        addr_tmp = str+_StrLen(out_5);
        break;
     case 6:
        _StrCpy(str,out_6);
        addr_tmp = str+_StrLen(out_6);
        break;
     case 7: 
        _StrCpy(str,out_7);
        addr_tmp = str+_StrLen(out_7);
        break;
     case 8:
        _StrCpy(str,out_8);
        addr_tmp = str+_StrLen(out_8);
        break;
     case 9: 
        _StrCpy(str,out_9);
        addr_tmp = str+_StrLen(out_9);
        break;
     case 10:
        _StrCpy(str,out_10);
        addr_tmp = str+_StrLen(out_10);
        break;
     case 11: 
        _StrCpy(str,out_11);
        addr_tmp = str+_StrLen(out_11);
        break;
     case 12:
        _StrCpy(str,out_12);
        addr_tmp = str+_StrLen(out_12);
        break;
     case 13: 
        _StrCpy(str,out_13);
        addr_tmp = str+_StrLen(out_13);
        break;
     case 14:
        _StrCpy(str,out_14);
        addr_tmp = str+_StrLen(out_14);
        break;
     case 15: 
        _StrCpy(str,out_15);
        addr_tmp = str+_StrLen(out_15);
        break;
     case 16:
        _StrCpy(str,out_16);
        addr_tmp = str+_StrLen(out_16);
        break;
     case 17: 
        _StrCpy(str,out_17);
        addr_tmp = str+_StrLen(out_17);
        break;
     case 18:
        _StrCpy(str,out_18);
        addr_tmp = str+_StrLen(out_18);
        break;
     case 19: 
        _StrCpy(str,out_19);
        addr_tmp = str+_StrLen(out_19);
        break;
     } /*switch (namber)*/
return addr_tmp;
}/*proc*/

char FAR * add_rub_bil(char FAR *str,long namber)
{
   char FAR *  addr_tmp;
   char FAR *  out_0  =  "миллионов ";
   char FAR *  out_1  =  "один миллион ";
   char FAR *  out_2  =  "два миллиона ";
   char FAR *  out_3  =  "тpи миллиона ";
   char FAR *  out_4  =  "четыpе миллиона ";
   char FAR *  out_5  =  "пять миллионов ";
   char FAR *  out_6  =  "шесть миллионов ";
   char FAR *  out_7  =  "семь миллионов ";
   char FAR *  out_8  =  "восемь миллионов ";
   char FAR *  out_9  =  "девять миллионов ";
   char FAR *  out_10  = "десять миллионов ";
   char FAR *  out_11  = "одиннадцать миллионов ";
   char FAR *  out_12  = "двенадцать миллионов ";
   char FAR *  out_13  = "тpинадцать миллионов ";
   char FAR *  out_14  = "четыpнадцать миллионов ";
   char FAR *  out_15  = "пятнадцать миллионов ";
   char FAR *  out_16  = "шестнадцать миллионов ";
   char FAR *  out_17  = "семнадцать миллионов ";
   char FAR *  out_18  = "восемнадцать миллионов ";
   char FAR *  out_19  = "девятнадцать миллионов ";
    
    switch (namber)
    {
     case 0:        
        _StrCpy(str,out_0);
        addr_tmp = str+_StrLen(out_0);
        break;
     case 1:        
        _StrCpy(str,out_1);
        addr_tmp = str+_StrLen(out_1);
        break;
     case 2:
        _StrCpy(str,out_2);
        addr_tmp = str+_StrLen(out_2);
        break;
     case 3: 
        _StrCpy(str,out_3);
        addr_tmp = str+_StrLen(out_3);
        break;
     case 4:
        _StrCpy(str,out_4);
        addr_tmp = str+_StrLen(out_4);
        break;
     case 5: 
        _StrCpy(str,out_5);
        addr_tmp = str+_StrLen(out_5);
        break;
     case 6:
        _StrCpy(str,out_6);
        addr_tmp = str+_StrLen(out_6);
        break;
     case 7: 
        _StrCpy(str,out_7);
        addr_tmp = str+_StrLen(out_7);
        break;
     case 8:
        _StrCpy(str,out_8);
        addr_tmp = str+_StrLen(out_8);
        break;
     case 9: 
        _StrCpy(str,out_9);
        addr_tmp = str+_StrLen(out_9);
        break;
     case 10:
        _StrCpy(str,out_10);
        addr_tmp = str+_StrLen(out_10);
        break;
     case 11: 
        _StrCpy(str,out_11);
        addr_tmp = str+_StrLen(out_11);
        break;
     case 12:
        _StrCpy(str,out_12);
        addr_tmp = str+_StrLen(out_12);
        break;
     case 13: 
        _StrCpy(str,out_13);
        addr_tmp = str+_StrLen(out_13);
        break;
     case 14:
        _StrCpy(str,out_14);
        addr_tmp = str+_StrLen(out_14);
        break;
     case 15: 
        _StrCpy(str,out_15);
        addr_tmp = str+_StrLen(out_15);
        break;
     case 16:
        _StrCpy(str,out_16);
        addr_tmp = str+_StrLen(out_16);
        break;
     case 17: 
        _StrCpy(str,out_17);
        addr_tmp = str+_StrLen(out_17);
        break;
     case 18:
        _StrCpy(str,out_18);
        addr_tmp = str+_StrLen(out_18);
        break;
     case 19: 
        _StrCpy(str,out_19);
        addr_tmp = str+_StrLen(out_19);
        break;
     } /*switch (namber)*/
return addr_tmp;
}/*proc*/

void FAR strtran(char FAR *str)
{
char letter;
  letter = *str; 
  switch (letter)
  {
     case 'а':        
       *str = 'А';
       break;
     case 'б':        
       *str = 'Б';
       break;
     case 'в':        
       *str = 'В';
       break;
     case 'д':        
       *str = 'Д';
       break;
     case 'е':        
       *str = 'Е';
       break;
     case 'ё':        
       *str = 'Ё';
       break;
     case 'ж':        
       *str = 'Ж';
       break;
     case 'з':        
       *str = 'З';
       break;
     case 'и':        
       *str = 'И';
       break;
     case 'й':        
       *str = 'Й';
       break;
     case 'к':        
       *str = 'К';
       break;
     case 'л':        
       *str = 'Л';
       break;
     case 'м':        
       *str = 'М';
       break;
     case 'н':        
       *str = 'H';
       break;
     case 'о':        
       *str = 'О';
       break;
     case 'п':        
       *str = 'П';
       break;
     case 'р':        
       *str = 'Р';
       break;
     case 'p':        
       *str = 'Р';
       break;
     case 'с':        
       *str = 'С';
       break;
     case 'т':        
       *str = 'Т';
       break;
     case 'у':        
       *str = 'У';
       break;
     case 'ф':        
       *str = 'Ф';
       break;
     case 'х':        
       *str = 'Х';
       break;
     case 'ц':        
       *str = 'Ц';
       break;
     case 'ч':        
       *str = 'Ч';
       break;
     case 'щ':        
       *str = 'Щ';
       break;
     case 'ш':        
       *str = 'Ш';
       break;
     case 'ъ':        
       *str = 'Ъ';
       break;
     case 'ы':        
       *str = 'Ы';
       break;
     case 'ь':        
       *str = 'Ь';
       break;
     case 'э':        
       *str = 'Э';
       break;
     case 'ю':        
       *str = 'Ю';
       break;
     case 'я':        
       *str = 'Я';
       break;
  }
}

void FAR rubli_k(ParamBlk FAR *parm)
{

long n_X99,n_XX9,n_X9X,n_9XX;
long n_9XXX,n_X99XXX,n_X9XXXX,n_XX9XXX,n_9XXXXX,n_999XXX;
long n_9XXXXXX,n_X99XXXXXX,n_X9XXXXXXX,n_XX9XXXXXX,n_9XXXXXXXX,n_999XXXXXX;

char FAR * addr0;

    if (!_SetHandSize(p0.ev_handle, 2000))
         _Error(182);
 
    _HLock(p0.ev_handle);
    addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;

    if (p1.ev_long<0){
      p1.ev_long = -(p1.ev_long);
      addr0 = add_rub_minus(addr0);
    }

    if (p1.ev_long==0){
      addr0 = add_rub_nulk(addr0);    
      goto my_exit;
    }

    if (p1.ev_long>999999999){
      addr0 = add_rub_err(addr0);    
      goto my_exit;
    }


    /* сотни миллионов */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }
      
      /*миллионы*/
      n_X99XXXXXX = ret_2namber(p1.ev_long,7);   

      if (n_X99XXXXXX<20){
          addr0 = add_rub_bil (addr0,n_X99XXXXXX);
      }
      else{
          n_X9XXXXXXX = ret_namber(p1.ev_long,8);
          addr0 = add_rub_20_90 (addr0,n_X9XXXXXXX);    
          n_XX9XXXXXX = ret_namber(p1.ev_long,7);
          addr0 = add_rub_bil (addr0,n_XX9XXXXXX);
      }
    }/*if*/

    /* сотни тысяч */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*тысячи*/
      n_X99XXX = ret_2namber(p1.ev_long,4);   

      if (n_X99XXX<20){
          addr0 = add_rub_1000 (addr0,n_X99XXX);
      }
      else{
          n_X9XXXX = ret_namber(p1.ev_long,5);
          addr0 = add_rub_20_90 (addr0,n_X9XXXX);    
          n_XX9XXX = ret_namber(p1.ev_long,4);
          addr0 = add_rub_1000 (addr0,n_XX9XXX);
      }
    }/*if*/
    /* сотни */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*десятки*/
    n_X99 = ret_2namber(p1.ev_long,1);   


      if (n_X99<20){
        addr0 = add_rub_1_19k (addr0,n_X99);
      }
      else{
        n_X9X = ret_namber(p1.ev_long,2);
        addr0 = add_rub_20_90 (addr0,n_X9X);    
        n_XX9 = ret_namber(p1.ev_long,1);
        addr0 = add_rub_1_19k (addr0,n_XX9);
      }
 
     addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;
     
my_exit:
    _RetChar(_HandToPtr(p0.ev_handle));
    _HUnLock(p0.ev_handle);   

}

void FAR rubli_r(ParamBlk FAR *parm)
{

long n_X99,n_XX9,n_X9X,n_9XX;
long n_9XXX,n_X99XXX,n_X9XXXX,n_XX9XXX,n_9XXXXX,n_999XXX;
long n_9XXXXXX,n_X99XXXXXX,n_X9XXXXXXX,n_XX9XXXXXX,n_9XXXXXXXX,n_999XXXXXX;

char FAR * addr0;

    if (!_SetHandSize(p0.ev_handle, 2000))
         _Error(182);
 
    _HLock(p0.ev_handle);
    addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;

    if (p1.ev_long<0){
      p1.ev_long = -(p1.ev_long);
      addr0 = add_rub_minus(addr0);
    }

    if (p1.ev_long==0){
      addr0 = add_rub_nulr(addr0);    
      goto my_exit_b;
    }

    if (p1.ev_long>999999999){
      addr0 = add_rub_err(addr0);    
      goto my_exit;
    }


    /* сотни миллионов */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }

      /*миллионы*/
      n_X99XXXXXX = ret_2namber(p1.ev_long,7);   

      if (n_X99XXXXXX<20){
          addr0 = add_rub_bil (addr0,n_X99XXXXXX);
      }
      else{
          n_X9XXXXXXX = ret_namber(p1.ev_long,8);
          addr0 = add_rub_20_90 (addr0,n_X9XXXXXXX);    
          n_XX9XXXXXX = ret_namber(p1.ev_long,7);
          addr0 = add_rub_bil (addr0,n_XX9XXXXXX);
      }
    }/*if*/

    /* сотни тысяч */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*тысячи*/
      n_X99XXX = ret_2namber(p1.ev_long,4);   

      if (n_X99XXX<20){
          addr0 = add_rub_1000 (addr0,n_X99XXX);
      }
      else{
          n_X9XXXX = ret_namber(p1.ev_long,5);
          addr0 = add_rub_20_90 (addr0,n_X9XXXX);    
          n_XX9XXX = ret_namber(p1.ev_long,4);
          addr0 = add_rub_1000 (addr0,n_XX9XXX);
      }
    }/*if*/
    /* сотни */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*десятки*/
    n_X99 = ret_2namber(p1.ev_long,1);   

 
      if (n_X99<20){
        addr0 = add_rub_1_19r (addr0,n_X99);
      }
      else{
        n_X9X = ret_namber(p1.ev_long,2);
        addr0 = add_rub_20_90 (addr0,n_X9X);    
        n_XX9 = ret_namber(p1.ev_long,1);
        addr0 = add_rub_1_19r (addr0,n_XX9);
      }

     addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;
my_exit_b:
     strtran(addr0);
my_exit:
    _RetChar(_HandToPtr(p0.ev_handle));
    _HUnLock(p0.ev_handle);   

}

void FAR rubli_s(ParamBlk FAR *parm)
{

long n_X99,n_XX9,n_X9X,n_9XX;
long n_9XXX,n_X99XXX,n_X9XXXX,n_XX9XXX,n_9XXXXX,n_999XXX;
long n_9XXXXXX,n_X99XXXXXX,n_X9XXXXXXX,n_XX9XXXXXX,n_9XXXXXXXX,n_999XXXXXX;

char FAR * addr0;

    if (!_SetHandSize(p0.ev_handle, 2000))
         _Error(182);
 
    _HLock(p0.ev_handle);
    addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;

    if (p1.ev_long<0){
      p1.ev_long = -(p1.ev_long);
      addr0 = add_rub_minus(addr0);
    }

    if (p1.ev_long==0){
      addr0 = add_rub_nul(addr0);    
      goto my_exit;
    }

    if (p1.ev_long>999999999){
      addr0 = add_rub_err(addr0);    
      goto my_exit;
    }


    /* сотни миллионов */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }

      /*миллионы*/
      n_X99XXXXXX = ret_2namber(p1.ev_long,7);   

      if (n_X99XXXXXX<20){
          addr0 = add_rub_bil (addr0,n_X99XXXXXX);
      }
      else{
          n_X9XXXXXXX = ret_namber(p1.ev_long,8);
          addr0 = add_rub_20_90 (addr0,n_X9XXXXXXX);    
          n_XX9XXXXXX = ret_namber(p1.ev_long,7);
          addr0 = add_rub_bil (addr0,n_XX9XXXXXX);
      }
    }/*if*/

    /* сотни тысяч */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*тысячи*/
      n_X99XXX = ret_2namber(p1.ev_long,4);   

      if (n_X99XXX<20){
          addr0 = add_rub_1000 (addr0,n_X99XXX);
      }
      else{
          n_X9XXXX = ret_namber(p1.ev_long,5);
          addr0 = add_rub_20_90 (addr0,n_X9XXXX);    
          n_XX9XXX = ret_namber(p1.ev_long,4);
          addr0 = add_rub_1000 (addr0,n_XX9XXX);
      }
    }/*if*/
    /* сотни */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*десятки*/
    n_X99 = ret_2namber(p1.ev_long,1);   

    if (n_X99!=0){
      if (n_X99<20){
        addr0 = add_rub_1_19 (addr0,n_X99);
      }
      else{
        n_X9X = ret_namber(p1.ev_long,2);
        addr0 = add_rub_20_90 (addr0,n_X9X);    
        n_XX9 = ret_namber(p1.ev_long,1);
        addr0 = add_rub_1_19 (addr0,n_XX9);
      }
    }
     addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;
     
my_exit:
    _RetChar(_HandToPtr(p0.ev_handle));
    _HUnLock(p0.ev_handle);   

}

void FAR rubli_b(ParamBlk FAR *parm)
{

long n_X99,n_XX9,n_X9X,n_9XX;
long n_9XXX,n_X99XXX,n_X9XXXX,n_XX9XXX,n_9XXXXX,n_999XXX;
long n_9XXXXXX,n_X99XXXXXX,n_X9XXXXXXX,n_XX9XXXXXX,n_9XXXXXXXX,n_999XXXXXX;

char FAR * addr0;

    if (!_SetHandSize(p0.ev_handle, 2000))
         _Error(182);
 
    _HLock(p0.ev_handle);
    addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;

    if (p1.ev_long<0){
      p1.ev_long = -(p1.ev_long);
      addr0 = add_rub_minus(addr0);
    }

    if (p1.ev_long==0){
      addr0 = add_rub_nul(addr0);    
      goto my_exit;
    }

    if (p1.ev_long>999999999){
      addr0 = add_rub_err(addr0);    
      goto my_exit;
    }


    /* сотни миллионов */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }

      /*миллионы*/
      n_X99XXXXXX = ret_2namber(p1.ev_long,7);   

      if (n_X99XXXXXX<20){
          addr0 = add_rub_bil (addr0,n_X99XXXXXX);
      }
      else{
          n_X9XXXXXXX = ret_namber(p1.ev_long,8);
          addr0 = add_rub_20_90 (addr0,n_X9XXXXXXX);    
          n_XX9XXXXXX = ret_namber(p1.ev_long,7);
          addr0 = add_rub_bil (addr0,n_XX9XXXXXX);
      }
    }/*if*/

    /* сотни тысяч */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*тысячи*/
      n_X99XXX = ret_2namber(p1.ev_long,4);   

      if (n_X99XXX<20){
          addr0 = add_rub_1000 (addr0,n_X99XXX);
      }
      else{
          n_X9XXXX = ret_namber(p1.ev_long,5);
          addr0 = add_rub_20_90 (addr0,n_X9XXXX);    
          n_XX9XXX = ret_namber(p1.ev_long,4);
          addr0 = add_rub_1000 (addr0,n_XX9XXX);
      }
    }/*if*/
    /* сотни */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*десятки*/
    n_X99 = ret_2namber(p1.ev_long,1);   

    if (n_X99!=0){
      if (n_X99<20){
        addr0 = add_rub_1_19 (addr0,n_X99);
      }
      else{
        n_X9X = ret_namber(p1.ev_long,2);
        addr0 = add_rub_20_90 (addr0,n_X9X);    
        n_XX9 = ret_namber(p1.ev_long,1);
        addr0 = add_rub_1_19 (addr0,n_XX9);
      }
    }
     addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;
     strtran(addr0);
my_exit:
    _RetChar(_HandToPtr(p0.ev_handle));
    _HUnLock(p0.ev_handle);   

}

void FAR rubli(ParamBlk FAR *parm)
{

long n_X99,n_XX9,n_X9X,n_9XX;
long n_9XXX,n_X99XXX,n_X9XXXX,n_XX9XXX,n_9XXXXX,n_999XXX;
long n_9XXXXXX,n_X99XXXXXX,n_X9XXXXXXX,n_XX9XXXXXX,n_9XXXXXXXX,n_999XXXXXX;

char FAR * addr0;

    if (!_SetHandSize(p0.ev_handle, 2000))
         _Error(182);
 
    _HLock(p0.ev_handle);
    addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;

    if (p1.ev_long<0){
      p1.ev_long = -(p1.ev_long);
      addr0 = add_rub_minus(addr0);
    }

    if (p1.ev_long==0){
      addr0 = add_rub_nul(addr0);    
      goto my_exit;
    }

    if (p1.ev_long>999999999){
      addr0 = add_rub_err(addr0);    
      goto my_exit;
    }


    /* сотни миллионов */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }

      /*миллионы*/
      n_X99XXXXXX = ret_2namber(p1.ev_long,7);   

      if (n_X99XXXXXX<20){
          addr0 = add_rub_bil (addr0,n_X99XXXXXX);
      }
      else{
          n_X9XXXXXXX = ret_namber(p1.ev_long,8);
          addr0 = add_rub_20_90 (addr0,n_X9XXXXXXX);    
          n_XX9XXXXXX = ret_namber(p1.ev_long,7);
          addr0 = add_rub_bil (addr0,n_XX9XXXXXX);
      }
    }/*if*/

    /* сотни тысяч */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*тысячи*/
      n_X99XXX = ret_2namber(p1.ev_long,4);   

      if (n_X99XXX<20){
          addr0 = add_rub_1000 (addr0,n_X99XXX);
      }
      else{
          n_X9XXXX = ret_namber(p1.ev_long,5);
          addr0 = add_rub_20_90 (addr0,n_X9XXXX);    
          n_XX9XXX = ret_namber(p1.ev_long,4);
          addr0 = add_rub_1000 (addr0,n_XX9XXX);
      }
    }/*if*/
    /* сотни */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*десятки*/
    n_X99 = ret_2namber(p1.ev_long,1);   

    if (n_X99!=0){
      if (n_X99<20){
        addr0 = add_rub_1_19 (addr0,n_X99);
      }
      else{
        n_X9X = ret_namber(p1.ev_long,2);
        addr0 = add_rub_20_90 (addr0,n_X9X);    
        n_XX9 = ret_namber(p1.ev_long,1);
        addr0 = add_rub_1_19 (addr0,n_XX9);
      }
    }
     addr0 = (char FAR *) _HandToPtr(p0.ev_handle) + p0.ev_length;
     strtran(addr0);
my_exit:
    _RetChar(_HandToPtr(p0.ev_handle));
    _HUnLock(p0.ev_handle);   

}

FoxInfo myFoxInfo[] =
{
        {"RUBLI_R",   (FPFI) rubli_r,  2, "C,I"}, 
        {"RUBLI_K",   (FPFI) rubli_k,  2, "C,I"}, 
        {"RUBLI_B",   (FPFI) rubli_b,  2, "C,I"}, 
        {"RUBLI_S",   (FPFI) rubli_s,  2, "C,I"}, 
        {"RUBLI",     (FPFI) rubli,    2, "C,I"}, 

};

FoxTable _FoxTable =
{
    (FoxTable FAR *)0, sizeof(myFoxInfo) / sizeof(FoxInfo), myFoxInfo
};
