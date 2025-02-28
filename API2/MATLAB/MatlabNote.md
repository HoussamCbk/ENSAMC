### Note de cours Matlab ( by CHOUBIK Houssam)
----
### TP N° 2 : Vecteurs & Matrices Séance 28-02-2025

```
rand(n)

```
- rand for random
- n est l'ordre de la matrice

```
randi(m,n)

```

- matrice carrée d’ordre n d’éléments entiers entre 1 et m générés d’une manière aléatoire.
- i for integer

```

x =

    10    20    30    69    90

>> a=x*x'

a =

       14261

>> b=sum(x.*x)

b =

       14261

```

🔴 **NB !** : __Les deux syntaxes sont équivalentes x*x' et sum(x.*x)__

```
M = repmat(M,3,5)

```

La syntaxe M = repmat(M,3,5) est utilisée en MATLAB et Octave pour répliquer la matrice M un certain nombre de fois selon les dimensions spécifiées.

**Explication :**
La fonction repmat(M, m, n) répète la matrice M m fois en ligne et n fois en colonne.

**Exemple :**
Si on a une matrice de départ :

```
>> M = [1 2; 3 4]

M =

     1     2
     3     4

>> M = repmat(M,3,5)

M =

  Columns 1 through 8

     1     2     1     2     1     2     1     2
     3     4     3     4     3     4     3     4
     1     2     1     2     1     2     1     2
     3     4     3     4     3     4     3     4
     1     2     1     2     1     2     1     2
     3     4     3     4     3     4     3     4

  Columns 9 through 10

     1     2
     3     4
     1     2
     3     4
     1     2
     3     4


```

Récapitulatif :
3 → Répète M 3 fois en ligne.
5 → Répète M 5 fois en colonne.
C'est très utile pour générer des motifs ou étendre des matrices.

```
M = toeplitz([1 3 zeros(1,n-2)], [1 2 zeros(1,n-2)])
```
génère une matrice de Toeplitz de taille 𝑛 × 𝑛.

Décomposition de la syntaxe
La fonction toeplitz(c, r) crée une matrice de Toeplitz où :

Le premier argument c est la première colonne de la matrice.
Le second argument r est la première ligne de la matrice.
```
Dans notre cas :

Première colonne : c = [1, 3, 0, 0, ..., 0]
Première ligne : r = [1, 2, 0, 0, ..., 0]
```

Pour n = 5
```
>> n=5

n =

     5

>> c = [1 3 0 0 0]

c =

     1     3     0     0     0

>> r = [1 2 0 0 0]

r =

     1     2     0     0     0

>> M = toeplitz(c, r)

M =

     1     2     0     0     0
     3     1     2     0     0
     0     3     1     2     0
     0     0     3     1     2
     0     0     0     3     1
```
Pour n = 5
```
>> n=3

n =

     3

>> v=[1 2 3]

v =

     1     2     3

>> u=[4 5 6]

u =

     4     5     6

>> toplitz(v,u)
Unrecognized function or variable 'toplitz'.
 
Did you mean:
>> toeplitz(v,u)
Warning: First element of input column does not
match first element of input row.
         Column wins diagonal conflict. 
> In toeplitz (line 31) 

ans =

     1     5     6
     2     1     5
     3     2     1
```

- On déclare la matrice A
```
>> A = [1 2 ; 3 4]

A =

     1     2
     3     4
```
Puis on déclare la matrice B
```
>> B = [ 5 6 ; 7 8]

B =

     5     6
     7     8
```
On teste la fonction Kron : 

```
>> kron(A,B)


ans =

     5     6    10    12
     7     8    14    16
    15    18    20    24
    21    24    28    32

```
**NB ! : On remarque que la fonction kron multiplie les elements de A par la matrice B comme c-à-d :**
```
kron(A,B) =

     1*B     2*B
     3*B     4*B 
```
**On obtient donc une matrice par blocs !**

