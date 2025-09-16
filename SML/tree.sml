datatype intTree = Leaf of int 
                    | Node of intTree * intTree

datatype stree = Empty
| Node of stree * string * stree