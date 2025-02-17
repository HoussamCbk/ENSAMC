
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
```
  Algorithme : Mystere
    A, B, C, p, d, t : ENTIER
  DEBUT
  /* Lecture des variables*/
  LIRE(A,B,C)
  SI (A<B) ALORS
    SI (C>B) ALORS
      p <- A
      d <- B
      t <- C
    SINON
      SI (A<C) ALORS
        p <- A
        d <- C
        t <- B
      SINON
        p <- C
        d <- A
        t <- B
  SINON
    SI (C>A) ALORS
    p <- B
    d <- A
    t <- C
    SINON
      SI (B<C) ALORS
      p <- B
      d <- C
      t <- A
      SINON
      p <- C
      d <- B
      t <- A
      FINSI
      FINSI
    FINSI
/* Affichage du résultat */
AFFICHER(

  ```
1.Simuler l'exécution de l'algorithme ci-contre en utilisant comme valeurs pour A, B et C : (5, 8, 9) puis (2, 6, 3) et enfin (3, 2, 1) (formuler les preuves).

- Cas 1 : On prend A = 5, B = 8 et C = 9, or on a A < B et puisque C > B  Alors **p = 5 , d = 8 et t = 9**
- Cas 2 : On prend A = 2, B = 6 et C = 3, or on a A < B et puisque C < B Alors **p = 2, d = 3 et t = 6**
- Cas 3 : On prend A = 3, B = 2 et C = 1, or on a A > B et puisque C < B Alors **p = 1, d = 2 et t = 3**

2.En déduire l’utilité de cet algorithme et donner lui un nom plus significatif.

- Utilité : Ordre croissant
- Nom de l'algorithme : ordre_croissant_nbrs

3.Déterminer le nombre d'affectations et de comparaisons engendrées par l’algorithme (une fourchette si ce nombre varie).

Le nombre d'affectations : 3

## 🌟 **Exercice 03 :** 

1. Evaluer les expressions suivantes en supposant
   A←20 B←5 C←-10 D←2 X←12 Y←15
- X*(B<C)+Y* NON(B<C)

    Puisque B<C n'est pas vérifié or "False" donc B<C prend "0" et Non(B<C) prend "1". Par suite l'expression X*(B<C)+Y* NON(B<C) = Y* NON(B<C) = Y*1 = Y = **15**.

- NON(X-D+C)OU D --> **1**  
- A ET B OU NON 0 ET C ET NON D --> **1**
- ((A ET B) OU (NON 0 ET C)) ET NON D --> **0**
- ((A ET B) OU NON 0) OU (C ET (NON D)) --> **1**

3. Eliminer les parenthèses qui ne sont pas nécessaires dans les expressions ci-dessus.

- X*(B<C)+Y* NON(B<C)
- NON(X-D+C)OU D
- A ET B OU NON 0 ET C ET NON D
- (A ET B OU NON 0 ET C) ET NON D
- A ET B OU NON 0 OU C ET NON D


## 🌟 **Exercice 04 :** 

Ecrire un algorithme qui affiche la résistance équivalente à trois résistances R1, R2, R3 (type Réel). Les données sont introduites par l’utilisateurs et l’algorithme doit proposer un choix a l’utilisateur en fonction du branchement des résistances :
- Si les résistances sont branchées en série : 𝑅𝑠é𝑟 = 𝑅1+𝑅2+𝑅3
- Si les résistances sont branchées en parallèle : 𝑅𝑝𝑎𝑟=𝑅1×𝑅2×𝑅3/𝑅1𝑅2+𝑅1𝑅3+𝑅2𝑅3
