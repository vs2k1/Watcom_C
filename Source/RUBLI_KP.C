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
   char FAR *  out_n  =  "���� �㡫�� ";

  _StrCpy(str,out_n);
  addr_tmp = str+_StrLen(out_n);
  return addr_tmp;
}/*proc*/


char FAR * add_rub_nulk(char FAR *str)
{
   char FAR *  addr_tmp;
   char FAR *  out_n  =  "���� ������ ";

  _StrCpy(str,out_n);
  addr_tmp = str+_StrLen(out_n);
  return addr_tmp;
}/*proc*/

char FAR * add_rub_minus(char FAR *str)
{
   char FAR *  addr_tmp;
   char FAR *  out_m  =  "����� ";

  _StrCpy(str,out_m);
  addr_tmp = str+_StrLen(out_m);
  return addr_tmp;
}/*proc*/

char FAR * add_rub_1_19(char FAR *str,long namber)
{
   char FAR *  addr_tmp;
   char FAR *  out_1  =  "���� ";
   char FAR *  out_2  =  "��� ";
   char FAR *  out_3  =  "�p� ";
   char FAR *  out_4  =  "���p� ";
   char FAR *  out_5  =  "���� ";
   char FAR *  out_6  =  "���� ";
   char FAR *  out_7  =  "ᥬ� ";
   char FAR *  out_8  =  "��ᥬ� ";
   char FAR *  out_9  =  "������ ";
   char FAR *  out_10  = "������ ";
   char FAR *  out_11  = "���������� ";
   char FAR *  out_12  = "��������� ";
   char FAR *  out_13  = "�p������� ";
   char FAR *  out_14  = "���p������ ";
   char FAR *  out_15  = "��⭠���� ";
   char FAR *  out_16  = "��⭠���� ";
   char FAR *  out_17  = "ᥬ������ ";
   char FAR *  out_18  = "��ᥬ������ ";
   char FAR *  out_19  = "����⭠���� ";
    
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
   char FAR *  out_0  =  "�㡫�� ";
   char FAR *  out_1  =  "���� �㡫� ";
   char FAR *  out_2  =  "��� �㡫� ";
   char FAR *  out_3  =  "�p� �㡫� ";
   char FAR *  out_4  =  "���p� �㡫� ";
   char FAR *  out_5  =  "���� �㡫�� ";
   char FAR *  out_6  =  "���� �㡫�� ";
   char FAR *  out_7  =  "ᥬ� �㡫�� ";
   char FAR *  out_8  =  "��ᥬ� �㡫�� ";
   char FAR *  out_9  =  "������ �㡫�� ";
   char FAR *  out_10  = "������ �㡫�� ";
   char FAR *  out_11  = "���������� �㡫�� ";
   char FAR *  out_12  = "��������� �㡫�� ";
   char FAR *  out_13  = "�p������� �㡫�� ";
   char FAR *  out_14  = "���p������ �㡫�� ";
   char FAR *  out_15  = "��⭠���� �㡫�� ";
   char FAR *  out_16  = "��⭠���� �㡫�� ";
   char FAR *  out_17  = "ᥬ������ �㡫�� ";
   char FAR *  out_18  = "��ᥬ������ �㡫�� ";
   char FAR *  out_19  = "����⭠���� �㡫�� ";
    
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
   char FAR *  out_0  =  "������ ";
   char FAR *  out_1  =  "���� ������� ";
   char FAR *  out_2  =  "��� ������� ";
   char FAR *  out_3  =  "�p� ������� ";
   char FAR *  out_4  =  "���p� ������� ";
   char FAR *  out_5  =  "���� ������ ";
   char FAR *  out_6  =  "���� ������ ";
   char FAR *  out_7  =  "ᥬ� ������ ";
   char FAR *  out_8  =  "��ᥬ� ������ ";
   char FAR *  out_9  =  "������ ������ ";
   char FAR *  out_10  = "������ ������ ";
   char FAR *  out_11  = "���������� ������ ";
   char FAR *  out_12  = "��������� ������ ";
   char FAR *  out_13  = "�p������� ������ ";
   char FAR *  out_14  = "���p������ ������ ";
   char FAR *  out_15  = "��⭠���� ������ ";
   char FAR *  out_16  = "��⭠���� ������ ";
   char FAR *  out_17  = "ᥬ������ ������ ";
   char FAR *  out_18  = "��ᥬ������ ������ ";
   char FAR *  out_19  = "����⭠���� ������ ";
    
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
   char FAR *  out_20  = "������� ";
   char FAR *  out_30  = "�p����� ";
   char FAR *  out_40  = "�p�� ";
   char FAR *  out_50  = "���줥��� ";
   char FAR *  out_60  = "���줥��� ";
   char FAR *  out_70  = "ᥬ줥��� ";
   char FAR *  out_80  = "��ᥬ줥��� ";
   char FAR *  out_90  = "���ﭮ�� ";
    
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
   char FAR *  out_100 = "�� ";
   char FAR *  out_200 = "����� ";
   char FAR *  out_300 = "�p��� ";
   char FAR *  out_400 = "���p��� ";
   char FAR *  out_500 = "������ ";
   char FAR *  out_600 = "������ ";
   char FAR *  out_700 = "ᥬ��� ";
   char FAR *  out_800 = "��ᥬ��� ";
   char FAR *  out_900 = "�������� ";
    
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
   char FAR *  out_0  =  "����� ";
   char FAR *  out_1  =  "���� ����� ";
   char FAR *  out_2  =  "��� ����� ";
   char FAR *  out_3  =  "�p� ����� ";
   char FAR *  out_4  =  "���p� ����� ";
   char FAR *  out_5  =  "���� ����� ";
   char FAR *  out_6  =  "���� ����� ";
   char FAR *  out_7  =  "ᥬ� ����� ";
   char FAR *  out_8  =  "��ᥬ� ����� ";
   char FAR *  out_9  =  "������ ����� ";
   char FAR *  out_10  = "������ ����� ";
   char FAR *  out_11  = "���������� ����� ";
   char FAR *  out_12  = "��������� ����� ";
   char FAR *  out_13  = "�p������� ����� ";
   char FAR *  out_14  = "���p������ ����� ";
   char FAR *  out_15  = "��⭠���� ����� ";
   char FAR *  out_16  = "��⭠���� ����� ";
   char FAR *  out_17  = "ᥬ������ ����� ";
   char FAR *  out_18  = "��ᥬ������ ����� ";
   char FAR *  out_19  = "����⭠���� ����� ";
    
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
   char FAR *  out_0  =  "��������� ";
   char FAR *  out_1  =  "���� ������� ";
   char FAR *  out_2  =  "��� �������� ";
   char FAR *  out_3  =  "�p� �������� ";
   char FAR *  out_4  =  "���p� �������� ";
   char FAR *  out_5  =  "���� ��������� ";
   char FAR *  out_6  =  "���� ��������� ";
   char FAR *  out_7  =  "ᥬ� ��������� ";
   char FAR *  out_8  =  "��ᥬ� ��������� ";
   char FAR *  out_9  =  "������ ��������� ";
   char FAR *  out_10  = "������ ��������� ";
   char FAR *  out_11  = "���������� ��������� ";
   char FAR *  out_12  = "��������� ��������� ";
   char FAR *  out_13  = "�p������� ��������� ";
   char FAR *  out_14  = "���p������ ��������� ";
   char FAR *  out_15  = "��⭠���� ��������� ";
   char FAR *  out_16  = "��⭠���� ��������� ";
   char FAR *  out_17  = "ᥬ������ ��������� ";
   char FAR *  out_18  = "��ᥬ������ ��������� ";
   char FAR *  out_19  = "����⭠���� ��������� ";
    
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
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = 'H';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case 'p':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
       break;
     case '�':        
       *str = '�';
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


    /* �⭨ ��������� */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }
      
      /*��������*/
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

    /* �⭨ ����� */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*�����*/
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
    /* �⭨ */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*����⪨*/
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


    /* �⭨ ��������� */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }

      /*��������*/
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

    /* �⭨ ����� */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*�����*/
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
    /* �⭨ */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*����⪨*/
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


    /* �⭨ ��������� */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }

      /*��������*/
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

    /* �⭨ ����� */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*�����*/
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
    /* �⭨ */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*����⪨*/
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


    /* �⭨ ��������� */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }

      /*��������*/
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

    /* �⭨ ����� */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*�����*/
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
    /* �⭨ */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*����⪨*/
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


    /* �⭨ ��������� */
    n_999XXXXXX = ret_3namber(p1.ev_long,7);
    if (n_999XXXXXX!=0){
      n_9XXXXXXXX = ret_namber(p1.ev_long,9); 
      if (n_9XXXXXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXXXXX);
      }

      /*��������*/
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

    /* �⭨ ����� */
    n_999XXX = ret_3namber(p1.ev_long,4);
    if (n_999XXX!=0){
      n_9XXXXX = ret_namber(p1.ev_long,6); 
      if (n_9XXXXX>0){
       addr0 = add_rub_100_900 (addr0,n_9XXXXX);
      }

      /*�����*/
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
    /* �⭨ */
    n_9XX = ret_namber(p1.ev_long,3); 
    if (n_9XX>0){
     addr0 = add_rub_100_900 (addr0,n_9XX);
    }
    
    /*����⪨*/
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
