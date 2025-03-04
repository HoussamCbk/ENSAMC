#### Made by Choubik Houssam
---
# Algorithmique - Note
## Les fonctions ou sous algorithme
---

Il y a deux types de programmation : 
 - La programmation séquentielle
    - Il n'a pas de fonction.
    - La programmation est dite monolithique c-à-d quelle constitue un seul et unique bloc.
 - La programmation modulaire
    - Utilisation des fonctions.
    - Code plus compréhensible.
    - Code structuré.

nb ! : Dans le cas de la programmation modulaire la maitenance est une opération césarienne / pointue.

Une fonction retourne qu'une seule valeur ou variable.

Exemple d'utilsation de fonction : 

Exercice 4 TD 2 

Enoncé : Ecrire un algorithme qui demande à l’utilisateur de fournir deux nombres entiers n et p, tel que 𝒏 ≥ 𝒑. Puis, il calcul le
nombre de combinaisons de p par n.

Solution 1 : on utilisera trois boucles pour pour n! , p! et (n-p)!

Solution 2 :

On déclare d'abord la fonction factorielle : 

```
/* L'édition de fonction */
fonction factorielle(a:ENTIER): ENTIER /* entête de fonction */
i,F_a : ENTIER
DEBUT
    F_a <- 1
    pour( i<-1 , i<a , i<-i+1 )
        F_a <- F_a*i
    finpour
    retourner(F_a)
FINFCT /* Corps de la fonction */
```

Maintenant on peut écrire notre algorithme : 

```
ALGORITHME combinaison_np
n,p,Cpn:ENTIER
DEBUT
FAIRE 
    AFFICHER("donner la valeur de n et p:")
    LIRE(n,p)
TANT QUE((n<0) OU (p<0) OU (n<p))

Cpn <- factorielle(n)/(factorielle(p)*factorielle(n-p))
AFFICHER("Le Cpn est égale à :",Cpn)
FIN

```

Prog qui demande à user les
polynome
deg
ens de coeff
une val x



```
/*

Polynome
 <- degré >= 0 : ENTIER done
 <- les coefficients : REEL done
 <- la valeur de X : REEL

*/
```
>Méthode 1 : En utilisant la puissance.

```
/* definitions de fonctions */

FONCTION puissance(x: REEL, n:ENTIER) :ENTIER
DEBUT
    P<-1
    POUR(i<-0, i<n,i<-i+1)
        P<-P*x
    FINPOUR
    RETOURNER(P)
FINFCT

/* début d'algorithme */

ALGORITHME polynome
i:ENTIER
p:REEL
DEBUT
    FAIRE
        AFFICHER("Donner le degré du polynome")
        LIRE(d)
        SI (d<0) ALORS
            AFFICHER("Le degré doit être positif")
        FINSI
    TANTQUE(d<0)

    AFFICHER("Donner les coefficients")
    POUR(i<-0, i<=n, i<-i+1)
        AFFICHER("Co(",i,")=")
        LIRE(Coef[i])
    FINPOUR
    AFFICHER("Donner la valeur de x")
    LIRE(x)
    /* Fin introduction de données */

    /*Traitement et calcul*/

    pol<-0
    POUR(i<-0, i<=, i<-i+1)
        pol<- pol+coef[i]*Puissance(x,i) 
    FINPOUR

    /* Affichage de résultat */

    AFFICHER("la valeur du polynome est",pol)

FIN
```
>Méthode 2 : En utilisant la méthode d'Horner.

La méthode d'Horner est la suivante :
- Prenons par exemple un polynome P

>>P(x)= ax^3 + bx^2 + cx + d 

c'est équivalent à : 

>>P(x)= ((ax+b)*x+c)*x+d

```
/* début d'algorithme */

ALGORITHME polynome
N[q]:REEL
x : REEL
i,d,q : ENTIER
DEBUT
    FAIRE
        AFFICHER("Donner le degré du polynome")
        LIRE(d)
        SI (d<0) ALORS
            AFFICHER("Le degré doit être positif")
        FINSI
    TANTQUE(d<0)

    q <- d+1
    AFFICHER("Veuillez saisir les coefficients du polynomes:")
    POUR (i<-1, i<=q,i<i+1)
        AFFICHER("Le coffecifient",i)
        LIRE(N[i])
    FINPOUR
    AFFICHER("Veuillez saisir la valeur de x")
    LIRE(x)
    p <-  N[1]
    POUR(i<-1, i<=d,i<i+1)
        p <- p*x +  N[i]
    FINPOUR
    AFFICHER("la valeur du polynome est:",p)
FIN

```





























