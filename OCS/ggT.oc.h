

#ifndef AggT_included
#define AggT_included

#define __AggT_AggT __AggT_1
#define _AggT_AggT _AggT_1
extern OBJ __AggT_AggT;
extern OBJ _AggT_AggT(OBJ,OBJ);

#define __AggT_AeeA __AggT_2
#define _AggT_AeeA _AggT_2
extern OBJ __AggT_AeeA;
extern TUP3 _AggT_AeeA(OBJ,OBJ);

#ifndef AggT_AggT
#define AggT_AggT(x1,x2,x3) {x3=_AggT_AggT(x1,x2);}
#endif

#ifndef AggT_AeeA
#define AggT_AeeA(x1,x2,x3,x4,x5) {TUP3 t;t=_AggT_AeeA(x1,x2);x3=t.c1;x4=t.c2;x5=t.c3;}
#endif

#ifndef AggT_AggT_L3
#define AggT_AggT_L3(x1,x2,x5) {x5=_AggT_AggT_L3(x1,x2);}
#endif

#ifndef AggT_AeeA_L4
#define AggT_AeeA_L4(x1,x2,x12,x13,x14) {TUP3 t;t=_AggT_AeeA_L4(x1,x2);x12=t.c1;x13=t.c2;x14=t.c3;}
#endif

#endif
