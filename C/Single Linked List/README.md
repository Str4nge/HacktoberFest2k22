## Linked List Operations
### Inserting a node in beginning
Node is a struct with one memeber <em>data</em> and other self referential pointer member <em>next</em><br>Let NEW be the new node which is inserted before the START
> NEW := (Node*)malloc(sizeof(Node))<br>
> NEW->data := VALUE<br>
> NEW->next := START<br>
> START := NEW
> [exit]
<hr>

### Inserting a node at the end
Node is a struct with one memeber <em>data</em> and other self referential pointer member <em>next</em><br>Let NEW be the new node which is inserted at the end
> NEW := (Node*)malloc(sizeof(Node))<br>
> NEW->data := VALUE<br>
> NEW->next := NULL<br>
> TEMP := START<br>
> Repeat line 6 while TEMP->next != NULL<br>
> TEMP := TEMP->next
> TEMP->next := NEW<br>
> [exit]

### Searching a node
Node is a struct with one memeber <em>data</em> and other self referential pointer member <em>next</em><br>Let TARGET be the data of node which we need to find
> read TARGET<br>
> TEMP := START<br>
> Repeat line 4 while TEMP->next != NULL<br>
> if TEMP->data = TARGET, then:
>   write TARGET found [exit]
> TEMP := TEMP->next<br>
> write TARGET not found
> [exit]