For FoxPro 2.5 

set library to RUBLI.PLB ADDITIVE

********************
FUNCTION   RUB_KOP
********************
PARAMETER Var
STORE ALLTRIM(RUBLI_R("",Var)+ALLTRIM(STR((INT(Var*100)-INT(Var)*100)))+" коп.  ") TO RET_STR
RETURN RET_STR