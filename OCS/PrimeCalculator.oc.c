

#line 1 "PrimeCalculator.impl"
#include "BUILTIN.h"
extern OBJ __ANat_5;
extern OBJ __ANat_8;
extern OBJ __ANat_9;
extern OBJ __ANat_62;
extern OBJ __ANat_67;
extern OBJ __ANat_69;
extern OBJ __ANat_76;
extern OBJ __ANat_81;
extern OBJ _APrimeCalculator_1(OBJ);OBJ __APrimeCalculator_1; /* isPrime */
extern OBJ _APrimeCalculator_2(OBJ);OBJ __APrimeCalculator_2; /* findPrime */
extern OBJ _APrimeCalculator_3(OBJ);OBJ __APrimeCalculator_3; /* isPrime'3 */
extern OBJ _APrimeCalculator_4(OBJ);OBJ __APrimeCalculator_4; /* findPrime'4 */

extern OBJ _APrimeCalculator_1(OBJ x1) /* isPrime */
{OBJ r;
 CPCLS(__APrimeCalculator_3,1);
#line 5
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__APrimeCalculator_3,1))(__APrimeCalculator_3,x1);
#line 5
 return r;}

extern OBJ _APrimeCalculator_2(OBJ x1) /* findPrime */
{OBJ r;
 CPCLS(__APrimeCalculator_4,1);
#line 11
 r=(*(OBJ(*)(OBJ,OBJ))METHOD(__APrimeCalculator_4,1))(__APrimeCalculator_4,x1);
#line 11
 return r;}

extern OBJ _APrimeCalculator_3(OBJ x1) /* isPrime'3 */
{OBJ r;
 COPY(__ANat_8,2);
 COPY(__ANat_9,1);
 CPCLS(__ANat_62,1);
 CPCLS(__ANat_67,1);
 CPCLS(__ANat_69,1);
 CPCLS(__ANat_76,1);
 COPY(x1,1);
#line 5
 {OBJ x2;OBJ x3;OBJ x4;OBJ x5;
#line 6
  x2=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_62,2))(__ANat_62,x1,__ANat_8);
#line 6
  x3=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_69,2))(__ANat_69,__ANat_9,x2);
#line 6
  x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_67,2))(__ANat_67,x3,x1);
#line 6
  x5=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_76,2))(__ANat_76,x4,__ANat_8);
#line 6
  if(ISTGPRM(x5,1)){
#line 6
   r=__ABUILTIN_5;
#line 6
  }else{
#line 7
   r=__ABUILTIN_3;}}
#line 7
 return r;}

extern OBJ _APrimeCalculator_4(OBJ x1) /* findPrime'4 */
{OBJ r;
 COPY(__ANat_8,1);
 CPCLS(__ANat_81,1);
 COPY(x1,1);
#line 11
 {OBJ x2;
#line 12
  x2=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_81,2))(__ANat_81,x1,__ANat_8);
#line 12
  if(ISTGPRM(x2,1)){
#line 12
   COPY(x1,1);
#line 12
   CPCLS(__APrimeCalculator_1,1);
#line 12
   {OBJ x3;
#line 13
    x3=(*(OBJ(*)(OBJ,OBJ))METHOD(__APrimeCalculator_1,1))(__APrimeCalculator_1,x1);
#line 13
    if(ISTGPRM(x3,1)){
#line 13
     r=x1;
#line 13
    }else{
#line 13
     CPCLS(__APrimeCalculator_2,1);
#line 13
     COPY(__ANat_8,1);
#line 13
     CPCLS(__ANat_62,1);
#line 13
     {OBJ x4;
#line 14
      x4=(*(OBJ(*)(OBJ,OBJ,OBJ))METHOD(__ANat_62,2))(__ANat_62,x1,__ANat_8);
#line 14
      r=(*(OBJ(*)(OBJ,OBJ))METHOD(__APrimeCalculator_2,1))(__APrimeCalculator_2,x4);}}}
#line 14
  }else{
#line 14
   FREE(x1,1);
#line 14
   COPY(__ANat_5,1);
#line 16
   r=__ANat_5;}}
#line 16
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

init_APrimeCalculator()
{
 static int visited=0; if(visited) return; visited=1;
 init_ANat();
 init_ABool();
 CLS(1,_APrimeCalculator_4,__APrimeCalculator_4);
 CLS(1,_APrimeCalculator_3,__APrimeCalculator_3);
 CLS(1,_APrimeCalculator_2,__APrimeCalculator_2);
 CLS(1,_APrimeCalculator_1,__APrimeCalculator_1);
 MTH(1,0,1,_mt_1_0_1);LZYMTH(1,0,1,_mt_1_0_1_l);}

