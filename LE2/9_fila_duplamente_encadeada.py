""" class Lista:
    def __init__(self):
        self._head = None
        self._tail = None
        self._count = 0 

    def IsEmpty(self):
        return(self._count == 0)
    def __len__(self):
        return(self._count)
    
    def enqueue(self, element):
        node = _NoLista(element)
        if self.IsEmpty():
            self._head = node
        else:
            node.previous = self._tail
            self._tail.next = node 
        
        self._tail = node
        self._count += 1

    def Print(self):
        n = len(self)
        self = self._head
        for i in range(n):
            print(self.element)
            self = self.next
            
    def PrintBackward(self):
        n = len(self)
        self = self._tail
        for i in range(n):
            print(self.element)
            self = self.previous

    def dequeue(self):
        assert not self.IsEmpty(), "Lista vazia, não é possível andar a fila"
        node = self._head
        if self._head is self._tail:
            self._tail = None
        
        self._head = self._head.next
        self._head.previous = None
        self._count -= 1
        return node.item



    
class _NoLista(object): #pesquisar melhor o que é esse objeto
    def __init__(self,element):
        self.next = None
        self.previous = None
        self.element = element """

# Livro: Data Structures and Algorithms Using Python. Rance Necaise. 2011.
# listaEncadeadaNOrdenada.py - 
# Implementa um TAD Lista não ordenada usando uma lista encadeada.
# Este tipo de lista é chamada de Bag ou bolsa, já que os elementos
# são inseridos sem qualquer ordem.

#implementa uma TAD Lista não ordenada usando uma lista encadeada

# classe para a lista não ordenada usando lista encadeada
class ListaNOrd:
    # Constroi uma lista vazia
    def __init__(self):
        self._head = None # Referencia ao primeiro elemento
        self._tamanho = 0 # Número de elementos
        self._tail = None

    # Retorna o numero de elementos na lista. 
    def __len__(self):
        return self._tamanho

    # Determina se um elemento se encontra na lista.
    def __contains__(self, elem):
        noAtual = self._head
        while noAtual is not None and noAtual.elem != elem:
            noAtual = noAtual.next
        return noAtual is not None # Retorna true se o nó atual não é nulo

    # Adiciona um novo elemento na lista.
    def adiciona(self, elem):
        novoNo = _noLista(elem)    # Cria um novo nó, objeto _noLista()
        novoNo.next = self._head   # Encadeia o novo elemento na frente   
        if(self.__len__() == 0):
            self._tail = novoNo
        if(self.__len__() > 0):
            self._head.previous = novoNo
        self._head = novoNo        # Encadeia o novo elemento na frente
        self._tamanho += 1         # Incrementa o numero de elementos
     
            


    # Remove o elemento elem na lista.
    def remove(self, elem):
        predNo = None              # No predecessor
        noAtual = self._head       # No atual
        while noAtual is not None and noAtual.elem != elem:
            predNo = noAtual
            noAtual = noAtual.next

        assert noAtual is not None, "O elemento deve estar na lista!"
        self._tamanho -= 1
        if noAtual is self._head:       # Elemento está na primeira posição
            self._head = noAtual.next   # Realiza o encadeamento para exclusão
        else:
            predNo.next = noAtual.next  # Realiza o encadeamento para exclusão
        return noAtual.elem

    # Cria um iterador para percorrer a lista. 
    def __iter__(self):
        return _IteradorListaNOrd(self._head) # Objeto iterador

    def PrintBackwars(self):
        n = self._tamanho
        self = self._head
        for i in range(n):
            print(self.elem)
            self = self.next
    
    def Print(self):
        n = self._tamanho
        self = self._tail
        for i in range(n):
            print(self.elem)
            self = self.previous



# classe para criar um nó da lista encadeada
class _noLista(object):
    # construtor do objeto 
    def __init__(self, elem):
        self.elem = elem    # elemento armazenado
        self.next = None    # referencia ao proximo objeto
        self.previous = None

# clase para o iterador da lista
class _IteradorListaNOrd:

    # Cria o iterador com uma referencia ao no atual
    def __init__(self, listHead):
        self._noAtual = listHead

    # Retorna uma referencia ao iterador
    def __iter__(self):
        return self

    # Retorna o elemento atual da lista e posiciona no próximo
    def __next__(self):
        if self._noAtual is None:
            raise StopIteration
        else:
            elem = self._noAtual.elem
            self._noAtual = self._noAtual.next
            return elem


a = ListaNOrd()
a.adiciona(1)
a.adiciona(2)
a.adiciona(3)
a.adiciona(4)
a.adiciona(5)
a.PrintBackwars()
print()
a.Print()