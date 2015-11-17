/*Estrutura de N� para implementar uma lista duplamente encadeada com aloca��o din�mica*/
/*Template usado para generalizar o tipo a ser usado como informacao de N�*/

#ifndef _NODE_H_
#define _NODE_H_

template <class T>
class Node{
      private:
        T informacao; //Informa��o do elemento
        Node *esquerda; // ponteiro para a Esquerda dele
        Node *direita;// ponteiro para a Direita dele
      public:
        Node();
        void setInfo(T);
        T getInfo(){return informacao;}
        bool setDireita(Node* P){direita = P; return true;}
        Node<T>* getDireita(){return direita;}
        bool setEsquerda(Node* P){esquerda = P; return true;}
        Node<T>* getEsquerda(){return esquerda;}
};

template <class T>
Node<T>::Node(){
    T padrao;//se Node � uma classe, padr�o ser� um objeto com construtor sem par�metro
    informacao = padrao;
    esquerda = direita = this;
}

template <class T>
void Node <T>::setInfo(T c){
     informacao = c;
}

#endif /* _NODE_H_ */
