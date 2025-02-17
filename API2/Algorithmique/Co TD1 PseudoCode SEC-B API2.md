
## ***Made by Choubik Houssam***  
# **(2024-2025)** TD1 PseudoCode SEC-B API2


---

## 🌟 **Exercice 01 :**  
1. Le pseudo code 1 :
  ```
  Algorithme Algo1
    A, B, C : ENTIER
  DEBUT
   A <- 5
   B <- 3
   C <- A + B
   A <- 2
   C <- B - A
  FIN
  ```
  Les valeurs des variables A, B et C après l'éxecution de l'algorithme :
  |      | A | B | C |
  | :----:  |    :----:   |    :----:  |  :----:  |
  | A <- 5  | 5 | ? | ? |
  | B <- 3 | 5 | 3 | ? |
  | C <- A + B | 5 | 3 | 8 |
  | A <- 2 | 2 | 3 | 8 |
  | C <- B - A | 2 | 3 | 1 |

   2. Le pseudo code 2 :
  ```
  Algorithme Algo2
    A, B, C : ENTIER
  DEBUT
   A <- 3
   B <- 10
   C <- A + B
   B <- A + B
   A <- C
  FIN
  ```

  Les valeurs des variables A, B et C après l'éxecution de l'algorithme :
  |      | A | B | C |
  | :----:  |    :----:   |    :----:  |  :----:  |
  | A <- 3 | 3 | ? | ? |
  | B <- 10 | 3 | 10 | ? |
  | C <- A + B | 3 | 10 | 13 |
  | B <- A + B | 3 | 13 | 13 |
  | A <- C | 13 | 13 | 13 |

   3. Le pseudo code 3 :
  ```
  Algorithme Algo3
    A, B, C : ENTIER
  DEBUT
   A <- 2
   B <- 1
   C <- (5*(A + 2)*3)*(B + 4)
   B <- C + 8/2
   A <- C%2
  FIN
  ```

  Les valeurs des variables A, B et C après l'éxecution de l'algorithme :
  |      | A | B | C |
  | :----:  |    :----:   |    :----:  |  :----:  |
  | A <- 2 | 2 | ? | ? |
  | B <- 1 | 2 | 1 | ? |
  |C <- (5*(A + 2)*3)*(B + 4) | 2 | 1 | 300 |
  | B <- C + 8/2| 2 | 304 | 300 |
  | A <- C%2 | 0 | 304 | 300 |

   4. Le pseudo code 4 :
  ```
  Algorithme Algo4
    A, B, C : ENTIER
  DEBUT
   A <- B
   B <- A
   C <- A - B
  FIN
  ```

  Les valeurs des variables A, B et C après l'éxecution de l'algorithme :
  |      | A | B | C |
  | :----:  |    :----:   |    :----:  |  :----:  |
  | A <- B | B | ? | ? |
  | B <- A | B | B | ? |
  |C <- A - B | B | B | 0 |

## 🌟 **Exercice 02 :** 
__Ecrire un Algorithme qui demande la valeur de n et calcul n!=1x2x..xn__
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
**Soit U<sub>0</sub> = 3 et U<sub>n</sub> = 2 + U<sub>n-1</sub>**

**Ecrire un Algorithme qui calcul U<sub>n</sub> et Somme (i=0 à n) de U<sub>k</sub>**
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

## 🌟 **Exercice 04 :** 
**Soit U<sub>0</sub> = 3 et U<sub>n</sub> = 2 + U<sub>n-1</sub>**

**Ecrire un Algorithme qui donne la plus petite valeur de n tq U<sub>n</sub> > 130**
```
ALGORITHME value_n
  n, U : ENTIER
DEBUT
  U <- 3
  n <- 0
  TANT QUE ( U <= 130 )
    U <- 2 + U
    n <- n+1
  FINTQ
  AFFICHER(La plus petite valeur de n est", n)
FIN
``` 
