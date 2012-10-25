

#line 1 "ggT.impl"
#include "BUILTIN.h"
extern OBJ __ANat_5;
extern OBJ __ANat_67;
extern OBJ __ANat_76;
extern OBJ __AInt_2;
extern OBJ __AInt_3;
extern OBJ __AInt_57;
extern OBJ __AInt_58;
extern OBJ __AInt_59;
extern OBJ __AInt_62;
extern OBJ __AInt_79;
extern OBJ _AggT_1(OBJ,OBJ);OBJ __AggT_1; /* ggT */
extern TUP3 _AggT_2(OBJ,OBJ);OBJ __AggT_2; /* eeA */
extern OBJ _AggT_3(OBJ,OBJ);OBJ __AggT_3; /* ggT'3 */
extern TUP3 _AggT_4(OBJ,OBJ);OBJ __AggT_4; /* eeA'4 */

extern OBJ _AggT_1(OBJ x1,OBJ x2) /* ggT */
{OBJ r;
 CPCLS(__AggT_3,1);
#line 3
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AggT_3,2))(__AggT_3,x1,x2);
#line 3
 return r;}

extern TUP3 _AggT_2(OBJ x1,OBJ x2) /* eeA */
{TUP3 r;
 CPCLS(__AggT_4,1);
#line 9
 {OBJ t=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AggT_4,2))(__AggT_4,x1,x2);
#line 9
  r.c1=FLD1(t,1);
#line 9
  r.c2=FLD1(t,2);
#line 9
  r.c3=FLD1(t,3);
#line 9
  DSPRDF(t);}
#line 9
 return r;}
#line 9
extern OBJ _AggT_2_c(OBJ x1,OBJ x2) /* eeA */
#line 9
{OBJ r;
#line 9
 {TUP3 t=_AggT_2(x1,x2);
#line 9
  PRD1(3,r);
#line 9
  FLD1(r,1)=t.c1;
#line 9
  FLD1(r,2)=t.c2;
#line 9
  FLD1(r,3)=t.c3;}
#line 9
 return r;}

extern OBJ _AggT_3(OBJ x1,OBJ x2) /* ggT'3 */
{OBJ r;
 COPY(__ANat_5,1);
 CPCLS(__ANat_76,1);
 COPY(x2,1);
#line 3
 {OBJ x3;
#line 4
  x3=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_76,2))(__ANat_76,x2,__ANat_5);
#line 4
  if(ISTGPRM(x3,1)){
#line 4
   FREE(x2,1);
#line 4
   r=x1;
#line 4
  }else{
#line 4
   COPY(x2,1);
#line 4
   CPCLS(__AggT_1,1);
#line 4
   CPCLS(__ANat_67,1);
#line 4
   {OBJ x4;
#line 5
    x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_67,2))(__ANat_67,x1,x2);
#line 5
    r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AggT_1,2))(__AggT_1,x2,x4);}}}
#line 5
 return r;}

extern TUP3 _AggT_4(OBJ x1,OBJ x2) /* eeA'4 */
{TUP3 r;
 COPY(__AInt_2,1);
 CPCLS(__AInt_79,1);
 COPY(x2,1);
#line 9
 {OBJ x3;
#line 10
  x3=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AInt_79,2))(__AInt_79,x2,__AInt_2);
#line 10
  if(ISTGPRM(x3,1)){
#line 10
   FREE(x2,1);
#line 10
   COPY(__AInt_2,1);
#line 10
   COPY(__AInt_3,1);
#line 10
   r.c1=x1;r.c2=__AInt_3;r.c3=__AInt_2;
#line 10
  }else{
#line 10
   COPY(x1,1);
#line 10
   COPY(x2,2);
#line 10
   CPCLS(__AggT_2,1);
#line 10
   CPCLS(__AInt_57,1);
#line 10
   CPCLS(__AInt_58,1);
#line 10
   CPCLS(__AInt_59,1);
#line 10
   CPCLS(__AInt_62,1);
#line 10
   {OBJ x4;OBJ x5;OBJ x7;OBJ x8;OBJ x9;OBJ x10;OBJ x11;
#line 14
    x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AInt_62,2))(__AInt_62,x1,x2);
#line 16
    x5=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AInt_59,2))(__AInt_59,x1,x2);
#line 14
    {OBJ t=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AggT_2,2))(__AggT_2,x2,x4);
#line 14
     x7=FLD1(t,1);
#line 14
     x8=FLD1(t,2);
#line 14
     x9=FLD1(t,3);
#line 14
     DSPRDF(t);}
#line 14
    COPY(x9,1);
#line 16
    x10=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AInt_58,2))(__AInt_58,x5,x9);
#line 16
    x11=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AInt_57,2))(__AInt_57,x8,x10);
#line 16
    r.c1=x7;r.c2=x9;r.c3=x11;}}}
#line 16
 return r;}
#line 16
extern OBJ _AggT_4_c(OBJ x1,OBJ x2) /* eeA'4 */
#line 16
{OBJ r;
#line 16
 {TUP3 t=_AggT_4(x1,x2);
#line 16
  PRD1(3,r);
#line 16
  FLD1(r,1)=t.c1;
#line 16
  FLD1(r,2)=t.c2;
#line 16
  FLD1(r,3)=t.c3;}
#line 16
 return r;}

static OBJ _mt_2_0_2(OBJ t,OBJ t1,OBJ t2) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ))ENTRY(t))(t1,t2);
 return r;}

init_AggT()
{
 static int visited=0; if(visited) return; visited=1;
 init_ANat();
 init_AInt();
 CLS(2,_AggT_4_c,__AggT_4);
 CLS(2,_AggT_3,__AggT_3);
 CLS(2,_AggT_2_c,__AggT_2);
 CLS(2,_AggT_1,__AggT_1);
 MTH(2,0,2,_mt_2_0_2);LZYMTH(2,0,2,_mt_2_0_2);}

