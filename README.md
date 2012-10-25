RSA in Opal
===========

Implementation von RSA in Opal.

Es ist nur beschränkt nutzbar, da nat ziemlich klein ist, und die Zahlen deswegen nicht ausreichend groß sind.

##Folgende Schritte müssen durchgeführt werden##

- > e getPrime(!"50") -- prime p
- > e getPrime(!"30") -- prime q
- > e getN(prime_p, prime_q) -- Faktor N
- > e getPhiN(prime_p, prime_q) -- Phi(N)
- > e getE(phin) -- PubKey E
- > e getD(phin, E) -- PrivKey D
- > e encrypt(number, pubkey, faktorn) -- Verschlüsselung
- > e decrypt(chiffre, privkey, faktorn) -- Entschlüsselung


