

#ifndef APrimeCalculator_included
#define APrimeCalculator_included

#define __APrimeCalculator_AisPrime __APrimeCalculator_1
#define _APrimeCalculator_AisPrime _APrimeCalculator_1
extern OBJ __APrimeCalculator_AisPrime;
extern OBJ _APrimeCalculator_AisPrime(OBJ);

#define __APrimeCalculator_AfindPrime __APrimeCalculator_2
#define _APrimeCalculator_AfindPrime _APrimeCalculator_2
extern OBJ __APrimeCalculator_AfindPrime;
extern OBJ _APrimeCalculator_AfindPrime(OBJ);

#ifndef APrimeCalculator_AisPrime
#define APrimeCalculator_AisPrime(x1,x2) {x2=_APrimeCalculator_AisPrime(x1);}
#endif

#ifndef APrimeCalculator_AfindPrime
#define APrimeCalculator_AfindPrime(x1,x2) {x2=_APrimeCalculator_AfindPrime(x1);}
#endif

#ifndef APrimeCalculator_AisPrime_L3
#define APrimeCalculator_AisPrime_L3(x1,x6) {x6=_APrimeCalculator_AisPrime_L3(x1);}
#endif

#ifndef APrimeCalculator_AfindPrime_L4
#define APrimeCalculator_AfindPrime_L4(x1,x5) {x5=_APrimeCalculator_AfindPrime_L4(x1);}
#endif

#endif
