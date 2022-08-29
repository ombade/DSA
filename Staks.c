struct stack{
    int size;
    int top;
    int* arr;
}
    struct stack S;
    S.size = 80;
    S.top = -1;
    S.arr = (int*)malloc(S.size*sizeof(int));