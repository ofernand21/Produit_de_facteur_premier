# Produit_de_facteur_premier

Tout nombre entier naturel supérieur à 1 (2,3,4...) peuvent s’écrire en produit de
Facteurs premiers, exemple (70=2x5x7). 
Mathématiquement parlant, on divise le nombre par le plus petit nombre premier qui est son diviseur puis on continue la division avec le quotient suivant le même
procédé.

En terme de programme :
Si on veut décomposer un entier N en produit de facteurs premiers on choisit comme quotient de départ q=N, on commence par le (quotient) diviser par l’entier i=2 et
on continue la division du quotient qui devient q=q/i par i=2 tant que i divise le quotient, dans le cas contraire i passe à i+1 soit i=3 et on fait la même chose
qu’à i=2. Et on continue avec le i suivant (i=i+1) jusqu’à ce que le quotient soit inférieur ou égale 1.
A la fin de ce programme tous les entiers i qui ont divisé les quotients sont les nombres premiers dont leurs produits seront égaux au nombre n de départ. Ainsi
donc nous avons décomposé notre entier N en produit de facteurs premiers.
