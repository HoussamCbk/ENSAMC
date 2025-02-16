# Made by ***Choubik Houssam***  **(2024-2025)** TD1 ++


---

## 🌟 **Exercice 01 :**  
**Calcul de la somme S = 1 + 1/2 + ... + 1/n**
Ecrire un Algorithme qui demande la valeur de n et calcul S=1+1/2+..+1/n
```
ALGORITHME calcul_somme
  n, i, S : ENTIER
DEBUT
  AFFICHER("Donner la valeur de n:")
  LIRE(n)
  S <- 0 /* Initialisation*/
  POUR ( i<-1 , i<=n , i<-i+1 )
    S <- S + 1/i
  FIN POUR
  AFFICHER("Voici la somme S=", S)
FIN

```

## 🌟 **Exercice 02 :** 
Ecrire un Algorithme qui demande la valeur de n et calcul n!=1*2*..*n
```
ALGORITHME calcul_factorielle
  n, i, F : ENTIER
DEBUT
  AFFICHER("Entrez la valeur de n :")
  LIRE(n)
  F <- 1
  POUR ( i<-1, i<=n , i<-i+1 )
    F <- F*i
  FIN POUR
  AFFICHER("Le factorielle de n=", n,"est F=", F)
FIN
```

## 🌟 **Exercice 03 :** 
Soit U<sub>0</sub> = 3 et U<sub>n</sub> = 2 + U<sub>n-1</sub>

Ecrire un Algorithme qui calcul U<sub>n</sub> et Somme (i=0 à n) de U<sub>k</sub>
```
ALGORITHME cacul_termegen_somme
  n, i, S, U : ENTIER
DEBUT
  AFFICHER("Donner la valeur de n :")
  LIRE(n)
  U <- 3
  S <- U
  POUR ( i<1, i<=n, i<-i+1 )
    U <- U + 2
    S <- S + U
  FIN POUR
  AFFICHER("Voici le terme generale Un =", U, " Et La somme S=", S)
FIN
```


