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

##Funktionsfähigkeit##

Der Code funktioniert leider nur bedingt. Denn für die Entschlüsselung bzw. Verschlüsselung entstehen u.a. große Zahlen, mit welchen Opal nicht umzugehen weiß und einen Fehler ausgibt.

	mod(pow(text, pubkey),factorN)

Die Verschlüsselung funktioniert dabei noch relativ gut. Die Entschlüsselung jedoch kaum mehr.

Gruß

gehaxelt

