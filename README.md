# StackC
Stack in C

Big issue: Only works for integers, To make the stack work for other types, you'll need to 
    change code.

stack_create_int() takes a size, returns a ptr
stack_push_int() takes a ptr and value, pushes value to the top of stack
stack_get_int() gets value from top of stack
stack_pop_int() removes value from top of stack
stack_delete_int() deletes stack


# Operations


• push( x ): Insert element x at the top of a stack

void push (int stack[ ] , int x , int n) {
 if ( top == n-1 ) {         //If the top position is the last of position in a stack, this means that the stack is full
    cout << “Stack is full.Overflow condition!” ;
    }
    else{
        top = top +1 ;            //Incrementing top position 
        stack[ top ] = x ;       //Inserting element on incremented position  
    }
}

•pop( ): Removes an element from the top of a stack

   void pop (int stack[ ] ,int n ) 
    {

        if( isEmpty ( ) )
        {
            cout << “Stack is empty. Underflow condition! ” << endl ;
        }
        else    
        {
             top = top - 1 ; //Decrementing top’s position will detach last element from stack            
        }
    }
• topElement ( ): Access the top element of a stack

  int topElement ( )
    {
        return stack[ top ];
    }
• isEmpty ( ) : Check whether a stack is empty

    bool isEmpty ( )
    {
        if ( top == -1 )  //Stack is empty
        return true ; 
        else
        return false;
    }
• size ( ): Determines the current size of a stack

   int size ( )
    {
        return top + 1;
    }
