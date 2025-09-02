(* revert l,l2 => r
* REQUIRES l2 = nil at the begining and l1 and l2 are int lists
* ENSURES r is the list obtained by reversing l*)
fun revert([]:int list,l2 : int list): int list = l2
| revert(x::xs : int list, l2 : int list) = revert(xs,x::l2)