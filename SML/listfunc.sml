fun append([]:int list , l2: int list): int list = l2
|   append(x::xs : int list , l2 : int list) = x::append(xs,l2)

fun len([]:int list) : int = 0
| len(x::xs : int list) = 1 + len(xs)

fun listadd([]:int list) : int = 0
| listadd(x::xs : int list) = x + listadd(xs)

