(* fact n ==> r
*  REQUIRES : n >= 0
*  ENSURES n! = r
*)
fun fact (0 : int) : int = 1
    | fact n = n * fact(n - 1);

fun sumfact(0: int, a : int) : int  = a
    | sumfact(n,a) = n + sumfact(n - 1 ,a)
