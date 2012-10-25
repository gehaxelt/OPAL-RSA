

#line 1 "RSA.impl"
#include "BUILTIN.h"
extern OBJ __ANat_5;
extern OBJ __ANat_8;
extern OBJ __ANat_60;
extern OBJ __ANat_62;
extern OBJ __ANat_63;
extern OBJ __ANat_67;
extern OBJ __ANat_69;
extern OBJ __ANat_80;
extern OBJ __APrimeCalculator_2;
extern OBJ __AggT_2;
extern OBJ __AInt_2;
extern OBJ __AInt_56;
extern OBJ __AInt_83;
extern OBJ _ARSA_1(OBJ);OBJ __ARSA_1; /* getPrime */
extern OBJ _ARSA_2(OBJ,OBJ);OBJ __ARSA_2; /* getN */
extern OBJ _ARSA_3(OBJ,OBJ);OBJ __ARSA_3; /* getPhiN */
extern OBJ _ARSA_4(OBJ);OBJ __ARSA_4; /* getE */
extern OBJ _ARSA_5(OBJ,OBJ);OBJ __ARSA_5; /* getD */
extern OBJ _ARSA_6(OBJ,OBJ,OBJ);OBJ __ARSA_6; /* encrypt */
extern OBJ _ARSA_7(OBJ,OBJ,OBJ);OBJ __ARSA_7; /* decrypt */
OBJ __ARSA_8; /* getPrime'8 */
extern OBJ _ARSA_9(OBJ);OBJ __ARSA_9; /* getPrime'9 */
extern OBJ _ARSA_10(OBJ,OBJ);OBJ __ARSA_10; /* getN'10 */
extern OBJ _ARSA_11(OBJ,OBJ);OBJ __ARSA_11; /* getPhiN'11 */
extern OBJ _ARSA_12(OBJ);OBJ __ARSA_12; /* getE'12 */
extern OBJ _ARSA_13(OBJ,OBJ);OBJ __ARSA_13; /* getD'13 */
extern OBJ _ARSA_14(OBJ,OBJ,OBJ);OBJ __ARSA_14; /* encrypt'14 */
extern OBJ _ARSA_15(OBJ,OBJ,OBJ);OBJ __ARSA_15; /* decrypt'15 */

extern OBJ _ARSA_1(OBJ x1) /* getPrime */
{OBJ r;
 CPCLS(__ARSA_9,1);
#line 3
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__ARSA_9,1))(__ARSA_9,x1);
#line 3
 return r;}

extern OBJ _ARSA_2(OBJ x1,OBJ x2) /* getN */
{OBJ r;
 CPCLS(__ARSA_10,1);
#line 9
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ARSA_10,2))(__ARSA_10,x1,x2);
#line 9
 return r;}

extern OBJ _ARSA_3(OBJ x1,OBJ x2) /* getPhiN */
{OBJ r;
 CPCLS(__ARSA_11,1);
#line 12
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ARSA_11,2))(__ARSA_11,x1,x2);
#line 12
 return r;}

extern OBJ _ARSA_4(OBJ x1) /* getE */
{OBJ r;
 CPCLS(__ARSA_12,1);
#line 15
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__ARSA_12,1))(__ARSA_12,x1);
#line 15
 return r;}

extern OBJ _ARSA_5(OBJ x1,OBJ x2) /* getD */
{OBJ r;
 CPCLS(__ARSA_13,1);
#line 18
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ARSA_13,2))(__ARSA_13,x1,x2);
#line 18
 return r;}

extern OBJ _ARSA_6(OBJ x1,OBJ x2,OBJ x3) /* encrypt */
{OBJ r;
 CPCLS(__ARSA_14,1);
#line 26
 r=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ARSA_14,3))(__ARSA_14,x1,x2,x3);
#line 26
 return r;}

extern OBJ _ARSA_7(OBJ x1,OBJ x2,OBJ x3) /* decrypt */
{OBJ r;
 CPCLS(__ARSA_15,1);
#line 29
 r=(*(OBJ(*)(OBJ,OBJ,OBJ,OBJ))METHOD(__ARSA_15,3))(__ARSA_15,x1,x2,x3);
#line 29
 return r;}

extern OBJ _ARSA_9(OBJ x1) /* getPrime'9 */
{OBJ r;
 CPPRD(__ARSA_8,1);
 CPCLS(__ANat_60,1);
 CPCLS(__ANat_80,1);
 COPY(x1,1);
#line 3
 {OBJ x2;OBJ x3;
#line 4
  x2=(*(OBJ(*)(OBJ,OBJ))METHOD(__ANat_60,1))(__ANat_60,__ARSA_8);
#line 4
  x3=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_80,2))(__ANat_80,x1,x2);
#line 4
  if(ISTGPRM(x3,1)){
#line 4
   CPCLS(__APrimeCalculator_2,1);
#line 4
   r=(*(OBJ(*)(OBJ,OBJ))METHOD(__APrimeCalculator_2,1))(__APrimeCalculator_2,x1);
#line 4
  }else{
#line 4
   FREE(x1,1);
#line 4
   COPY(__ANat_5,1);
#line 6
   r=__ANat_5;}}
#line 6
 return r;}

extern OBJ _ARSA_10(OBJ x1,OBJ x2) /* getN'10 */
{OBJ r;
 CPCLS(__ANat_63,1);
#line 9
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_63,2))(__ANat_63,x1,x2);
#line 9
 return r;}

extern OBJ _ARSA_11(OBJ x1,OBJ x2) /* getPhiN'11 */
{OBJ r;
 COPY(__ANat_8,2);
 CPCLS(__ANat_62,2);
 CPCLS(__ANat_63,1);
#line 12
 {OBJ x3;OBJ x4;
#line 13
  x3=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_62,2))(__ANat_62,x1,__ANat_8);
#line 13
  x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_62,2))(__ANat_62,x2,__ANat_8);
#line 13
  r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_63,2))(__ANat_63,x3,x4);}
#line 13
 return r;}

extern OBJ _ARSA_12(OBJ x1) /* getE'12 */
{OBJ r;
 COPY(__ANat_8,1);
 CPCLS(__ANat_62,1);
 CPCLS(__APrimeCalculator_2,1);
#line 15
 {OBJ x2;
#line 16
  x2=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_62,2))(__ANat_62,x1,__ANat_8);
#line 16
  r=(*(OBJ(*)(OBJ,OBJ))METHOD(__APrimeCalculator_2,1))(__APrimeCalculator_2,x2);}
#line 16
 return r;}

extern OBJ _ARSA_13(OBJ x1,OBJ x2) /* getD'13 */
{OBJ r;
 CPCLS(__AggT_2,1);
 COPY(__AInt_2,1);
 CPCLS(__AInt_83,1);
 COPY(x1,1);
#line 18
 {OBJ x4;OBJ x5;OBJ x6;OBJ x7;
#line 20
  {OBJ t=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AggT_2,2))(__AggT_2,x2,x1);
#line 20
   x4=FLD1(t,1);
#line 20
   x5=FLD1(t,2);
#line 20
   x6=FLD1(t,3);
#line 20
   DSPRDF(t);}
#line 20
  FREE(x4,1);
#line 20
  COPY(x5,1);
#line 20
  FREE(x6,1);
#line 22
  x7=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AInt_83,2))(__AInt_83,x5,__AInt_2);
#line 22
  if(ISTGPRM(x7,1)){
#line 22
   CPCLS(__AInt_56,1);
#line 22
   r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__AInt_56,2))(__AInt_56,x5,x1);
#line 22
  }else{
#line 22
   FREE(x1,1);
#line 22
   r=x5;}}
#line 22
 return r;}

extern OBJ _ARSA_14(OBJ x1,OBJ x2,OBJ x3) /* encrypt'14 */
{OBJ r;
 CPCLS(__ANat_67,1);
 CPCLS(__ANat_69,1);
#line 26
 {OBJ x4;
#line 27
  x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_69,2))(__ANat_69,x1,x2);
#line 27
  r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_67,2))(__ANat_67,x4,x3);}
#line 27
 return r;}

extern OBJ _ARSA_15(OBJ x1,OBJ x2,OBJ x3) /* decrypt'15 */
{OBJ r;
 CPCLS(__ANat_67,1);
 CPCLS(__ANat_69,1);
#line 29
 {OBJ x4;
#line 30
  x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_69,2))(__ANat_69,x1,x2);
#line 30
  r=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_67,2))(__ANat_67,x4,x3);}
#line 30
 return r;}

static OBJ _mt_1_0_1(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 return r;}
static OBJ _mt_1_0_1_l(OBJ t,OBJ t1) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ))ENTRY(t))(t1);
 COPY(r,1);LZYCLS(t,r);
 return r;}

static OBJ _mt_2_0_2(OBJ t,OBJ t1,OBJ t2) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ))ENTRY(t))(t1,t2);
 return r;}

static OBJ _mt_3_0_3(OBJ t,OBJ t1,OBJ t2,OBJ t3) 
{OBJ r;
 DCCLS(t,1);
 r=(*(OBJ(*)(OBJ,OBJ,OBJ))ENTRY(t))(t1,t2,t3);
 return r;}

init_ARSA()
{
 static int visited=0; if(visited) return; visited=1;
 init_ANat();
 init_ARandom();
 init_APrint();
 init_APrimeCalculator();
 init_AggT();
 init_AInt();
 init_ABool();
 init_ADenotation();
 init_ANatConv();
 init_AReal();
 init_ARealConv();
 init_AIntConv();
 init_AChar();
 init_ACom();
 init_AVoid();
 init_ASeq();
 init_AOption();
 CLS(3,_ARSA_15,__ARSA_15);
 CLS(3,_ARSA_14,__ARSA_14);
 CLS(2,_ARSA_13,__ARSA_13);
 CLS(1,_ARSA_12,__ARSA_12);
 CLS(2,_ARSA_11,__ARSA_11);
 CLS(2,_ARSA_10,__ARSA_10);
 CLS(1,_ARSA_9,__ARSA_9);
 DEN("60",__ARSA_8);
 CLS(3,_ARSA_7,__ARSA_7);
 CLS(3,_ARSA_6,__ARSA_6);
 CLS(2,_ARSA_5,__ARSA_5);
 CLS(1,_ARSA_4,__ARSA_4);
 CLS(2,_ARSA_3,__ARSA_3);
 CLS(2,_ARSA_2,__ARSA_2);
 CLS(1,_ARSA_1,__ARSA_1);
 MTH(1,0,1,_mt_1_0_1);LZYMTH(1,0,1,_mt_1_0_1_l);
 MTH(2,0,2,_mt_2_0_2);LZYMTH(2,0,2,_mt_2_0_2);
 MTH(3,0,3,_mt_3_0_3);LZYMTH(3,0,3,_mt_3_0_3);}

