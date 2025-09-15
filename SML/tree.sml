datatype intTree = Leaf of int 
                    | Node of intTree * intTree

val t = Node(Leaf(1) , Leaf(2));