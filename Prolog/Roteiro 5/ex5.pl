
par(X):-
    G is X mod 2,
    G =:= 0.

s --> s_1.
s --> s_1,s.
s_1 --> p.

p --> [par].

p --> [2].
p --> [4].
p --> [6].
p --> [8].
