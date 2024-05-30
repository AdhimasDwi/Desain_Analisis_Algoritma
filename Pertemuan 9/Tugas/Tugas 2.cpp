#include<iostream>

using namespace std;

typedef struct node {
    int data; 
    node *kiri;
    node *kanan;
} node;

node *akar=NULL;

void addNode(node **akar, int isi) { 
    node *baru = new node;
    baru->data = isi;
    baru->kiri = NULL;
    baru->kanan = NULL;
    (*akar) = baru;
}

void preOrder(node *akar) {
    if (akar) {
        cout << akar->data << " "; 
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

void inOrder(node *akar) {
    if (akar) {
        inOrder(akar->kiri);
        cout << akar->data << " "; 
        inOrder(akar->kanan);
    }
}

void postOrder(node *akar) {
    if (akar) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " "; 
    }
}

int main() {
    node *root = NULL;
    addNode(&root, 12);
    root->kiri = new node{16, NULL, NULL};
    root->kanan = new node{20, NULL, NULL};
    root->kiri->kiri = new node{24, NULL, NULL};
    root->kiri->kanan = new node{32, NULL, NULL}; // Memperbaiki penempatan node 32 menjadi node kanan dari node 30

    cout << "Tampilan PreOrder  : ";
    preOrder(root);
    cout << "\nTampilan InOrder   : ";
    inOrder(root);
    cout << "\nTampilan PostOrder : ";
    postOrder(root);
    return 0;
}

