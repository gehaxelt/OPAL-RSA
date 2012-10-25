

#ifndef APrint_included
#define APrint_included

#define __APrint_AprintNat __APrint_1
#define _APrint_AprintNat _APrint_1
extern OBJ __APrint_AprintNat;
extern OBJ _APrint_AprintNat(OBJ,OBJ);

#define __APrint_AprintReal __APrint_2
#define _APrint_AprintReal _APrint_2
extern OBJ __APrint_AprintReal;
extern OBJ _APrint_AprintReal(OBJ,OBJ);

#define __APrint_AprintInt __APrint_3
#define _APrint_AprintInt _APrint_3
extern OBJ __APrint_AprintInt;
extern OBJ _APrint_AprintInt(OBJ,OBJ);

#ifndef APrint_AprintNat
#define APrint_AprintNat(x1,x2,x3) {x3=_APrint_AprintNat(x1,x2);}
#endif

#ifndef APrint_AprintReal
#define APrint_AprintReal(x1,x2,x3) {x3=_APrint_AprintReal(x1,x2);}
#endif

#ifndef APrint_AprintInt
#define APrint_AprintInt(x1,x2,x3) {x3=_APrint_AprintInt(x1,x2);}
#endif

#ifndef APrint_AprintNat_L4
#define APrint_AprintNat_L4(x1,x2,x4) {x4=_APrint_AprintNat_L4(x1,x2);}
#endif

#ifndef APrint_AprintReal_L5
#define APrint_AprintReal_L5(x1,x2,x4) {x4=_APrint_AprintReal_L5(x1,x2);}
#endif

#ifndef APrint_AprintInt_L6
#define APrint_AprintInt_L6(x1,x2,x4) {x4=_APrint_AprintInt_L6(x1,x2);}
#endif

#endif
