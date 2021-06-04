#Modificando o tad?

# classe para a lista ordenada usando lista encadeada
class Poli:
    # Constroi uma lista vazia
    def __init__(self):
        self._head = None # Referencia ao primeiro elemento
        self._tamanho = 0 # Número de elementos

    # Retorna o numero de elementos na lista. 
    def __len__(self):
        return self._tamanho

    # Determina se um elemento se encontra na lista.
    def __contains__(self, elem):
        noAtual = self._head
        while noAtual is not None and noAtual.elem < elem :
            noAtual = noAtual.next
        if noAtual.elem == elem :
           return True                # Retorna true se encontrou o elemento
        else :
           return False 
          
    # Adiciona um novo elemento na lista ordenada.
    def adiciona(self, elem):
        predNo = None
        noAtual = self._head
        while noAtual is not None and elem > noAtual.elem :
            predNo = noAtual
            noAtual = noAtual.next

        novoNo = _noLista(elem)    # Cria um novo nó, objeto _noLista()
        novoNo.next = noAtual      # Encadeia o novoNo antes do noAtual    

        if noAtual == self._head :
           self._head = novoNo     # Encadeia o novo elemento na frente
        else :
           predNo.next = novoNo    # Encadeia o novoNo após o predNo 
        self._tamanho += 1         # Incrementa o numero de elementos

    # Remove o elemento elem na lista ordenada.
    def remove(self, elem):
        predNo = None              # No predecessor
        noAtual = self._head       # No atual
        while noAtual is not None and noAtual.elem < elem:
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

# classe para criar um nó da lista encadeada
class _noLista(object):
    # construtor do objeto 
    def __init__(self, elem):
        #self.elem = elem    # elemento armazenado
        self.next = None    # referencia ao proximo objeto
        self.coeficiente = elem[0]
        self.expoente = elem[1]

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



a = Poli()
a.adiciona([1,2])