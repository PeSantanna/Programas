p(1).
p(2):- !.
p(3).

/*
?- p(X).
X = 1 ;
X = 2.

?- p(X),p(Y).
X = Y, Y = 1 ;
X = 1,
Y = 2 ;
X = 2,
Y = 1 ;
X = Y, Y = 2.

?- p(X),!,p(Y).
X = Y, Y = 1 ;
X = 1,
Y = 2.

*/

