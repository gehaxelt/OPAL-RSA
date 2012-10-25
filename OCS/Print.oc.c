

#line 1 "Print.impl"
#include "BUILTIN.h"
extern OBJ __ADenotation_4;
extern OBJ __ANatConv_1;
extern OBJ __ARealConv_1;
extern OBJ __AIntConv_1;
extern OBJ _APrint_1(OBJ,OBJ);OBJ __APrint_1; /* printNat */
extern OBJ _APrint_2(OBJ,OBJ);OBJ __APrint_2; /* printReal */
extern OBJ _APrint_3(OBJ,OBJ);OBJ __APrint_3; /* printInt */
extern OBJ _APrint_4(OBJ,OBJ);OBJ __APrint_4; /* printNat'4 */
extern OBJ _APrint_5(OBJ,OBJ);OBJ __APrint_5; /* printReal'5 */
extern OBJ _APrint_6(OBJ,OBJ);OBJ __APrint_6; /* printInt'6 */

extern OBJ _APrint_1(OBJ x1,OBJ x2) /* printNat */
{OBJ r;
 CPCLS(__APrint_4,1);
#line 3
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__APrint_4,2))(__APrint_4,x1,x2);
#line 3
 return r;}

extern OBJ _APrint_2(OBJ x1,OBJ x2) /* printReal */
{OBJ r;
 CPCLS(__APrint_5,1);
#line 6
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__APrint_5,2))(__APrint_5,x1,x2);
#line 6
 return r;}

extern OBJ _APrint_3(OBJ x1,OBJ x2) /* printInt */
{OBJ r;
 CPCLS(__APrint_6,1);
#line 9
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__APrint_6,2))(__APrint_6,x1,x2);
#line 9
 return r;}

extern OBJ _APrint_4(OBJ x1,OBJ x2) /* printNat'4 */
{OBJ r;
 CPCLS(__ADenotation_4,1);
 CPCLS(__ANatConv_1,1);
#line 3
 {OBJ x3;
#line 4
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__ANatConv_1,1))(__ANatConv_1,x2);
#line 4
  r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ADenotation_4,2))(__ADenotation_4,x1,x3);}
#line 4
 return r;}

extern OBJ _APrint_5(OBJ x1,OBJ x2) /* printReal'5 */
{OBJ r;
 CPCLS(__ADenotation_4,1);
 CPCLS(__ARealConv_1,1);
#line 6
 {OBJ x3;
#line 7
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__ARealConv_1,1))(__ARealConv_1,x2);
#line 7
  r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ADenotation_4,2))(__ADenotation_4,x1,x3);}
#line 7
 return r;}

extern OBJ _APrint_6(OBJ x1,OBJ x2) /* printInt'6 */
{OBJ r;
 CPCLS(__ADenotation_4,1);
 CPCLS(__AIntConv_1,1);
#line 9
 {OBJ x3;
#line 10
  x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__AIntConv_1,1))(__AIntConv_1,x2);
#line 10
  r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ADenotation_4,2))(__ADenotation_4,x1,x3);}
#line 10
 return r;}

static OBJ _mt_2_0_2(OBJ t,OBJ t1,OBJ t2) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ))ENTRY(t))(t1,t2);
 return r;}

init_APrint()
{
 static int visited=0; if(visited) return; visited=1;
 init_ANat();
 init_ADenotation();
 init_ANatConv();
 init_AReal();
 init_ARealConv();
 init_AInt();
 init_AIntConv();
 init_AChar();
 CLS(2,_APrint_6,__APrint_6);
 CLS(2,_APrint_5,__APrint_5);
 CLS(2,_APrint_4,__APrint_4);
 CLS(2,_APrint_3,__APrint_3);
 CLS(2,_APrint_2,__APrint_2);
 CLS(2,_APrint_1,__APrint_1);
 MTH(2,0,2,_mt_2_0_2);LZYMTH(2,0,2,_mt_2_0_2);}

