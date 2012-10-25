

#ifndef ARSA_included
#define ARSA_included

#define __ARSA_AgetPrime __ARSA_1
#define _ARSA_AgetPrime _ARSA_1
extern OBJ __ARSA_AgetPrime;
extern OBJ _ARSA_AgetPrime(OBJ);

#define __ARSA_AgetN __ARSA_2
#define _ARSA_AgetN _ARSA_2
extern OBJ __ARSA_AgetN;
extern OBJ _ARSA_AgetN(OBJ,OBJ);

#define __ARSA_AgetPhiN __ARSA_3
#define _ARSA_AgetPhiN _ARSA_3
extern OBJ __ARSA_AgetPhiN;
extern OBJ _ARSA_AgetPhiN(OBJ,OBJ);

#define __ARSA_AgetE __ARSA_4
#define _ARSA_AgetE _ARSA_4
extern OBJ __ARSA_AgetE;
extern OBJ _ARSA_AgetE(OBJ);

#define __ARSA_AgetD __ARSA_5
#define _ARSA_AgetD _ARSA_5
extern OBJ __ARSA_AgetD;
extern OBJ _ARSA_AgetD(OBJ,OBJ);

#define __ARSA_Aencrypt __ARSA_6
#define _ARSA_Aencrypt _ARSA_6
extern OBJ __ARSA_Aencrypt;
extern OBJ _ARSA_Aencrypt(OBJ,OBJ,OBJ);

#define __ARSA_Adecrypt __ARSA_7
#define _ARSA_Adecrypt _ARSA_7
extern OBJ __ARSA_Adecrypt;
extern OBJ _ARSA_Adecrypt(OBJ,OBJ,OBJ);

#ifndef ARSA_AgetPrime
#define ARSA_AgetPrime(x1,x2) {x2=_ARSA_AgetPrime(x1);}
#endif

#ifndef ARSA_AgetN
#define ARSA_AgetN(x1,x2,x3) {x3=_ARSA_AgetN(x1,x2);}
#endif

#ifndef ARSA_AgetPhiN
#define ARSA_AgetPhiN(x1,x2,x3) {x3=_ARSA_AgetPhiN(x1,x2);}
#endif

#ifndef ARSA_AgetE
#define ARSA_AgetE(x1,x2) {x2=_ARSA_AgetE(x1);}
#endif

#ifndef ARSA_AgetD
#define ARSA_AgetD(x1,x2,x3) {x3=_ARSA_AgetD(x1,x2);}
#endif

#ifndef ARSA_Aencrypt
#define ARSA_Aencrypt(x1,x2,x3,x4) {x4=_ARSA_Aencrypt(x1,x2,x3);}
#endif

#ifndef ARSA_Adecrypt
#define ARSA_Adecrypt(x1,x2,x3,x4) {x4=_ARSA_Adecrypt(x1,x2,x3);}
#endif

#ifndef ARSA_AgetPrime_L9
#define ARSA_AgetPrime_L9(x1,x4) {x4=_ARSA_AgetPrime_L9(x1);}
#endif

#ifndef ARSA_AgetN_L10
#define ARSA_AgetN_L10(x1,x2,x3) {x3=_ARSA_AgetN_L10(x1,x2);}
#endif

#ifndef ARSA_AgetPhiN_L11
#define ARSA_AgetPhiN_L11(x1,x2,x5) {x5=_ARSA_AgetPhiN_L11(x1,x2);}
#endif

#ifndef ARSA_AgetE_L12
#define ARSA_AgetE_L12(x1,x3) {x3=_ARSA_AgetE_L12(x1);}
#endif

#ifndef ARSA_AgetD_L13
#define ARSA_AgetD_L13(x1,x2,x8) {x8=_ARSA_AgetD_L13(x1,x2);}
#endif

#ifndef ARSA_Aencrypt_L14
#define ARSA_Aencrypt_L14(x1,x2,x3,x5) {x5=_ARSA_Aencrypt_L14(x1,x2,x3);}
#endif

#ifndef ARSA_Adecrypt_L15
#define ARSA_Adecrypt_L15(x1,x2,x3,x5) {x5=_ARSA_Adecrypt_L15(x1,x2,x3);}
#endif

#endif
